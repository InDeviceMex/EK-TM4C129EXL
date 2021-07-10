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

static uint32_t OS_Kernel__u32GetCreatedThread(void);
static void OS_Kernel__vSetCreatedThread(uint32_t u32Value);
static void OS_Kernel__vIncreaseCreatedThread(void);

static void OS_Kernel__vErrorTask(void);
static uint32_t* OS_Kernel_StackInit( uint32_t* pu32StackTop, OS_ThreadFunction_TypeDef pfvThread, void *pvParameters );

static uint32_t OS_Kernel_CreatedThread = 0UL;
static OS_TCB_Element_TypeDef* OS_Kernel_NextTask = (OS_TCB_Element_TypeDef*) 0UL;

OS_TCB_Element_TypeDef* OS_Kernel__CreateThread(OS_ThreadFunction_TypeDef pfvThread,const char* pcNameArg, uint32_t u32StackSizeArg, void *pvParameters, uint32_t u32PriorityArg)
{
    OS_TCB_Element_TypeDef* pstElement = (OS_TCB_Element_TypeDef*) 0UL;
    OS_TCB_Element_TypeDef* pstNextTaskReg = (OS_TCB_Element_TypeDef*) 0UL;
    OS_TCB_Container_Typedef* pstData = (OS_TCB_Container_Typedef*) 0UL;
    char* pcNamePointer = (char*) 0UL;
    uint32_t u32Count = 0UL;
    uint32_t* pu32StackTemp = (uint32_t*) 0UL;
    #if defined (__TI_ARM__ )
    pstData = (OS_TCB_Container_Typedef*) memalign( (size_t) 8, (size_t) sizeof(OS_TCB_Container_Typedef));
    #elif defined (__GNUC__ )
    pstData = (OS_TCB_Container_Typedef*) malloc(sizeof(OS_TCB_Container_Typedef));
    #endif
    if(0UL != (uint32_t) pstData)
    {
#if defined (__TI_ARM__ )
        pstData->pu32StackEnd = (uint32_t*) memalign( (size_t) 4, (size_t) u32StackSizeArg * sizeof(int32_t));
#elif defined (__GNUC__ )
        pstData->pu32StackEnd = (uint32_t*) malloc(u32StackSizeArg * sizeof(int32_t));
#endif
        if(0UL != (uint32_t) pstData->pu32StackEnd)
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
            pstData->u32BasePriority = pstData->u32Priority;
            pstData->u32BurstTime = 0UL;
            pstData->u32Period = 0UL;
            pstData->u32ID = OS_Kernel__u32GetCreatedThread();
            pstData->u32StackSize = u32StackSizeArg;
            pu32StackTemp = pstData->pu32StackEnd;
            pu32StackTemp += u32StackSizeArg;
            pstData->pu32Stack = OS_Kernel_StackInit(pu32StackTemp, pfvThread, pvParameters);
            pstData->enStateTask = OS_TCB_enSTATE_READY;

            OS_Kernel__vIncreaseCreatedThread();
            pstElement = OS_TCB__pstAdd(pstData);
            pstNextTaskReg = OS_Kernel__u32GetNextTask();
            if(0UL == (uint32_t) pstNextTaskReg)
            {
                OS_Kernel__vSetNextTask(pstElement);
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
        free((void*) pstDataContainer->pu32StackEnd);

        pstDataContainer->pu32Stack = (uint32_t*) 0UL;
        pstDataContainer->pu32StackEnd = (uint32_t*) 0UL;
        pstDataContainer->enStateTask = OS_TCB_enSTATE_READY;
        pstDataContainer->u32StackSize = 0UL;
        pstDataContainer->u32ID = 0UL;
        pstDataContainer->u32Period = 0UL;
        pstDataContainer->u32BurstTime = 0UL;
        pstDataContainer->u32Priority = 0UL;
        pstDataContainer->u32BasePriority = 0UL;

        pcNamePointer = pstDataContainer->pcName;
        while(((char) 0U != *pcNamePointer) && (u32Count < OS_TCB_NAME_LENGTH))
        {
            *pcNamePointer = (char) 0U;
            pcNamePointer += 1UL;
            u32Count++;
        }

        free((void*) pstDataContainer);
    }
}

#define OS_KERNEL_INITIAL_XPSR  ( 0x01000000UL )
#define OS_KERNEL_EXEC_RETURN  ( 0xFFFFFFFDUL )

static uint32_t *OS_Kernel_StackInit( uint32_t* pu32StackTop, OS_ThreadFunction_TypeDef pfvThread, void *pvParameters )
{
    /* Simulate the stack frame as it would be created by a context switch
    interrupt. */

    /* Offset added to account for the way the MCU uses the stack on entry/exit
    of interrupts, and to ensure alignment. */
    pu32StackTop -= 1UL;

    *pu32StackTop = OS_KERNEL_INITIAL_XPSR;   /* xPSR */
    pu32StackTop-= 1UL;
    *pu32StackTop = (uint32_t)  pfvThread; /* PC */
    pu32StackTop-= 1UL;
    *pu32StackTop = (uint32_t) &OS_Kernel__vErrorTask;    /* LR */

    /* Save code space by skipping register initialisation. */
    pu32StackTop -= 5;  /* R12, R3, R2 and R1. */
    *pu32StackTop = ( uint32_t ) pvParameters;   /* R0 */

    /* A save method is being used that requires each task to maintain its
    own exec return value. */
    pu32StackTop-= 1UL;
    *pu32StackTop = OS_KERNEL_EXEC_RETURN;

    pu32StackTop -= 8;  /* R11, R10, R9, R8, R7, R6, R5 and R4. */

    return pu32StackTop;
}

static uint32_t OS_Kernel__u32GetCreatedThread(void)
{
    return OS_Kernel_CreatedThread;
}

static void OS_Kernel__vSetCreatedThread(uint32_t u32Value)
{
    OS_Kernel_CreatedThread = u32Value;
}

OS_TCB_Element_TypeDef* OS_Kernel__u32GetNextTask(void)
{
    return OS_Kernel_NextTask;
}

void OS_Kernel__vSetNextTask(OS_TCB_Element_TypeDef* pstNextTask)
{
    OS_Kernel_NextTask = pstNextTask;
}


static void OS_Kernel__vIncreaseCreatedThread(void)
{
    OS_Kernel_CreatedThread++;
}


static void OS_Kernel__vErrorTask(void)
{
    while(1UL);
}
