/**
 *
 * @file OS_Task_Notify.c
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
 * @verbatim 4 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Notify.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>
#include <xOS/Task/xHeader/OS_Task_Delayed.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>

uint32_t OS_Task__u32NotifyTake(uint32_t u32ClearCountOnExit, uint32_t u32TicksToWait)
{
    uint32_t u32TimeToWake = 0UL;
    uint32_t u32Return = 0UL;
    uint32_t u32ListSize = 0UL;
    uint32_t u32TickCount = 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstSuspendedTaskList = (OS_Task_List_Typedef*) 0UL;

    OS_Task__vEnterCritical();
    {
        /* Only block if the notification count is not already non-zero. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(0UL == pstCurrentTCB->u32NotifiedValue)
        {
            /* Mark this task as waiting for a notification. */
            pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_WaitingNotification;

            if(0UL < u32TicksToWait)
            {
                /* The task is going to block.  First it must be removed
                from the ready list. */
                pstList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList(&(pstCurrentTCB->stGenericListItem));
                CDLinkedList__enRemove(&(pstCurrentTCB->stGenericListItem));
                u32ListSize = CDLinkedList__u32GetSize(pstList);
                if(0UL == u32ListSize)
                {
                    /* The current task must be in a ready list, so there is
                    no need to check, and the port reset macro can be called
                    directly. */
                    OS_Task__vClearReadyPriority(pstCurrentTCB->u32PriorityTask);
                }

                if(OS_ADAPT_MAX_DELAY == u32TicksToWait)
                {
                    /* Add the task to the suspended task list instead
                    of a delayed task list to ensure the task is not
                    woken by a timing event.  It will block
                    indefinitely. */
                    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    CDLinkedList__enInsertPreviousLastItemRead(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    /* Calculate the time at which the task should be
                    woken if no notification events occur.  This may
                    overflow but this doesn't matter, the scheduler will
                    handle it. */
                    u32TickCount = OS_Task__u32GetTickCount_NotSafe();
                    u32TimeToWake = u32TickCount + u32TicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(u32TimeToWake);
                }

                /* All ports are written to allow a yield in a critical
                section (some will yield immediately, others wait until the
                critical section exits) - but it is not something that
                application code should ever do. */
                OS_Task__vYieldWithinAPI();
            }
        }
    }
    OS_Task__vExitCritical();

    OS_Task__vEnterCritical();
    {
        u32Return = pstCurrentTCB->u32NotifiedValue;

        if(0UL != u32Return)
        {
            if(0UL != u32ClearCountOnExit)
            {
                pstCurrentTCB->u32NotifiedValue = 0UL;
            }
            else
            {
                (pstCurrentTCB->u32NotifiedValue)--;
            }
        }
        pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    }
    OS_Task__vExitCritical();

    return (u32Return);
}

uint32_t OS_Task__u32NotifyWait(uint32_t u32BitsToClearOnEntry,
                                uint32_t u32BitsToClearOnExit,
                                uint32_t *pu32NotificationValue,
                                uint32_t u32TicksToWait)
{
    uint32_t u32TimeToWake = 0UL;
    uint32_t u32Return = 0UL;
    uint32_t u32ListSize = 0UL;
    uint32_t u32TickCount = 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstSuspendedTaskList = (OS_Task_List_Typedef*) 0UL;

    OS_Task__vEnterCritical();
    {
        /* Only block if a notification is not already pending. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(OS_Task_enNotifyState_Notified != pstCurrentTCB->enNotifyState)
        {
            /* Clear bits in the task's notification value as bits may get
            set by the notifying task or interrupt.  This can be used to
            clear the value to zero. */
            pstCurrentTCB->u32NotifiedValue &= ~u32BitsToClearOnEntry;

            /* Mark this task as waiting for a notification. */
            pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_WaitingNotification;

            if(0UL < u32TicksToWait)
            {
                /* The task is going to block.  First it must be removed
                from the    ready list. */
                pstList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList(&(pstCurrentTCB->stGenericListItem));
                CDLinkedList__enRemove(&(pstCurrentTCB->stGenericListItem));
                u32ListSize = CDLinkedList__u32GetSize(pstList);
                if(0UL == u32ListSize)
                {
                    /* The current task must be in a ready list, so there is
                    no need to check, and the port reset macro can be called
                    directly. */
                    OS_Task__vClearReadyPriority( pstCurrentTCB->u32PriorityTask);
                }

                if(OS_ADAPT_MAX_DELAY == u32TicksToWait)
                {
                    /* Add the task to the suspended task list instead
                    of a delayed task list to ensure the task is not
                    woken by a timing event.  It will block
                    indefinitely. */
                    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    CDLinkedList__enInsertPreviousLastItemRead(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    /* Calculate the time at which the task should be
                    woken if no notification events occur.  This may
                    overflow but this doesn't matter, the scheduler will
                    handle it. */
                    u32TickCount = OS_Task__u32GetTickCount_NotSafe();
                    u32TimeToWake = u32TickCount + u32TicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(u32TimeToWake);
                }

                /* All ports are written to allow a yield in a critical
                section (some will yield immediately, others wait until the
                critical section exits) - but it is not something that
                application code should ever do. */
                OS_Task__vYieldWithinAPI();
            }
        }
    }
    OS_Task__vExitCritical();

    OS_Task__vEnterCritical();
    {
        if(0UL != pu32NotificationValue)
        {
            /* Output the current notification value, which may or may not
            have changed. */
            *pu32NotificationValue = pstCurrentTCB->u32NotifiedValue;
        }

        /* If eNotifyValue is set then either the task never entered the
        blocked state (because a notification was already pending) or the
        task unblocked because of a notification.  Otherwise the task
        unblocked because of a timeout. */
        if(OS_Task_enNotifyState_WaitingNotification == pstCurrentTCB->enNotifyState)
        {
            /* A notification was not received. */
            u32Return = 0UL;
        }
        else
        {
            /* A notification was already pending or a notification was
            received while the task was waiting. */
            pstCurrentTCB->u32NotifiedValue &= ~u32BitsToClearOnExit;
            u32Return = 1UL;
        }

        pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    }
    OS_Task__vExitCritical();

    return (u32Return);
}

uint32_t OS_Task__u32GenericNotify( OS_Task_Handle_TypeDef pvTaskToNotify,
                             uint32_t u32Value,
                             OS_Task_eNotifyAction enAction,
                             uint32_t *pu32PreviousNotificationValue)
{
    OS_TASK_TCB * pstTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstTCBOwnerList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    uint32_t u32Return = 1UL;

    if(0UL != (uint32_t) pvTaskToNotify)
    {
        pstTCB = ( OS_TASK_TCB * ) pvTaskToNotify;

        OS_Task__vEnterCritical();
        {
            if(0UL != (uint32_t) pu32PreviousNotificationValue)
            {
                *pu32PreviousNotificationValue = pstTCB->u32NotifiedValue;
            }

            enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;

            switch(enAction)
            {
                case OS_Task_enNotifyAction_SetBits   :
                    pstTCB->u32NotifiedValue |= u32Value;
                    break;

                case OS_Task_enNotifyAction_Increment :
                    (pstTCB->u32NotifiedValue)++;
                    break;

                case OS_Task_enNotifyAction_SetValueWithOverwrite :
                    pstTCB->u32NotifiedValue = (uint32_t) u32Value;
                    break;

                case OS_Task_enNotifyAction_SetValueWithoutOverwrite :
                    if(enOriginalNotifyState != OS_Task_enNotifyState_Notified)
                    {
                        pstTCB->u32NotifiedValue = (uint32_t) u32Value;
                    }
                    else
                    {
                        /* The value could not be written to the task. */
                        u32Return = 0UL;
                    }
                    break;

                case OS_Task_enNotifyAction_NoAction:
                    /* The task is being notified without its notify value being
                    updated. */
                    break;
                default:
                    break;
            }

            /* If the task is in the blocked state specifically to wait for a
            notification then unblock it now. */
            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                OS_Task__vAddTaskToReadyList(pstTCB);

                /* The task should not have been on an event list. */
                pstTCBOwnerList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &( pstTCB->stEventListItem));
                if( 0UL == (uint32_t) pstTCBOwnerList)
                {
                    {
                        /* If a task is blocked waiting for a notification then
                        xNextTaskUnblockTime might be set to the blocked task's time
                        out time.  If the task is unblocked for a reason other than
                        a timeout xNextTaskUnblockTime is normally left unchanged,
                        because it will automatically get reset to a new value when
                        the tick count equals xNextTaskUnblockTime.  However if
                        tickless idling is used it might be more important to enter
                        sleep mode at the earliest possible time - so reset
                        xNextTaskUnblockTime here to ensure it is updated at the
                        earliest possible time. */
                        OS_Task__vResetNextTaskUnblockTime();
                    }

                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->u32PriorityTask > pstCurrentTCB->u32PriorityTask )
                    {
                        /* The notified task has a priority above the currently
                        executing task so a yield is required. */
                        OS_Task__vYieldIfUsingPreemption();
                    }
                }
            }
        }
        OS_Task__vExitCritical();
    }
    return (u32Return);
}

uint32_t OS_Task__u32GenericNotifyFromISR(OS_Task_Handle_TypeDef pvTaskToNotify,
                                    uint32_t u32Value,
                                    OS_Task_eNotifyAction enAction,
                                    uint32_t *pu32PreviousNotificationValue,
                                    uint32_t *pu32HigherPriorityTaskWoken)
{
    OS_TASK_TCB * pstTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstPendingReadyList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstTCBOwnerList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    uint32_t u32Return = 1UL;
    uint32_t u32SavedInterruptStatus = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;

    if(0UL != (uint32_t) pvTaskToNotify)
    {
        pstTCB = (OS_TASK_TCB *) pvTaskToNotify;

        u32SavedInterruptStatus = OS_Task__u32SetInterruptMaskFromISR();
        {
            if(0UL != (uint32_t) pu32PreviousNotificationValue)
            {
                *pu32PreviousNotificationValue = pstTCB->u32NotifiedValue;
            }

            enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;

            switch(enAction)
            {
                case OS_Task_enNotifyAction_SetBits   :
                    pstTCB->u32NotifiedValue |= u32Value;
                    break;

                case OS_Task_enNotifyAction_Increment :
                    (pstTCB->u32NotifiedValue)++;
                    break;

                case OS_Task_enNotifyAction_SetValueWithOverwrite :
                    pstTCB->u32NotifiedValue = (uint32_t) u32Value;
                    break;

                case OS_Task_enNotifyAction_SetValueWithoutOverwrite :
                    if(OS_Task_enNotifyState_Notified != enOriginalNotifyState)
                    {
                        pstTCB->u32NotifiedValue = (uint32_t) u32Value;
                    }
                    else
                    {
                        /* The value could not be written to the task. */
                        u32Return = 0UL;
                    }
                    break;

                case OS_Task_enNotifyAction_NoAction :
                    /* The task is being notified without its notify value being
                    updated. */
                    break;
                default:
                    break;
            }

            /* If the task is in the blocked state specifically to wait for a
            notification then unblock it now. */
            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                /* The task should not have been on an event list. */
                pstTCBOwnerList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &( pstTCB->stEventListItem));
                if( 0UL == (uint32_t) pstTCBOwnerList)
                {
                    u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
                    if(0UL == u32SchedulerSuspended)
                    {
                        CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);
                    }
                    else
                    {
                        /* The delayed and ready lists cannot be accessed, so hold
                        this task pending until the scheduler is resumed. */
                        pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                        CDLinkedList__enInsertPreviousLastItemRead(pstPendingReadyList, &(pstTCB->stGenericListItem));
                    }

                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->u32PriorityTask > pstCurrentTCB->u32PriorityTask )
                    {
                        /* The notified task has a priority above the currently
                        executing task so a yield is required. */
                        if(0UL != pu32HigherPriorityTaskWoken)
                        {
                            *pu32HigherPriorityTaskWoken = 1UL;
                        }
                    }
                }
            }
        }
        OS_Task__vClearInterruptMaskFromISR(u32SavedInterruptStatus);
    }

    return (u32Return);
}

void OS_Task__vNotifyGiveFromISR(OS_Task_Handle_TypeDef pvTaskToNotify,
                            uint32_t *pu32HigherPriorityTaskWoken)
{
    OS_TASK_TCB * pstTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstPendingReadyList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstTCBOwnerList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    uint32_t u32SavedInterruptStatus = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;

    if(0UL != (uint32_t) pvTaskToNotify)
    {
        pstTCB = (OS_TASK_TCB *) pvTaskToNotify;

        u32SavedInterruptStatus = OS_Task__u32SetInterruptMaskFromISR();
        {
            enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;

            /* 'Giving' is equivalent to incrementing a count in a counting
            semaphore. */
            (pstTCB->u32NotifiedValue)++;

            /* If the task is in the blocked state specifically to wait for a
            notification then unblock it now. */
            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                /* The task should not have been on an event list. */
                pstTCBOwnerList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &( pstTCB->stEventListItem));
                if( 0UL == (uint32_t) pstTCBOwnerList)
                {
                    u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
                    if(0UL == u32SchedulerSuspended)
                    {
                        CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);
                    }
                    else
                    {
                        /* The delayed and ready lists cannot be accessed, so hold
                        this task pending until the scheduler is resumed. */
                        pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                        CDLinkedList__enInsertPreviousLastItemRead(pstPendingReadyList, &(pstTCB->stEventListItem));
                    }

                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->u32PriorityTask > pstCurrentTCB->u32PriorityTask )
                    {
                        /* The notified task has a priority above the currently
                        executing task so a yield is required. */
                        if(0UL != (uint32_t) pu32HigherPriorityTaskWoken)
                        {
                            *pu32HigherPriorityTaskWoken = 1UL;
                        }
                    }
                }
            }
        }
        OS_Task__vClearInterruptMaskFromISR(u32SavedInterruptStatus);
    }
}

uint32_t OS_Task__u32NotifyStateClear(OS_Task_Handle_TypeDef pvTask)
{
    OS_TASK_TCB * pstTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32Return = 1UL;

    pstTCB = (OS_TASK_TCB*) pvTask;

    /* If null is passed in here then it is the calling task that is having
    its notification state cleared. */
    pstTCB = OS_Task__pstGetTCBFromHandle(pstTCB);

    OS_Task__vEnterCritical();
    {
        if(OS_Task_enNotifyState_Notified == pstTCB->enNotifyState)
        {
            pstTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
            u32Return = 1UL;
        }
        else
        {
            u32Return = 0UL;
        }
    }
    OS_Task__vExitCritical();

    return (u32Return);
}
