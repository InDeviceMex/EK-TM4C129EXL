/**
 *
 * @file OS_Task_Suspended.c
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
#include <xOS/Task/xHeader/OS_Task_Suspended.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/Task/xHeader/OS_Task_Scheduler.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>

void OS_Task__vSuspendAll(void)
{
    /* A critical section is not required as the variable is of type
    uint32_t.  Please read Richard Barry's reply in the following link to a
    post in the FreeRTOS support forum before reporting this as a bug! -
    http://goo.gl/wu4acr */
    OS_Task__vIncreaseSchedulerSuspended();
}

uint32_t OS_Task__u32ResumeAll(void)
{
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstPendingReadyList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32AlreadyYielded = 0UL;
    uint32_t u32PendedTicks = 0UL;
    uint32_t u32YieldPending = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    uint32_t u32CurrentNumberOfTasks = 0UL;
    CDLinkedList_nSTATUS enIsListEmpty = CDLinkedList_enSTATUS_OK;

    /* If u32SchedulerSuspended is zero then this function does not match a
    previous call to vTaskSuspendAll(). */
    u32SchedulerSuspended =  OS_Task__u32GetSchedulerSuspended();
    if(0UL < u32SchedulerSuspended )
    {
        /* It is possible that an ISR caused a task to be removed from an event
        list while the scheduler was suspended.  If this was the case then the
        removed task will have been added to the stPendingReadyList.  Once the
        scheduler has been resumed it is safe to move all the pending ready
        tasks from this list into their appropriate ready list. */
        OS_Task__vEnterCritical();
        {
            --u32SchedulerSuspended;
            OS_Task__vSetSchedulerSuspended(u32SchedulerSuspended);

            if(0UL == u32SchedulerSuspended)
            {
                u32CurrentNumberOfTasks = OS_Task__u32GetCurrentNumberOfTasks();
                if(0UL <  u32CurrentNumberOfTasks)
                {
                    /* Move any readied tasks from the pending list into the
                    appropriate ready list. */
                    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                    enIsListEmpty = CDLinkedList__enIsEmpty(pstPendingReadyList);
                    while(CDLinkedList_enSTATUS_ERROR == enIsListEmpty)
                    {
                        pstTCB = ( OS_TASK_TCB * ) CDLinkedList__pvGetDataHead(pstPendingReadyList);
                        CDLinkedList__enRemove(&(pstTCB->stEventListItem));
                        CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);

                        /* If the moved task has a priority higher than the current
                        task then a yield must be performed. */
                        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if( pstTCB->u32PriorityTask >= pstCurrentTCB->u32PriorityTask )
                        {
                            OS_Task__vSetYieldPending(1UL);
                        }

                        enIsListEmpty = CDLinkedList__enIsEmpty(pstPendingReadyList);
                    }

                    /* If any ticks occurred while the scheduler was suspended then
                    they should be processed now.  This ensures the tick count does
                    not slip, and that any delayed tasks are resumed at the correct
                    time. */
                    u32PendedTicks = OS_Task__u32GetPendedTicks();
                    if(0UL < u32PendedTicks)
                    {
                        while( 0UL < u32PendedTicks)
                        {
                            if( OS_Task__u32TaskIncrementTick() != 0UL )
                            {
                                OS_Task__vSetYieldPending(1UL);
                            }
                            --u32PendedTicks;
                            OS_Task__vSetPendedTicks(u32PendedTicks);
                        }
                    }
                    u32YieldPending = OS_Task__u32GetYieldPending();
                    if(1UL == u32YieldPending)
                    {
                        u32AlreadyYielded = 1UL;
                        OS_Task__vYieldIfUsingPreemption();
                    }
                }
            }
        }
        OS_Task__vExitCritical();
    }

    return (u32AlreadyYielded);
}


void OS_Task__vSuspend(OS_Task_Handle_TypeDef pvTaskToSuspend)
{
    OS_TASK_TCB * pstCurrentTCB = (OS_TASK_TCB *) 0UL;
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB *) 0UL;
    uint32_t u32SchedulerRunning = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    OS_Task_List_Typedef* pstSuspendedTaskList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListSize = 0UL;
    uint32_t u32CurrentNumberOfTasks = 0UL;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
    OS_Task__vEnterCritical();
    {
        /* If null is passed in here then it is the running task that is
        being suspended. */
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToSuspend);

        /* Remove task from the ready/delayed list and place in the
        suspended list. */

        pstList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstTCB->stGenericListItem));
        CDLinkedList__enRemove(&( pstTCB->stGenericListItem ));
        u32ListSize = CDLinkedList__u32GetSize(pstList);
        if(0UL == u32ListSize)
        {
            OS_Task__vResetReadyPriority(pstTCB->u32PriorityTask);
        }

        /* Is the task waiting on an event also? */
        pstList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstTCB->stEventListItem));
        if( 0UL != (uint32_t)pstList )
        {
            (void) CDLinkedList__enRemove(&(pstTCB->stEventListItem));
        }
        CDLinkedList__enInsertPreviousLastItemRead( pstSuspendedTaskList, &(pstTCB->stGenericListItem));
    }
    OS_Task__vExitCritical();

    u32SchedulerRunning =  OS_Task__u32GetSchedulerRunning();
    if( pstTCB == pstCurrentTCB )
    {
        if(0UL != u32SchedulerRunning)
        {
            u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
            /* The current task has just been suspended. */
            if(0UL == u32SchedulerSuspended)
            {
                OS_Task__vYieldWithinAPI();
            }
        }
        else
        {
            /* The scheduler is not running, but the task that was pointed
            to by pstCurrentTCB has just been suspended and pstCurrentTCB
            must be adjusted to point to a different task. */
            u32ListSize = CDLinkedList__u32GetSize(pstSuspendedTaskList);
            u32CurrentNumberOfTasks = OS_Task__u32GetCurrentNumberOfTasks();
            if( u32ListSize == u32CurrentNumberOfTasks )
            {
                /* No other tasks are ready, so set pstCurrentTCB back to
                NULL so when the next task is created pstCurrentTCB will
                be set to point to it no matter what its relative priority
                is. */
                pstCurrentTCB = (OS_TASK_TCB*) 0UL;
            }
            else
            {
                OS_Task__vSwitchContext();
            }
        }
    }
    else
    {
        if(0UL != u32SchedulerRunning)
        {
            /* A task other than the currently running task was suspended,
            reset the next expected unblock time in case it referred to the
            task that is now in the Suspended state. */
            OS_Task__vEnterCritical();
            {
                OS_Task__vResetNextTaskUnblockTime();
            }
            OS_Task__vExitCritical();
        }
    }
}

void OS_Task__vResume(OS_Task_Handle_TypeDef pvTaskToResume)
{
    OS_TASK_TCB * pstCurrentTCB = (OS_TASK_TCB *) 0UL;
    OS_TASK_TCB * const pstTCB = ( OS_TASK_TCB * ) pvTaskToResume;
    OS_Task_eStatus enStatus = OS_Task_enStatus_Ok;

    /* It does not make sense to resume the calling task. */
    if(0UL != (uint32_t) pvTaskToResume)
    {
        /* The parameter cannot be NULL as it is impossible to resume the
        currently executing task. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if((0UL != (uint32_t) pstTCB) && ((uint32_t) pstTCB != (uint32_t) pstCurrentTCB))
        {
            OS_Task__vEnterCritical();
            {
                enStatus = OS_Task__enIsTaskSuspended(pstTCB);
                if(OS_Task_enStatus_Ok == enStatus)
                {

                    /* As we are in a critical section we can access the ready
                    lists even if the scheduler is suspended. */
                    ( void ) CDLinkedList__enRemove(&( pstTCB->stGenericListItem ));
                    OS_Task__vAddTaskToReadyList(pstTCB);

                    /* We may have just resumed a higher priority task. */
                    if( pstTCB->u32PriorityTask >= pstCurrentTCB->u32PriorityTask )
                    {
                        /* This yield may not cause the task just resumed to run,
                        but will leave the lists in the correct state for the
                        next yield. */
                        OS_Task__vYieldIfUsingPreemption();
                    }
                }
            }
            OS_Task__vExitCritical();
        }
    }
}

uint32_t OS_Task__u32ResumeFromISR(OS_Task_Handle_TypeDef pvTaskToResume)
{
    uint32_t u32YieldRequired = 0UL;
    OS_TASK_TCB * pstCurrentTCB = (OS_TASK_TCB *) 0UL;
    OS_TASK_TCB * const pstTCB = ( OS_TASK_TCB * ) pvTaskToResume;
    OS_Task_List_Typedef* pstPendingReadyList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32SavedInterruptStatus = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    OS_Task_eStatus enStatus = OS_Task_enStatus_Ok;

    if(0UL != (uint32_t) pvTaskToResume)
    {
        u32SavedInterruptStatus = OS_Task__u32SetInterruptMaskFromISR();
        {
            enStatus = OS_Task__enIsTaskSuspended(pstTCB);
            if(OS_Task_enStatus_Ok == enStatus)
            {
                /* Check the ready lists can be accessed. */
                u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
                if(0UL == u32SchedulerSuspended)
                {
                    /* Ready lists can be accessed so move the task from the
                    suspended list to the ready list directly. */
                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->u32PriorityTask >= pstCurrentTCB->u32PriorityTask )
                    {
                        u32YieldRequired = 1UL;
                    }

                    ( void ) CDLinkedList__enRemove(&( pstTCB->stGenericListItem ));
                    OS_Task__vAddTaskToReadyList(pstTCB);
                }
                else
                {
                    /* The delayed or ready lists cannot be accessed so the task
                    is held in the pending ready list until the scheduler is
                    unsuspended. */
                    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                    CDLinkedList__enInsertPreviousLastItemRead(pstPendingReadyList, &(pstTCB->stEventListItem));
                }
            }
        }
        OS_Task__vClearInterruptMaskFromISR(u32SavedInterruptStatus);
    }

    return u32YieldRequired;
}

