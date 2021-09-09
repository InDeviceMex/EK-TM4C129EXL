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

OS_UBase_t OS_Task__uxNotifyTake(OS_Boolean_t boClearCountOnExit,
                                 OS_UBase_t uxTicksToWait)
{
    OS_UBase_t uxTimeToWake = 0UL;
    OS_UBase_t uxReturn = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstSuspendedTaskList = (OS_List_TypeDef*) 0UL;

    OS_Task__vEnterCritical();
    {
        /* Only block if the notification count is not already non-zero. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(0UL == pstCurrentTCB->uxNotifiedValue)
        {
            /* Mark this task as waiting for a notification. */
            pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_WaitingNotification;

            if(0UL < uxTicksToWait)
            {
                /* The task is going to block.  First it must be removed
                from the ready list. */
                uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    /* The current task must be in a ready list, so there is
                    no need to check, and the port reset macro can be called
                    directly. */
                    OS_Task__vClearReadyPriority(pstCurrentTCB->uxPriorityTask);
                }

                if(OS_ADAPT_MAX_DELAY == uxTicksToWait)
                {
                    /* Add the task to the suspended task list instead
                    of a delayed task list to ensure the task is not
                    woken by a timing event.  It will block
                    indefinitely. */
                    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    OS_List__vInsertEnd(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    /* Calculate the time at which the task should be
                    woken if no notification events occur.  This may
                    overflow but this doesn't matter, the scheduler will
                    handle it. */
                    uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                    uxTimeToWake = uxTickCount + uxTicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
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
        uxReturn = pstCurrentTCB->uxNotifiedValue;

        if(0UL != uxReturn)
        {
            if(FALSE != boClearCountOnExit)
            {
                pstCurrentTCB->uxNotifiedValue = 0UL;
            }
            else
            {
                (pstCurrentTCB->uxNotifiedValue)--;
            }
        }
        pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    }
    OS_Task__vExitCritical();

    return (uxReturn);
}

OS_Boolean_t OS_Task__boNotifyWait(OS_UBase_t uxBitsToClearOnEntry,
                                OS_UBase_t uxBitsToClearOnExit,
                                OS_UBase_t *puxNotificationValue,
                                OS_UBase_t uxTicksToWait)
{
    OS_UBase_t uxTimeToWake = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstSuspendedTaskList = (OS_List_TypeDef*) 0UL;
    OS_Boolean_t boReturn = FALSE;

    OS_Task__vEnterCritical();
    {
        /* Only block if a notification is not already pending. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(OS_Task_enNotifyState_Notified != pstCurrentTCB->enNotifyState)
        {
            /* Clear bits in the task's notification value as bits may get
            set by the notifying task or interrupt.  This can be used to
            clear the value to zero. */
            pstCurrentTCB->uxNotifiedValue &= ~uxBitsToClearOnEntry;

            /* Mark this task as waiting for a notification. */
            pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_WaitingNotification;

            if(0UL < uxTicksToWait)
            {
                /* The task is going to block.  First it must be removed
                from the    ready list. */
                uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    /* The current task must be in a ready list, so there is
                    no need to check, and the port reset macro can be called
                    directly. */
                    OS_Task__vClearReadyPriority( pstCurrentTCB->uxPriorityTask);
                }

                if(OS_ADAPT_MAX_DELAY == uxTicksToWait)
                {
                    /* Add the task to the suspended task list instead
                    of a delayed task list to ensure the task is not
                    woken by a timing event.  It will block
                    indefinitely. */
                    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    OS_List__vInsertEnd(pstSuspendedTaskList,  &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    /* Calculate the time at which the task should be
                    woken if no notification events occur.  This may
                    overflow but this doesn't matter, the scheduler will
                    handle it. */
                    uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                    uxTimeToWake = uxTickCount + uxTicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
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
        if(0UL != puxNotificationValue)
        {
            /* Output the current notification value, which may or may not
            have changed. */
            *puxNotificationValue = pstCurrentTCB->uxNotifiedValue;
        }

        /* If eNotifyValue is set then either the task never entered the
        blocked state (because a notification was already pending) or the
        task unblocked because of a notification.  Otherwise the task
        unblocked because of a timeout. */
        if(OS_Task_enNotifyState_WaitingNotification == pstCurrentTCB->enNotifyState)
        {
            /* A notification was not received. */
            boReturn = FALSE;
        }
        else
        {
            /* A notification was already pending or a notification was
            received while the task was waiting. */
            pstCurrentTCB->uxNotifiedValue &= ~uxBitsToClearOnExit;
            boReturn = TRUE;
        }

        pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    }
    OS_Task__vExitCritical();

    return (boReturn);
}

OS_Boolean_t OS_Task__boGenericNotify( OS_Task_Handle_TypeDef pvTaskToNotify,
                             OS_UBase_t uxValue,
                             OS_Task_eNotifyAction enAction,
                             OS_UBase_t *puxPreviousNotificationValue)
{
    OS_Task_TCB_TypeDef * pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstTCBOwnerList = (OS_List_TypeDef*) 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    OS_Boolean_t boReturn = TRUE;

    if(0UL != (OS_UBase_t) pvTaskToNotify)
    {
        pstTCB = (OS_Task_TCB_TypeDef *) pvTaskToNotify;

        OS_Task__vEnterCritical();
        {
            if(0UL != (OS_UBase_t) puxPreviousNotificationValue)
            {
                *puxPreviousNotificationValue = pstTCB->uxNotifiedValue;
            }

            enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;

            switch(enAction)
            {
                case OS_Task_enNotifyAction_SetBits   :
                    pstTCB->uxNotifiedValue |= uxValue;
                    break;

                case OS_Task_enNotifyAction_Increment :
                    (pstTCB->uxNotifiedValue)++;
                    break;

                case OS_Task_enNotifyAction_SetValueWithOverwrite :
                    pstTCB->uxNotifiedValue = (OS_UBase_t) uxValue;
                    break;

                case OS_Task_enNotifyAction_SetValueWithoutOverwrite :
                    if(enOriginalNotifyState != OS_Task_enNotifyState_Notified)
                    {
                        pstTCB->uxNotifiedValue = (OS_UBase_t) uxValue;
                    }
                    else
                    {
                        /* The value could not be written to the task. */
                        boReturn = FALSE;
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
                (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                OS_Task__vAddTaskToReadyList(pstTCB);

                /* The task should not have been on an event list. */
                pstTCBOwnerList = (OS_List_TypeDef*) OS_List__pvItemContainer( &( pstTCB->stEventListItem));
                if(0UL == (OS_UBase_t) pstTCBOwnerList)
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
                    if( pstTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
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
    return (boReturn);
}

OS_Boolean_t OS_Task__boGenericNotifyFromISR(OS_Task_Handle_TypeDef pvTaskToNotify,
                                    OS_UBase_t uxValue,
                                    OS_Task_eNotifyAction enAction,
                                    OS_UBase_t *puxPreviousNotificationValue,
                                    OS_Boolean_t *pboHigherPriorityTaskWoken)
{
    OS_Task_TCB_TypeDef * pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstPendingReadyList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstTCBOwnerList = (OS_List_TypeDef*) 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Boolean_t boReturn = TRUE;

    if(0UL != (OS_UBase_t) pvTaskToNotify)
    {
        pstTCB = (OS_Task_TCB_TypeDef *) pvTaskToNotify;

        uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
        {
            if(0UL != (OS_UBase_t) puxPreviousNotificationValue)
            {
                *puxPreviousNotificationValue = pstTCB->uxNotifiedValue;
            }

            enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;

            switch(enAction)
            {
                case OS_Task_enNotifyAction_SetBits   :
                    pstTCB->uxNotifiedValue |= uxValue;
                    break;

                case OS_Task_enNotifyAction_Increment :
                    (pstTCB->uxNotifiedValue)++;
                    break;

                case OS_Task_enNotifyAction_SetValueWithOverwrite :
                    pstTCB->uxNotifiedValue = (OS_UBase_t) uxValue;
                    break;

                case OS_Task_enNotifyAction_SetValueWithoutOverwrite :
                    if(OS_Task_enNotifyState_Notified != enOriginalNotifyState)
                    {
                        pstTCB->uxNotifiedValue = (OS_UBase_t) uxValue;
                    }
                    else
                    {
                        /* The value could not be written to the task. */
                        boReturn = FALSE;
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
                pstTCBOwnerList = (OS_List_TypeDef*) OS_List__pvItemContainer(&( pstTCB->stEventListItem));
                if(0UL == (OS_UBase_t) pstTCBOwnerList)
                {
                    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
                    if(0UL == uxSchedulerSuspended)
                    {
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);
                    }
                    else
                    {
                        /* The delayed and ready lists cannot be accessed, so hold
                        this task pending until the scheduler is resumed. */
                        pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                        OS_List__vInsertEnd(pstPendingReadyList,
                                            &(pstTCB->stGenericListItem));
                    }

                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
                    {
                        /* The notified task has a priority above the currently
                        executing task so a yield is required. */
                        if(0UL != (OS_UBase_t) pboHigherPriorityTaskWoken)
                        {
                            *pboHigherPriorityTaskWoken = TRUE;
                        }
                    }
                }
            }
        }
        OS_Task__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
    }

    return (boReturn);
}

void OS_Task__vNotifyGiveFromISR(OS_Task_Handle_TypeDef pvTaskToNotify,
                            OS_Boolean_t *pboHigherPriorityTaskWoken)
{
    OS_Task_TCB_TypeDef * pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstPendingReadyList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstTCBOwnerList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;

    if(0UL != (OS_UBase_t) pvTaskToNotify)
    {
        pstTCB = (OS_Task_TCB_TypeDef *) pvTaskToNotify;

        uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
        {
            enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;

            /* 'Giving' is equivalent to incrementing a count in a counting
            semaphore. */
            (pstTCB->uxNotifiedValue)++;

            /* If the task is in the blocked state specifically to wait for a
            notification then unblock it now. */
            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                /* The task should not have been on an event list. */
                pstTCBOwnerList = (OS_List_TypeDef*) OS_List__pvItemContainer(&( pstTCB->stEventListItem));
                if( 0UL == (OS_UBase_t) pstTCBOwnerList)
                {
                    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
                    if(0UL == uxSchedulerSuspended)
                    {
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);
                    }
                    else
                    {
                        /* The delayed and ready lists cannot be accessed, so hold
                        this task pending until the scheduler is resumed. */
                        pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                        OS_List__vInsertEnd(pstPendingReadyList,
                                            &(pstTCB->stEventListItem));
                    }

                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
                    {
                        /* The notified task has a priority above the currently
                        executing task so a yield is required. */
                        if(0UL != (OS_UBase_t) pboHigherPriorityTaskWoken)
                        {
                            *pboHigherPriorityTaskWoken = TRUE;
                        }
                    }
                }
            }
        }
        OS_Task__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
    }
}

OS_Boolean_t OS_Task__boNotifyStateClear(OS_Task_Handle_TypeDef pvTask)
{
    OS_Task_TCB_TypeDef * pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Boolean_t boReturn = FALSE;

    pstTCB = (OS_Task_TCB_TypeDef*) pvTask;

    /* If null is passed in here then it is the calling task that is having
    its notification state cleared. */
    pstTCB = OS_Task__pstGetTCBFromHandle(pstTCB);

    OS_Task__vEnterCritical();
    {
        if(OS_Task_enNotifyState_Notified == pstTCB->enNotifyState)
        {
            pstTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
            boReturn = TRUE;
        }
        else
        {
            boReturn = FALSE;
        }
    }
    OS_Task__vExitCritical();

    return (boReturn);
}
