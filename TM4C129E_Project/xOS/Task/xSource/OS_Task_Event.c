/**
 *
 * @file OS_Task_Event.c
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
 * @verbatim 29 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Event.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>
#include <xOS/Task/xHeader/OS_Task_Delayed.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>

void OS_Task__vPlaceOnEventList(OS_List_TypeDef* const pstEventList,
                                const OS_UBase_t uxTicksToWait)
{
    OS_UBase_t uxTimeToWake = 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstSuspendedTaskList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxTickCount = 0UL;

    if(0UL != (OS_UBase_t) pstEventList)
    {
        /* THIS FUNCTION MUST BE CALLED WITH EITHER INTERRUPTS DISABLED OR THE
        SCHEDULER SUSPENDED AND THE QUEUE BEING ACCESSED LOCKED. */

        /* Place the event list item of the TCB in the appropriate event list.
        This is placed in the list in priority order so the highest priority task
        is the first to be woken by the event.  The queue that contains the event
        list is locked, preventing simultaneous access from interrupts. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        OS_List__vInsert(pstEventList, &(pstCurrentTCB->stEventListItem));

        /* The task must be removed from from the ready list before it is added to
        the blocked list as the same list item is used for both lists.  Exclusive
        access to the ready lists guaranteed because the scheduler is locked. */
        uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
        if(0UL == uxListSize)
        {
            /* The current task must be in a ready list, so there is no need to
            check, and the port reset macro can be called directly. */
            OS_Task__vClearReadyPriority(pstCurrentTCB->uxPriorityTask);
        }

        {
            if(OS_ADAPT_MAX_DELAY == uxTicksToWait)
            {
                /* Add the task to the suspended task list instead of a delayed task
                list to ensure the task is not woken by a timing event.  It will
                block indefinitely. */
                pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                OS_List__vInsertEnd(pstSuspendedTaskList,
                                    &(pstCurrentTCB->stGenericListItem));
            }
            else
            {
                /* Calculate the time at which the task should be woken if the event
                does not occur.  This may overflow but this doesn't matter, the
                scheduler will handle it. */

                uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                uxTimeToWake = uxTickCount + uxTicksToWait;
                OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
            }
        }
    }
}

void OS_Task__vPlaceOnEventListRestricted(OS_List_TypeDef* const pstEventList,
                                          const OS_UBase_t uxTicksToWait,
                                          const OS_Boolean_t boWaitIndefinitely)
{
    OS_UBase_t uxTimeToWake = 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstSuspendedTaskList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxTickCount = 0UL;

    if(0UL != (OS_UBase_t) pstEventList)
    {

        /* This function should not be called by application code hence the
        'Restricted' in its name.  It is not part of the public API.  It is
        designed for use by kernel code, and has special calling requirements -
        it should be called with the scheduler suspended. */


        /* Place the event list item of the TCB in the appropriate event list.
        In this case it is assume that this is the only task that is going to
        be waiting on this event list, so the faster vListInsertPreviousLastItemRead() function
        can be used in place of vListInsert. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        OS_List__vInsertEnd(pstEventList,
                            &(pstCurrentTCB->stEventListItem));

        /* We must remove this task from the ready list before adding it to the
        blocked list as the same list item is used for both lists.  This
        function is called with the scheduler locked so interrupts will not
        access the lists at the same time. */
        uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
        if(0UL == uxListSize)
        {
            /* The current task must be in a ready list, so there is no need to
            check, and the port reset macro can be called directly. */
            OS_Task__vClearReadyPriority(pstCurrentTCB->uxPriorityTask);
        }

        /* If vTaskSuspend() is available then the suspended task list is also
        available and a task that is blocking indefinitely can enter the
        suspended state (it is not really suspended as it will re-enter the
        Ready state when the event it is waiting indefinitely for occurs).
        Blocking indefinitely is useful when using tickless idle mode as when
        all tasks are blocked indefinitely all timers can be turned off. */
        {
            if(TRUE == boWaitIndefinitely)
            {
                /* Add the task to the suspended task list instead of a delayed
                task list to ensure the task is not woken by a timing event.  It
                will block indefinitely. */
                pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                OS_List__vInsertEnd(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
            }
            else
            {
                /* Calculate the time at which the task should be woken if the
                event does not occur.  This may overflow but this doesn't
                matter. */
                uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                uxTimeToWake = uxTickCount + uxTicksToWait;
                OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
            }
        }
    }
}

void OS_Task__vPlaceOnUnorderedEventList(OS_List_TypeDef* pstEventList,
                                         const OS_UBase_t uxDataAuxiliar,
                                         const OS_UBase_t uxTicksToWait)
{
    OS_UBase_t uxTimeToWake = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstSuspendedTaskList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxTickCount = 0UL;

    if(0UL != (OS_UBase_t) pstEventList)
    {
        /* THIS FUNCTION MUST BE CALLED WITH THE SCHEDULER SUSPENDED.  It is used by
        the event groups implementation. */
        uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
        if(0UL != uxSchedulerSuspended)
        {
            /* Store the data auxiliar in the event list item.  It is safe to access the
            event list item here as interrupts won't access the event list item of a
            task that is not in the Blocked state. */
            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
            OS_List__vSetItemValue(&(pstCurrentTCB->stEventListItem),
                             uxDataAuxiliar | OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE );

            /* Place the event list item of the TCB at the end of the appropriate event
            list.  It is safe to access the event list here because it is part of an
            event group implementation - and interrupts don't access event groups
            directly (instead they access them indirectly by pending function calls to
            the task level). */
            OS_List__vInsertEnd(pstEventList, &(pstCurrentTCB->stEventListItem));

            /* The task must be removed from the ready list before it is added to the
            blocked list.  Exclusive access can be assured to the ready list as the
            scheduler is locked. */
            uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
            if(0UL == uxListSize)
            {
                /* The current task must be in a ready list, so there is no need to
                check, and the port reset macro can be called directly. */
                OS_Task__vClearReadyPriority(pstCurrentTCB->uxPriorityTask);
            }

            {
                if(OS_ADAPT_MAX_DELAY == uxTicksToWait)
                {
                    /* Add the task to the suspended task list instead of a delayed task
                    list to ensure it is not woken by a timing event.  It will block
                    indefinitely. */
                    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    OS_List__vInsertEnd(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    /* Calculate the time at which the task should be woken if the event
                    does not occur.  This may overflow but this doesn't matter, the
                    kernel will manage it correctly. */
                    uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                    uxTimeToWake = uxTickCount + uxTicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
                }
            }
        }
    }
}

OS_Boolean_t OS_Task__boRemoveFromEventList(const OS_List_TypeDef* const pstEventList)
{
    OS_Task_TCB_TypeDef *pstUnblockedTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstPendingReadyList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Boolean_t boReturn = FALSE;

    /* THIS FUNCTION MUST BE CALLED FROM A CRITICAL SECTION.  It can also be
    called from a critical section within an ISR. */

    /* The event list is sorted in priority order, so the first in the list can
    be removed as it is known to be the highest priority.  Remove the TCB from
    the delayed list, and add it to the ready list.

    If an event is for a queue that is locked then this function will never
    get called - the lock count on the queue will get modified instead.  This
    means exclusive access to the event list is guaranteed here.

    This function assumes that a check has already been made to ensure that
    pstEventList is not empty. */
    pstUnblockedTCB = (OS_Task_TCB_TypeDef*) OS_List__pvGetOwnerOfHeadEntry(pstEventList);
    if(0UL != (OS_UBase_t) pstUnblockedTCB)
    {
        (void) OS_List__uxRemove(&(pstUnblockedTCB->stEventListItem));

        uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
        if(0UL == uxSchedulerSuspended)
        {
            (void) OS_List__uxRemove(&(pstUnblockedTCB->stGenericListItem));
            OS_Task__vAddTaskToReadyList(pstUnblockedTCB);
        }
        else
        {
            /* The delayed and ready lists cannot be accessed, so hold this task
            pending until the scheduler is resumed. */
            pstPendingReadyList = OS_Task__pstGetPendingReadyList();
            OS_List__vInsertEnd(pstPendingReadyList,
                                &(pstUnblockedTCB->stEventListItem));
        }

        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstUnblockedTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
        {
            /* Return true if the task removed from the event list has a higher
            priority than the calling task.  This allows the calling task to know if
            it should force a context switch now. */
            boReturn = TRUE;

            /* Mark that a yield is pending in case the user is not using the
            "xHigherPriorityTaskWoken" parameter to an ISR safe FreeRTOS function. */
            OS_Task__vSetYieldPending(TRUE);
        }
        else
        {
            boReturn = FALSE;
        }

        {
            /* If a task is blocked on a kernel object then xNextTaskUnblockTime
            might be set to the blocked task's time out time.  If the task is
            unblocked for a reason other than a timeout xNextTaskUnblockTime is
            normally left unchanged, because it is automatically reset to a new
            value when the tick count equals xNextTaskUnblockTime.  However if
            tickless idling is used it might be more important to enter sleep mode
            at the earliest possible time - so reset xNextTaskUnblockTime here to
            ensure it is updated at the earliest possible time. */
            OS_Task__vResetNextTaskUnblockTime();
        }
    }
    return (boReturn);
}

OS_Boolean_t OS_Task__boRemoveFromUnorderedEventList(OS_ListItem_TypeDef* pstEventListItem,
                                                     const OS_UBase_t uxDataAuxiliar)
{
    OS_Task_TCB_TypeDef *pstUnblockedTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Boolean_t boReturn = FALSE;
    OS_UBase_t uxSchedulerSuspended = 0UL;

    /* THIS FUNCTION MUST BE CALLED WITH THE SCHEDULER SUSPENDED.  It is used by
    the event flags implementation. */
    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
    if(0UL != uxSchedulerSuspended)
    {
        /* Store the new data auxiliar in the event list. */
        OS_List__vSetItemValue(pstEventListItem,
                 uxDataAuxiliar | OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE );

        /* Remove the event list form the event flag.  Interrupts do not access
        event flags. */
        pstUnblockedTCB = (OS_Task_TCB_TypeDef *) OS_List__pvGetItemOwner(pstEventListItem );
        if(0UL != (OS_UBase_t) pstUnblockedTCB)
        {
            (void) OS_List__uxRemove(pstEventListItem);

            /* Remove the task from the delayed list and add it to the ready list.  The
            scheduler is suspended so interrupts will not be accessing the ready
            lists. */
            (void) OS_List__uxRemove(&(pstUnblockedTCB->stGenericListItem));
            OS_Task__vAddTaskToReadyList(pstUnblockedTCB);

            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
            if( pstUnblockedTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
            {
                /* Return true if the task removed from the event list has
                a higher priority than the calling task.  This allows
                the calling task to know if it should force a context
                switch now. */
                boReturn = TRUE;

                /* Mark that a yield is pending in case the user is not using the
                "xHigherPriorityTaskWoken" parameter to an ISR safe FreeRTOS function. */
                OS_Task__vSetYieldPending(TRUE);
            }
            else
            {
                boReturn = FALSE;
            }
        }
    }
    return (boReturn);
}

OS_UBase_t OS_Task__uxResetEventValue(void)
{
    OS_UBase_t uxReturn = 0UL;
    OS_UBase_t uxResetValue = 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    uxReturn = OS_List__uxGetItemValue(&(pstCurrentTCB->stEventListItem));
    uxResetValue = OS_TASK_MAX_PRIORITIES;
    uxResetValue -= pstCurrentTCB->uxPriorityTask;
    /* Reset the event list item to its normal value - so it can be used with
    queues and semaphores. */
    OS_List__vSetItemValue(&(pstCurrentTCB->stEventListItem), uxResetValue);
    return (uxReturn);
}
