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
    OS_UBase_t.  Please read Richard Barry's reply in the following link to a
    post in the FreeRTOS support forum before reporting this as a bug! -
    http://goo.gl/wu4acr */
    OS_Task__vIncreaseSchedulerSuspended();
}

OS_Boolean_t OS_Task__boResumeAll(void)
{
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstPendingReadyList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxPendedTicks = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxCurrentNumberOfTasks = 0UL;
    OS_Boolean_t boYieldPending = FALSE;
    OS_Boolean_t boAlreadyYielded = FALSE;
    OS_Boolean_t boIsListEmpty = FALSE;

    /* If uxSchedulerSuspended is zero then this function does not match a
    previous call to vTaskSuspendAll(). */
    uxSchedulerSuspended =  OS_Task__uxGetSchedulerSuspended();
    if(0UL != uxSchedulerSuspended )
    {
        /* It is possible that an ISR caused a task to be removed from an event
        list while the scheduler was suspended.  If this was the case then the
        removed task will have been added to the stPendingReadyList.  Once the
        scheduler has been resumed it is safe to move all the pending ready
        tasks from this list into their appropriate ready list. */
        OS_Task__vEnterCritical();
        {
            --uxSchedulerSuspended;
            OS_Task__vSetSchedulerSuspended(uxSchedulerSuspended);

            if(0UL == uxSchedulerSuspended)
            {
                uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
                if(0UL <  uxCurrentNumberOfTasks)
                {
                    /* Move any readied tasks from the pending list into the
                    appropriate ready list. */
                    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                    boIsListEmpty = OS_List__boIsEmpty(pstPendingReadyList);
                    while(FALSE == boIsListEmpty)
                    {
                        pstTCB = (OS_Task_TCB_TypeDef *) OS_List__pvGetOwnerOfHeadEntry(pstPendingReadyList);

                        (void) OS_List__uxRemove(&(pstTCB->stEventListItem));
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);

                        /* If the moved task has a priority higher than the current
                        task then a yield must be performed. */
                        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                        {
                            OS_Task__vSetYieldPending(TRUE);
                        }

                        boIsListEmpty = OS_List__boIsEmpty(pstPendingReadyList);
                    }

                    /* If any ticks occurred while the scheduler was suspended then
                    they should be processed now.  This ensures the tick count does
                    not slip, and that any delayed tasks are resumed at the correct
                    time. */
                    uxPendedTicks = OS_Task__uxGetPendedTicks();
                    if(0UL < uxPendedTicks)
                    {
                        while( 0UL < uxPendedTicks)
                        {
                            if(FALSE != OS_Task__boIncrementTick())
                            {
                                OS_Task__vSetYieldPending(TRUE);
                            }
                            --uxPendedTicks;
                            OS_Task__vSetPendedTicks(uxPendedTicks);
                        }
                    }
                    boYieldPending = OS_Task__boGetYieldPending();
                    if(TRUE == boYieldPending)
                    {
                        boAlreadyYielded = TRUE;
                        OS_Task__vYieldIfUsingPreemption();
                    }
                }
            }
        }
        OS_Task__vExitCritical();
    }

    return (boAlreadyYielded);
}


void OS_Task__vSuspend(OS_Task_Handle_TypeDef pvTaskToSuspend)
{
    OS_Task_TCB_TypeDef * pstCurrentTCB = (OS_Task_TCB_TypeDef *) 0UL;
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef *) 0UL;
    OS_List_TypeDef* pstSuspendedTaskList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxCurrentNumberOfTasks = 0UL;
    OS_Boolean_t boSchedulerRunning = FALSE;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
    OS_Task__vEnterCritical();
    {
        /* If null is passed in here then it is the running task that is
        being suspended. */
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToSuspend);

        /* Remove task from the ready/delayed list and place in the
        suspended list. */
        uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
        if(0UL == uxListSize)
        {
            OS_Task__vResetReadyPriority(pstTCB->uxPriorityTask);
        }

        /* Is the task waiting on an event also? */
        pstList = (OS_List_TypeDef*) OS_List__pvItemContainer(&(pstTCB->stEventListItem));
        if( 0UL != (OS_UBase_t) pstList )
        {
            (void) OS_List__uxRemove(&(pstTCB->stEventListItem));
        }
        OS_List__vInsertEnd(pstSuspendedTaskList, &(pstTCB->stGenericListItem));
    }
    OS_Task__vExitCritical();

    boSchedulerRunning =  OS_Task__boGetSchedulerRunning();
    if( pstTCB == pstCurrentTCB )
    {
        if(FALSE != boSchedulerRunning)
        {
            uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
            /* The current task has just been suspended. */
            if(0UL == uxSchedulerSuspended)
            {
                OS_Task__vYieldWithinAPI();
            }
        }
        else
        {
            /* The scheduler is not running, but the task that was pointed
            to by pstCurrentTCB has just been suspended and pstCurrentTCB
            must be adjusted to point to a different task. */
            uxListSize = OS_List__uxGetLength(pstSuspendedTaskList);
            uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
            if( uxListSize == uxCurrentNumberOfTasks )
            {
                /* No other tasks are ready, so set pstCurrentTCB back to
                NULL so when the next task is created pstCurrentTCB will
                be set to point to it no matter what its relative priority
                is. */
                pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
            }
            else
            {
                OS_Task__vSwitchContext();
            }
        }
    }
    else
    {
        if(FALSE != boSchedulerRunning)
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
    OS_Task_TCB_TypeDef * pstCurrentTCB = (OS_Task_TCB_TypeDef *) 0UL;
    OS_Task_TCB_TypeDef * const pstTCB = ( OS_Task_TCB_TypeDef * ) pvTaskToResume;
    OS_Boolean_t boStatus = FALSE;

    /* It does not make sense to resume the calling task. */
    if(0UL != (OS_UBase_t) pvTaskToResume)
    {
        /* The parameter cannot be NULL as it is impossible to resume the
        currently executing task. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if((0UL != (OS_UBase_t) pstTCB) &&
           ((OS_UBase_t) pstTCB != (OS_UBase_t) pstCurrentTCB))
        {
            OS_Task__vEnterCritical();
            {
                boStatus = OS_Task__boIsTaskSuspended(pstTCB);
                if(FALSE != boStatus)
                {

                    /* As we are in a critical section we can access the ready
                    lists even if the scheduler is suspended. */
                    (void) OS_List__uxRemove(&( pstTCB->stGenericListItem));
                    OS_Task__vAddTaskToReadyList(pstTCB);

                    /* We may have just resumed a higher priority task. */
                    if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
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

OS_Boolean_t OS_Task__boResumeFromISR(OS_Task_Handle_TypeDef pvTaskToResume)
{
    OS_Task_TCB_TypeDef * pstCurrentTCB = (OS_Task_TCB_TypeDef *) 0UL;
    OS_Task_TCB_TypeDef * const pstTCB = ( OS_Task_TCB_TypeDef * ) pvTaskToResume;
    OS_List_TypeDef* pstPendingReadyList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Boolean_t boYieldRequired = FALSE;
    OS_Boolean_t boStatus = FALSE;

    if(0UL != (OS_UBase_t) pvTaskToResume)
    {
        uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
        {
            boStatus = OS_Task__boIsTaskSuspended(pstTCB);
            if(FALSE != boStatus)
            {
                /* Check the ready lists can be accessed. */
                uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
                if(0UL == uxSchedulerSuspended)
                {
                    /* Ready lists can be accessed so move the task from the
                    suspended list to the ready list directly. */
                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                    {
                        boYieldRequired = TRUE;
                    }

                    (void) OS_List__uxRemove(&( pstTCB->stGenericListItem));
                    OS_Task__vAddTaskToReadyList(pstTCB);
                }
                else
                {
                    /* The delayed or ready lists cannot be accessed so the task
                    is held in the pending ready list until the scheduler is
                    unsuspended. */
                    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                    OS_List__vInsertEnd(pstPendingReadyList, &(pstTCB->stEventListItem));
                }
            }
        }
        OS_Task__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
    }

    return (boYieldRequired);
}

OS_Task_eSleepModeStatus OS_Task__enConfirmSleepModeStatus(void)
{
    /* The idle task exists in addition to the application tasks. */
    const OS_UBase_t uxNonApplicationTasks = 1UL;
    OS_List_TypeDef* pstPendingReadyList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstSuspendedTaskList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxListLength = 0UL;
    OS_UBase_t uxCurrentNumberOfTasks = 0UL;
    OS_Task_eSleepModeStatus enReturn = OS_Task_enSleepModeStatus_StandardSleep;
    OS_Boolean_t boYieldPending = FALSE;

    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
    uxListLength = OS_List__uxGetLength(pstPendingReadyList);
    boYieldPending = OS_Task__boGetYieldPending();
    if(0UL != uxListLength)
    {
        /* A task was made ready while the scheduler was suspended. */
        enReturn = OS_Task_enSleepModeStatus_AbortSleep;
    }
    else if(FALSE != boYieldPending)
    {
        /* A yield was pended while the scheduler was suspended. */
        enReturn = OS_Task_enSleepModeStatus_AbortSleep;
    }
    else
    {
        /* If all the tasks are in the suspended list (which might mean they
        have an infinite block time rather than actually being suspended)
        then it is safe to turn all clocks off and just wait for external
        interrupts. */
        pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
        uxListLength = OS_List__uxGetLength(pstSuspendedTaskList);
        uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
        uxCurrentNumberOfTasks -= uxNonApplicationTasks;
        if(uxListLength == uxCurrentNumberOfTasks)
        {
            enReturn = OS_Task_enSleepModeStatus_NoTasksWaitingTimeout;
        }
    }

    return (enReturn);
}
