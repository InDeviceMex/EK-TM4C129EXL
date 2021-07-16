/**
 *
 * @file OS_Task_Create.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Create.h>

#include <xOS/Task/xHeader/OS_Task_Defines.h>


#include <xOS/Task/xHeader/OS_Task_Delayed.h>
#include <xOS/Task/xHeader/OS_Task_Deleted.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>

#define OS_TASK_STACK_FILL_BYTE  (0xA5U)
#define OS_TASK_IDLE_STACK_SIZE (100UL)
#define OS_TASK_YIELD_IF_USING_PREEMPTION() OS_ADAPT_YIELD_WITHIN_API()


#define OS_TASK_BLOCKED_CHAR     ('B')
#define OS_TASK_READY_CHAR       ('R')
#define OS_TASK_DELETED_CHAR     ('D')
#define OS_TASK_SUSPENDED_CHAR   ('S')


static OS_Task_Handle_TypeDef pvIdleTaskHandle = (OS_Task_Handle_TypeDef) 0UL;         /*< Holds the handle of the idle task.  The idle task is created automatically when the scheduler is started. */

/* Other file private variables. --------------------------------*/
static volatile uint32_t u32CurrentNumberOfTasks = 0UL;
static uint32_t u32TaskNumber = 0UL;


static uint32_t u32TaskSwitchedInTime = 0UL; /*< Holds the value of a timer/counter the last time a task was switched in. */
static uint32_t u32TotalRunTime = 0UL;       /*< Holds the total amount of execution time as defined by the run time counter clock. */

uint32_t OS_Task__u32GetCurrentNumberOfTasks(void)
{
    return (u32CurrentNumberOfTasks);
}
#if 0
uint32_t OS_Task__u32TaskGenericCreate( OS_Task_Function_Typedef pxTaskCode, const char * const pcName, const uint32_t u32StackDepth, void * const pvParameters, uint32_t uxPriority, OS_Task_Handle_TypeDef * const pxCreatedTask )
{
uint32_t u32Return;
OS_TASK_TCB * pstNewTCB;
uint32_t *pu32TopOfStack;

    configASSERT( pxTaskCode );
    configASSERT( ( ( uxPriority & ( uint32_t ) ( ~portPRIVILEGE_BIT ) ) < ( uint32_t ) configMAX_PRIORITIES ) );

    /* Allocate the memory required by the TCB and stack for the new task,
    checking that the allocation was successful. */
    pstNewTCB = OS_Task__pstAllocateTCBAndStack( u32StackDepth);

    if( pstNewTCB != NULL )
    {


        pu32TopOfStack = pstNewTCB->pxStack;

        /* Check the alignment of the stack buffer is correct. */
        configASSERT( ( ( ( portPOINTER_SIZE_TYPE ) pstNewTCB->pxStack & ( portPOINTER_SIZE_TYPE ) portBYTE_ALIGNMENT_MASK ) == 0UL ) );

        /* If we want to use stack checking on architectures that use
        a positive stack growth direction then we also need to store the
        other extreme of the stack space. */
        pstNewTCB->pxEndOfStack = pstNewTCB->pxStack + ( u32StackDepth - 1 );

        /* Setup the newly allocated TCB with the initial state of the task. */
        prvInitialiseTCBVariables( pstNewTCB, pcName, uxPriority, xRegions, u32StackDepth );

        /* Initialize the TCB stack to look as if the task was already running,
        but had been interrupted by the scheduler.  The return address is set
        to the start of the task function. Once the stack has been initialised
        the top of stack variable is updated. */

        pstNewTCB->pu32TopOfStack = pxPortInitialiseStack( pu32TopOfStack, pxTaskCode, pvParameters );

        if( ( void * ) pxCreatedTask != NULL )
        {
            /* Pass the TCB out - in an anonymous way.  The calling function/
            task can use this as a handle to delete the task later if
            required.*/
            *pxCreatedTask = ( OS_Task_Handle_TypeDef ) pstNewTCB;
        }

        /* Ensure interrupts don't access the task lists while they are being
        updated. */
        taskENTER_CRITICAL();
        {
            uxCurrentNumberOfTasks++;
            if( pxCurrentTCB == NULL )
            {
                /* There are no other tasks, or all the other tasks are in
                the suspended state - make this the current task. */
                pxCurrentTCB =  pstNewTCB;

                if( uxCurrentNumberOfTasks == ( uint32_t ) 1 )
                {
                    /* This is the first task to be created so do the preliminary
                    initialisation required.  We will not recover if this call
                    fails, but we will report the failure. */
                    prvInitialiseTaskLists();
                }
            }
            else
            {
                /* If the scheduler is not already running, make this task the
                current task if it is the highest priority task to be created
                so far. */
                if( xSchedulerRunning == pdFALSE )
                {
                    if( pxCurrentTCB->uxPriority <= uxPriority )
                    {
                        pxCurrentTCB = pstNewTCB;
                    }
                }
            }

            uxTaskNumber++;

            {
                /* Add a counter into the TCB for tracing only. */
                pstNewTCB->uxTCBNumber = uxTaskNumber;
            }
            traceTASK_CREATE( pstNewTCB );

            prvAddTaskToReadyList( pstNewTCB );

            u32Return = pdPASS;
            portSETUP_TCB( pstNewTCB );
        }
        taskEXIT_CRITICAL();
    }
    else
    {
        u32Return = errCOULD_NOT_ALLOCATE_REQUIRED_MEMORY;
        traceTASK_CREATE_FAILED();
    }

    if( u32Return == pdPASS )
    {
        if( xSchedulerRunning != pdFALSE )
        {
            /* If the created task is of a higher priority than the current task
            then it should run now. */
            if( pxCurrentTCB->uxPriority < uxPriority )
            {
                taskYIELD_IF_USING_PREEMPTION();
            }
        }
    }

    return u32Return;
}
#endif


static void OS_Task__vInitialiseTaskLists( void )
{
    OS_Task__vInitialiseReadyTaskLists();
    OS_Task__vInitialiseDelayedTaskLists();
    OS_Task__vInitialiseDeletedTaskLists();
    OS_Task__vInitialiseSuspendedTaskLists();
}
