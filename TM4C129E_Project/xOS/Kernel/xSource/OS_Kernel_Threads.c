/**
 *
 * @file OS_Kernel_Threads.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xOS/Kernel/xHeader/OS_Kernel_Threads.h>
#include <xOS/TCB/OS_TCB.h>
#include <stdlib.h>

#define OK_KERNEL_MINIMAL_STACK_SIZE  (60UL)
#define OK_KERNEL_IDLE_STACK_SIZE  OK_KERNEL_MINIMAL_STACK_SIZE

static uint32_t OS_Kernel__u32GetCreatedThread(void);
static void OS_Kernel__vSetCreatedThread(uint32_t u32Value);
static void OS_Kernel__vIncreaseCreatedThread(void);

static void OS_Kernel__vErrorTask(void);
static uint32_t* OS_Kernel_StackInit( uint32_t* pu32TopOfStackTop, OS_ThreadFunction_TypeDef pfvThread, void *pvParameters );

static uint32_t OS_Kernel_u32CreatedThread = 0UL;

static OS_TCB_Container_Typedef* OS_Kernel_psCurrentTask = (OS_TCB_Container_Typedef*) 0UL;

/** Lists for ready and blocked tasks. --------------------*/
static OS_TCB_TypeDef pstReadyTasksLists[ OS_TCB_PRIORITY_MAX ];/*< Prioritised ready tasks. */
static OS_TCB_TypeDef pstPendingReadyList;                        /*< Tasks that have been readied while the scheduler was suspended.  They will be moved to the ready list when the scheduler is resumed. */
static OS_TCB_TypeDef pstDelayedTaskList1;                        /*< Delayed tasks. */
static OS_TCB_TypeDef pstDelayedTaskList2;                        /*< Delayed tasks (two lists are used - one for delays that have overflowed the current tick count. */
static OS_TCB_TypeDef * volatile pstDelayedTaskList;             /*< Points to the delayed task list currently being used. */
static OS_TCB_TypeDef * volatile pstOverflowDelayedTaskList;     /*< Points to the delayed task list currently being used to hold tasks that have overflowed the current tick count. */


static OS_TCB_TypeDef stTasksWaitingTermination;             /*< Tasks that have been deleted - but their memory not yet freed. */
static volatile uint32_t u32TasksDeleted = 0UL;

static OS_TCB_TypeDef stSuspendedTaskList;                   /*< Tasks that are currently suspended. */
static void* pvIdleTaskHandle = (void*) 0UL;         /*< Holds the handle of the idle task.  The idle task is created automatically when the scheduler is started. */

/* Other file private variables. --------------------------------*/
static volatile uint32_t u32CurrentNumberOfTasks = 0UL;
static volatile uint32_t u32TickCount = 0UL;
static volatile uint32_t u32TopReadyPriority = 0UL;
static volatile uint32_t u32SchedulerRunning = 0UL;
static volatile uint32_t u32PendedTicks = 0UL;
static volatile uint32_t u32YieldPending = 0UL;
static volatile uint32_t u32NumOfOverflows = 0UL;
static uint32_t u32TaskNumber = 0UL;
static volatile uint32_t u32NextTaskUnblockTime = 0UL; /* Initialised to MAX_DELAY before the scheduler starts. */

static volatile uint32_t u32SchedulerSuspended = 0UL;


static uint32_t u32TaskSwitchedInTime = 0UL; /*< Holds the value of a timer/counter the last time a task was switched in. */
static uint32_t u32TotalRunTime = 0UL;       /*< Holds the total amount of execution time as defined by the run time counter clock. */

OS_TCB_Element_TypeDef* OS_Kernel__CreateThread(OS_ThreadFunction_TypeDef pfvThread,const char* pcNameArg, uint32_t u32StackSizeArg, void *pvParameters, uint32_t u32PriorityArg)
{
    OS_TCB_Element_TypeDef* pstElement = (OS_TCB_Element_TypeDef*) 0UL;
    OS_TCB_Element_TypeDef* pstCurrentTaskReg = (OS_TCB_Element_TypeDef*) 0UL;
    OS_TCB_Container_Typedef* pstData = (OS_TCB_Container_Typedef*) 0UL;
    char* pcNamePointer = (char*) 0UL;
    uint32_t u32Count = 0UL;
    uint32_t* pu32TopOfStackTemp = (uint32_t*) 0UL;
    #if defined (__TI_ARM__ )
    pstData = (OS_TCB_Container_Typedef*) memalign( (size_t) 8, (size_t) sizeof(OS_TCB_Container_Typedef));
    #elif defined (__GNUC__ )
    pstData = (OS_TCB_Container_Typedef*) malloc(sizeof(OS_TCB_Container_Typedef));
    #endif
    if(0UL != (uint32_t) pstData)
    {
        if(OK_KERNEL_MINIMAL_STACK_SIZE > u32StackSizeArg)
        {
            u32StackSizeArg = OK_KERNEL_MINIMAL_STACK_SIZE;
        }
#if defined (__TI_ARM__ )
        pstData->pu32Stack = (uint32_t*) memalign( (size_t) 4, (size_t) u32StackSizeArg * sizeof(int32_t));
#elif defined (__GNUC__ )
        pstData->pu32Stack = (uint32_t*) malloc(u32StackSizeArg * sizeof(int32_t));
#endif
        if(0UL != (uint32_t) pstData->pu32Stack)
        {
            pcNamePointer = pstData->pcName;
            while((0U != (uint8_t) *pcNameArg) && (u32Count < OS_TCB_NAME_LENGTH ))
            {
                *pcNamePointer = *pcNameArg;
                (pcNamePointer) += 1UL;
                pcNameArg += 1UL;
                u32Count++;
            }
            pstData->pcName[u32Count] = (char) 0U;
            if(u32PriorityArg > OS_TCB_PRIORITY_MAX)
            {
                pstData->u32Priority = OS_TCB_PRIORITY_MAX;
            }
            else
            {
                pstData->u32Priority = (uint32_t) u32PriorityArg;
            }

            /**
            pstData->stTCBTaskStateList =
            pstData->stTCBEventList =
            */

            /**Critical Nesting*/
            pstData->u32CriticalNesting = 0UL;

            /**Trace*/
            pstData->u32ID = OS_Kernel__u32GetCreatedThread();

            /**Mutexes */
            pstData->u32BasePriority = pstData->u32Priority;
            pstData->u32MutexesHeld = 0UL;

            /**Run Time Stats*/
            pstData->u32Period = 0UL;
            pstData->u32RunTimeCounter = 0UL;

            /**Task notifications*/
            pstData->u32NotifyValue = 0UL;
            pstData->enNotifyState = OS_TCB_enNotWaitingNotification;

            pstData->u32StackSize = (uint32_t) u32StackSizeArg;
            pu32TopOfStackTemp = pstData->pu32Stack;
            pu32TopOfStackTemp += u32StackSizeArg;
            pstData->pu32TopOfStack = OS_Kernel_StackInit(pu32TopOfStackTemp, pfvThread, pvParameters);

            OS_Kernel__vIncreaseCreatedThread();
            pstElement = OS_TCB__pstAdd(pstData);
            pstCurrentTaskReg = OS_Kernel__u32GetCurrentTask();
            if(0UL == (uint32_t) pstCurrentTaskReg)
            {
                OS_Kernel__vSetCurrentTask(pstElement);
            }
        }
    }
    return pstElement;
}

void OS_Kernel__vDestroyElement(void *pvDataContainerArg)
{
    OS_TCB_Container_Typedef *pstDataContainer = (OS_TCB_Container_Typedef*) pvDataContainerArg;
    uint32_t u32Count = 0UL;
    char* pcNamePointer = (char*) 0U;
    if(0UL != (uint32_t) pvDataContainerArg)
    {
        free((void*) pstDataContainer->pu32Stack);

        pstDataContainer->pu32TopOfStack = (uint32_t*) 0UL;
        pstDataContainer->stTCBTaskStateList.u32Size = 0UL;
        pstDataContainer->stTCBTaskStateList.pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
        pstDataContainer->stTCBTaskStateList.pfvDestroyElementData = (void (*) (void *DataContainer)) 0UL;
        pstDataContainer->stTCBTaskStateList.pfvDestroy = (void (*) (void* List)) 0UL;
        pstDataContainer->stTCBTaskStateList.pstHead = (CSLinkedListElement_TypeDef*) 0UL;
        pstDataContainer->stTCBTaskStateList.pstTail = (CSLinkedListElement_TypeDef*) 0UL;

        pstDataContainer->stTCBEventList.u32Size = 0UL;
        pstDataContainer->stTCBEventList.pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
        pstDataContainer->stTCBEventList.pfvDestroyElementData = (void (*) (void *DataContainer)) 0UL;
        pstDataContainer->stTCBEventList.pfvDestroy = (void (*) (void* List)) 0UL;
        pstDataContainer->stTCBEventList.pstHead = (CSLinkedListElement_TypeDef*) 0UL;
        pstDataContainer->stTCBEventList.pstTail = (CSLinkedListElement_TypeDef*) 0UL;

        pstDataContainer->u32Priority = 0UL;
        pstDataContainer->pu32Stack = (uint32_t*) 0UL;
        pstDataContainer->u32StackSize = 0UL;
        pcNamePointer = pstDataContainer->pcName;
        while(((char) 0U != *pcNamePointer) && (u32Count < OS_TCB_NAME_LENGTH))
        {
            *pcNamePointer = (char) 0U;
            pcNamePointer += 1UL;
            u32Count++;
        }
        pstDataContainer->u32CriticalNesting = 0UL;
        pstDataContainer->u32ID = 0UL;
        pstDataContainer->u32BasePriority = 0UL;
        pstDataContainer->u32MutexesHeld = 0UL;
        pstDataContainer->u32Period = 0UL;
        pstDataContainer->u32RunTimeCounter = 0UL;
        pstDataContainer->u32NotifyValue = 0UL;

        /**Task notifications*/
        pstDataContainer->enNotifyState = OS_TCB_enNotWaitingNotification;
        free((void*) pstDataContainer);
    }
}

#define OS_KERNEL_INITIAL_XPSR  ( 0x01000000UL )
#define OS_KERNEL_EXEC_RETURN  ( 0xFFFFFFFDUL )

static uint32_t *OS_Kernel_StackInit( uint32_t* pu32TopOfStackTop, OS_ThreadFunction_TypeDef pfvThread, void *pvParameters )
{
    /* Simulate the stack frame as it would be created by a context switch
    interrupt. */

    /* Offset added to account for the way the MCU uses the stack on entry/exit
    of interrupts, and to ensure alignment. */
    pu32TopOfStackTop -= 1UL;

    *pu32TopOfStackTop = OS_KERNEL_INITIAL_XPSR;   /* xPSR */
    pu32TopOfStackTop-= 1UL;
    *pu32TopOfStackTop = (uint32_t)  pfvThread; /* PC */
    pu32TopOfStackTop-= 1UL;
    *pu32TopOfStackTop = (uint32_t) &OS_Kernel__vErrorTask;    /* LR */

    /* Save code space by skipping register initialisation. */
    pu32TopOfStackTop -= 5;  /* R12, R3, R2 and R1. */
    *pu32TopOfStackTop = ( uint32_t ) pvParameters;   /* R0 */

    /* A save method is being used that requires each task to maintain its
    own exec return value. */
    pu32TopOfStackTop-= 1UL;
    *pu32TopOfStackTop = OS_KERNEL_EXEC_RETURN;

    pu32TopOfStackTop -= 8;  /* R11, R10, R9, R8, R7, R6, R5 and R4. */

    return pu32TopOfStackTop;
}

static uint32_t OS_Kernel__u32GetCreatedThread(void)
{
    return OS_Kernel_u32CreatedThread;
}

static void OS_Kernel__vSetCreatedThread(uint32_t u32Value)
{
    OS_Kernel_u32CreatedThread = u32Value;
}

OS_TCB_Element_TypeDef* OS_Kernel__u32GetCurrentTask(void)
{
    return OS_Kernel_psCurrentTask;
}

void OS_Kernel__vSetCurrentTask(OS_TCB_Element_TypeDef* pstCurrentTask)
{
    OS_Kernel_psCurrentTask = pstCurrentTask;
}


static void OS_Kernel__vIncreaseCreatedThread(void)
{
    OS_Kernel_u32CreatedThread++;
}


static void OS_Kernel__vErrorTask(void)
{
    while(1UL);
}
