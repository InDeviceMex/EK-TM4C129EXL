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

void OS_Task__vPlaceOnEventList(OS_Task_List_Typedef* const pstEventList, const uint32_t u32TicksToWait)
{
    uint32_t u32TimeToWake = 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstSuspendedTaskList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListSize = 0UL;
    uint32_t u32TickCount = 0UL;

    if(0UL != (uint32_t) pstEventList)
    {
        /* THIS FUNCTION MUST BE CALLED WITH EITHER INTERRUPTS DISABLED OR THE
        SCHEDULER SUSPENDED AND THE QUEUE BEING ACCESSED LOCKED. */

        /* Place the event list item of the TCB in the appropriate event list.
        This is placed in the list in priority order so the highest priority task
        is the first to be woken by the event.  The queue that contains the event
        list is locked, preventing simultaneous access from interrupts. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        CDLinkedList__enInsertInAscendingOrderByValue(pstEventList, &(pstCurrentTCB->stEventListItem));

        /* The task must be removed from from the ready list before it is added to
        the blocked list as the same list item is used for both lists.  Exclusive
        access to the ready lists guaranteed because the scheduler is locked. */
        pstReadyList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstCurrentTCB->stGenericListItem));
        CDLinkedList__enRemove( &( pstCurrentTCB->stGenericListItem));
        u32ListSize = CDLinkedList__u32GetSize(pstReadyList);

        if(0UL == u32ListSize)
        {
            /* The current task must be in a ready list, so there is no need to
            check, and the port reset macro can be called directly. */
            OS_Task__vClearReadyPriority(pstCurrentTCB->u32PriorityTask);
        }

        {
            if(OS_ADAPT_MAX_DELAY == u32TicksToWait)
            {
                /* Add the task to the suspended task list instead of a delayed task
                list to ensure the task is not woken by a timing event.  It will
                block indefinitely. */
                pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                CDLinkedList__enInsertPreviousLastItemRead(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
            }
            else
            {
                /* Calculate the time at which the task should be woken if the event
                does not occur.  This may overflow but this doesn't matter, the
                scheduler will handle it. */

                u32TickCount = OS_Task__u32GetTickCount_NotSafe();
                u32TimeToWake = u32TickCount + u32TicksToWait;
                OS_Task__vAddCurrentTaskToDelayedList(u32TimeToWake);
            }
        }
    }
}

void OS_Task__vPlaceOnEventListRestricted( OS_Task_List_Typedef* const pstEventList, const uint32_t u32TicksToWait, const uint32_t u32WaitIndefinitely )
{
    uint32_t u32TimeToWake = 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstSuspendedTaskList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListSize = 0UL;
    uint32_t u32TickCount = 0UL;

    if(0UL != (uint32_t) pstEventList)
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
        CDLinkedList__enInsertPreviousLastItemRead(pstEventList, &(pstCurrentTCB->stEventListItem));

        /* We must remove this task from the ready list before adding it to the
        blocked list as the same list item is used for both lists.  This
        function is called with the scheduler locked so interrupts will not
        access the lists at the same time. */
        pstReadyList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstCurrentTCB->stGenericListItem));
        CDLinkedList__enRemove( &( pstCurrentTCB->stGenericListItem));
        u32ListSize = CDLinkedList__u32GetSize(pstReadyList);

        if(0UL == u32ListSize)
        {
            /* The current task must be in a ready list, so there is no need to
            check, and the port reset macro can be called directly. */
            OS_Task__vClearReadyPriority(pstCurrentTCB->u32PriorityTask);
        }

        /* If vTaskSuspend() is available then the suspended task list is also
        available and a task that is blocking indefinitely can enter the
        suspended state (it is not really suspended as it will re-enter the
        Ready state when the event it is waiting indefinitely for occurs).
        Blocking indefinitely is useful when using tickless idle mode as when
        all tasks are blocked indefinitely all timers can be turned off. */
        {
            if(1UL == u32WaitIndefinitely)
            {
                /* Add the task to the suspended task list instead of a delayed
                task list to ensure the task is not woken by a timing event.  It
                will block indefinitely. */
                pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                CDLinkedList__enInsertPreviousLastItemRead(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
            }
            else
            {
                /* Calculate the time at which the task should be woken if the
                event does not occur.  This may overflow but this doesn't
                matter. */
                u32TickCount = OS_Task__u32GetTickCount_NotSafe();
                u32TimeToWake = u32TickCount + u32TicksToWait;
                OS_Task__vAddCurrentTaskToDelayedList(u32TimeToWake);
            }
        }
    }
}

void OS_Task__vPlaceOnUnorderedEventList(OS_Task_List_Typedef* pstEventList, const uint32_t u32DataAuxiliar, const uint32_t u32TicksToWait)
{
    uint32_t u32TimeToWake = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstSuspendedTaskList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListSize = 0UL;
    uint32_t u32TickCount = 0UL;

    if(0UL != (uint32_t) pstEventList)
    {
        /* THIS FUNCTION MUST BE CALLED WITH THE SCHEDULER SUSPENDED.  It is used by
        the event groups implementation. */
        u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
        if(0UL != u32SchedulerSuspended)
        {
            /* Store the data auxiliar in the event list item.  It is safe to access the
            event list item here as interrupts won't access the event list item of a
            task that is not in the Blocked state. */
            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
            CDLinkedList_Item__vSetValue(&(pstCurrentTCB->stEventListItem),
                                         u32DataAuxiliar | OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE );

            /* Place the event list item of the TCB at the end of the appropriate event
            list.  It is safe to access the event list here because it is part of an
            event group implementation - and interrupts don't access event groups
            directly (instead they access them indirectly by pending function calls to
            the task level). */
            CDLinkedList__enInsertPreviousLastItemRead(pstEventList, &(pstCurrentTCB->stEventListItem));

            /* The task must be removed from the ready list before it is added to the
            blocked list.  Exclusive access can be assured to the ready list as the
            scheduler is locked. */
            pstReadyList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList(&(pstCurrentTCB->stGenericListItem));
            CDLinkedList__enRemove( &( pstCurrentTCB->stGenericListItem));
            u32ListSize = CDLinkedList__u32GetSize(pstReadyList);

            if(0UL == u32ListSize)
            {
                /* The current task must be in a ready list, so there is no need to
                check, and the port reset macro can be called directly. */
                OS_Task__vClearReadyPriority(pstCurrentTCB->u32PriorityTask);
            }

            {
                if(OS_ADAPT_MAX_DELAY == u32TicksToWait)
                {
                    /* Add the task to the suspended task list instead of a delayed task
                    list to ensure it is not woken by a timing event.  It will block
                    indefinitely. */
                    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    CDLinkedList__enInsertPreviousLastItemRead(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    /* Calculate the time at which the task should be woken if the event
                    does not occur.  This may overflow but this doesn't matter, the
                    kernel will manage it correctly. */
                    u32TickCount = OS_Task__u32GetTickCount_NotSafe();
                    u32TimeToWake = u32TickCount + u32TicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(u32TimeToWake);
                }
            }
        }
    }
}

uint32_t OS_Task__u32RemoveFromEventList(const OS_Task_List_Typedef* const pstEventList)
{
    OS_TASK_TCB *pstUnblockedTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstPendingReadyList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    uint32_t u32Return = 0UL;

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
    pstUnblockedTCB = (OS_TASK_TCB*) CDLinkedList__pvGetDataHead(pstEventList);
    if(0UL != (uint32_t) pstUnblockedTCB)
    {
        CDLinkedList__enRemove(&(pstUnblockedTCB->stEventListItem));

        u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
        if(0UL == u32SchedulerSuspended)
        {
            CDLinkedList__enRemove(&(pstUnblockedTCB->stGenericListItem));
            OS_Task__vAddTaskToReadyList(pstUnblockedTCB);
        }
        else
        {
            /* The delayed and ready lists cannot be accessed, so hold this task
            pending until the scheduler is resumed. */
            pstPendingReadyList = OS_Task__pstGetPendingReadyList();
            CDLinkedList__enInsertPreviousLastItemRead(pstPendingReadyList, &(pstUnblockedTCB->stEventListItem));
        }

        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstUnblockedTCB->u32PriorityTask > pstCurrentTCB->u32PriorityTask )
        {
            /* Return true if the task removed from the event list has a higher
            priority than the calling task.  This allows the calling task to know if
            it should force a context switch now. */
            u32Return = 1UL;

            /* Mark that a yield is pending in case the user is not using the
            "xHigherPriorityTaskWoken" parameter to an ISR safe FreeRTOS function. */
            OS_Task__vSetYieldPending(1UL);
        }
        else
        {
            u32Return = 0UL;
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
    return (u32Return);
}

uint32_t OS_Task__u32RemoveFromUnorderedEventList(OS_Task_ListItem_TypeDef* pstEventListItem, const uint32_t u32DataAuxiliar)
{
    OS_TASK_TCB *pstUnblockedTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32Return = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;

    /* THIS FUNCTION MUST BE CALLED WITH THE SCHEDULER SUSPENDED.  It is used by
    the event flags implementation. */
    u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
    if(0UL != u32SchedulerSuspended)
    {
        /* Store the new data auxiliar in the event list. */
        CDLinkedList_Item__vSetValue(pstEventListItem,
                                     u32DataAuxiliar | OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE );

        /* Remove the event list form the event flag.  Interrupts do not access
        event flags. */
        pstUnblockedTCB = (OS_TASK_TCB *) CDLinkedList_Item__pvGetData(pstEventListItem );
        if(0UL != (uint32_t) pstUnblockedTCB)
        {
            CDLinkedList__enRemove(pstEventListItem);

            /* Remove the task from the delayed list and add it to the ready list.  The
            scheduler is suspended so interrupts will not be accessing the ready
            lists. */
            CDLinkedList__enRemove(&(pstUnblockedTCB->stGenericListItem));
            OS_Task__vAddTaskToReadyList(pstUnblockedTCB);

            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
            if( pstUnblockedTCB->u32PriorityTask > pstCurrentTCB->u32PriorityTask )
            {
                /* Return true if the task removed from the event list has
                a higher priority than the calling task.  This allows
                the calling task to know if it should force a context
                switch now. */
                u32Return = 1UL;

                /* Mark that a yield is pending in case the user is not using the
                "xHigherPriorityTaskWoken" parameter to an ISR safe FreeRTOS function. */
                OS_Task__vSetYieldPending(1UL);
            }
            else
            {
                u32Return = 0UL;
            }
        }
    }
    return (u32Return);
}

uint32_t OS_Task__u32ResetEventValue(void)
{
    uint32_t u32Return = 0UL;
    uint32_t u32ResetValue = 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    u32Return = CDLinkedList_Item__u32GetValue(&(pstCurrentTCB->stEventListItem));
    u32ResetValue = OS_TASK_MAX_PRIORITIES;
    u32ResetValue -= pstCurrentTCB->u32PriorityTask;
    /* Reset the event list item to its normal value - so it can be used with
    queues and semaphores. */
    CDLinkedList_Item__vSetValue(&(pstCurrentTCB->stEventListItem), u32ResetValue);
    return (u32Return);
}
