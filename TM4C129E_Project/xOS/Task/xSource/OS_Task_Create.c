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

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/Adapt/xHeader/OS_Adapt_Stack.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>

#define OS_TASK_STACK_FILL_BYTE  (0xA5U)


#define OS_TASK_BLOCKED_CHAR     ('B')
#define OS_TASK_READY_CHAR       ('R')
#define OS_TASK_DELETED_CHAR     ('D')
#define OS_TASK_SUSPENDED_CHAR   ('S')

static void OS_Task__vInitialiseTaskLists( void );


uint32_t OS_Task__u32TaskGenericCreate( OS_Task_Function_Typedef pfvTaskCodeArg, const char * const pcNameArg,
                                        const uint32_t u32StackDepthArg, void * const pvParametersArg, uint32_t u32PriorityArg,
                                        OS_Task_Handle_TypeDef * const pvCreatedTask )
{
    uint32_t u32Return = 1UL;
    OS_TASK_TCB * pstNewTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB * pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    uint32_t *pu32TopOfStackReg = (uint32_t*) 0UL;
    uint32_t u32SchedulerRunning = 0UL;
    uint32_t u32CurrentNumberOfTask = 0UL;

    if(0UL != (uint32_t) pfvTaskCodeArg)
    {
        if(OS_TASK_MAX_PRIORITIES > u32PriorityArg)
        {
            /* Allocate the memory required by the TCB and stack for the new task,
            checking that the allocation was successful. */
            pstNewTCB = OS_Task__pstAllocateTCBAndStack(u32StackDepthArg);

            if( 0UL != (uint32_t) pstNewTCB)
            {

                /* Check the alignment of the stack buffer is correct. */
                if(0UL == (OS_ADAPT_BYTE_ALIGNMENT_MASK & (uint32_t) pstNewTCB->pu32Stack))
                {

                    /* If we want to use stack checking on architectures that use
                    a positive stack growth direction then we also need to store the
                    other extreme of the stack space. */
                    pstNewTCB->pu32EndOfStack = pstNewTCB->pu32Stack;
                    pstNewTCB->pu32EndOfStack += u32StackDepthArg;
                    pstNewTCB->pu32EndOfStack -= 1UL;

                    pu32TopOfStackReg = pstNewTCB->pu32EndOfStack;
                    /* Setup the newly allocated TCB with the initial state of the task. */
                    OS_Task__vInitialiseTCBVariables( pstNewTCB, pcNameArg, u32PriorityArg);

                    /* Initialize the TCB stack to look as if the task was already running,
                    but had been interrupted by the scheduler.  The return address is set
                    to the start of the task function. Once the stack has been initialised
                    the top of stack variable is updated. */

                    pstNewTCB->pu32TopOfStack = OS_Adapt__p32InitialiseStack( pu32TopOfStackReg, (void (*)( void * pvParameters )) pfvTaskCodeArg, (void*) pvParametersArg);

                    if(0UL != (uint32_t) pvCreatedTask)
                    {
                        /* Pass the TCB out - in an anonymous way.  The calling function/
                        task can use this as a handle to delete the task later if
                        required.*/
                        *pvCreatedTask = ( OS_Task_Handle_TypeDef ) pstNewTCB;
                    }

                    /* Ensure interrupts don't access the task lists while they are being
                    updated. */
                    OS_Task__vEnterCritical();
                    {
                        OS_Task__vIncreaseCurrentNumberOfTasks();
                        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if( 0UL == (uint32_t) pstCurrentTCB )
                        {
                            /* There are no other tasks, or all the other tasks are in
                            the suspended state - make this the current task. */
                            OS_Task__vSetCurrentTCB(pstNewTCB);
                            u32CurrentNumberOfTask = OS_Task__u32GetCurrentNumberOfTasks();
                            if(1UL == u32CurrentNumberOfTask)
                            {
                                /* This is the first task to be created so do the preliminary
                                initialisation required.  We will not recover if this call
                                fails, but we will report the failure. */
                                OS_Task__vInitialiseTaskLists();
                            }
                        }
                        else
                        {
                            /* If the scheduler is not already running, make this task the
                            current task if it is the highest priority task to be created
                            so far. */
                            u32SchedulerRunning = OS_Task__u32GetSchedulerRunning();
                            if( 0UL == u32SchedulerRunning)
                            {
                                if( pstCurrentTCB->u32PriorityTask <= u32PriorityArg )
                                {
                                    OS_Task__vSetCurrentTCB(pstNewTCB);
                                }
                            }
                        }
                        OS_Task__vIncreaseTaskNumber();

                        {
                            /* Add a counter into the TCB for tracing only. */
                            pstNewTCB->u32TCBNumber = (uint32_t) OS_Task__u32GetTaskNumber();
                        }

                        OS_Task__vAddTaskToReadyList(pstNewTCB);

                        u32Return = 1UL;
                    }
                    OS_Task__vExitCritical();
                }
                else
                {
                    u32Return = 2UL;
                }

                if( u32Return == 1UL )
                {
                    u32SchedulerRunning = OS_Task__u32GetSchedulerRunning();
                    if( 0UL != u32SchedulerRunning)
                    {
                        /* If the created task is of a higher priority than the current task
                        then it should run now. */
                        if( pstCurrentTCB->u32PriorityTask < u32PriorityArg )
                        {
                            OS_Task__vYieldIfUsingPreemption();
                        }
                    }
                }
            }
        }
    }
    return u32Return;
}


static void OS_Task__vInitialiseTaskLists( void )
{
    OS_Task__vInitialiseReadyTaskLists();
    OS_Task__vInitialiseDelayedTaskLists();
    OS_Task__vInitialiseDeletedTaskLists();
    OS_Task__vInitialiseSuspendedTaskLists();
}
