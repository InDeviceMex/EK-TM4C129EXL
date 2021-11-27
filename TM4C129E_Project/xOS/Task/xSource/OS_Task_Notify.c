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
    OS_List_t* pstSuspendedTaskList = (OS_List_t*) 0UL;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxTimeToWake = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxReturn = 0UL;

    OS_Task__vEnterCritical();
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(0UL == pstCurrentTCB->uxNotifiedValue)
        {
            pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_WaitingNotification;
            if(0UL < uxTicksToWait)
            {
                uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vAdaptResetReadyPriority(pstCurrentTCB->uxPriorityTask);
                }

                if(OS_ADAPT_MAX_DELAY == uxTicksToWait)
                {
                    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    OS_List__vInsertEnd(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                    uxTimeToWake = uxTickCount + uxTicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
                }
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
    OS_List_t* pstSuspendedTaskList = (OS_List_t*) 0UL;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxTimeToWake = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_Boolean_t boReturn = FALSE;

    OS_Task__vEnterCritical();
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(OS_Task_enNotifyState_Notified != pstCurrentTCB->enNotifyState)
        {
            pstCurrentTCB->uxNotifiedValue &= ~uxBitsToClearOnEntry;
            pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_WaitingNotification;

            if(0UL < uxTicksToWait)
            {
                uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vAdaptResetReadyPriority( pstCurrentTCB->uxPriorityTask);
                }

                if(OS_ADAPT_MAX_DELAY == uxTicksToWait)
                {
                    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    OS_List__vInsertEnd(pstSuspendedTaskList,  &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                    uxTimeToWake = uxTickCount + uxTicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
                }
                OS_Task__vYieldWithinAPI();
            }
        }
    }
    OS_Task__vExitCritical();

    OS_Task__vEnterCritical();
    {
        if(0UL != (uint32_t) puxNotificationValue)
        {
            *puxNotificationValue = pstCurrentTCB->uxNotifiedValue;
        }

        if(OS_Task_enNotifyState_WaitingNotification == pstCurrentTCB->enNotifyState)
        {
            boReturn = FALSE;
        }
        else
        {
            pstCurrentTCB->uxNotifiedValue &= ~uxBitsToClearOnExit;
            boReturn = TRUE;
        }
        pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    }
    OS_Task__vExitCritical();

    return (boReturn);
}

OS_Boolean_t OS_Task__boGenericNotify( OS_Task_Handle_t pvTaskToNotify,
                             OS_UBase_t uxValue,
                             OS_Task_eNotifyAction enAction,
                             OS_UBase_t *puxPreviousNotificationValue)
{
    OS_List_t* pstTCBOwnerList = (OS_List_t*) 0UL;
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t*) 0UL;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    OS_Boolean_t boReturn = TRUE;

    if(0UL != (OS_UBase_t) pvTaskToNotify)
    {
        pstTCB = (OS_Task_TCB_t *) pvTaskToNotify;

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
                        boReturn = FALSE;
                    }
                    break;

                case OS_Task_enNotifyAction_NoAction:
                    break;
                default:
                    break;
            }

            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                OS_Task__vAddTaskToReadyList(pstTCB);

                pstTCBOwnerList = (OS_List_t*) OS_List__pvItemContainer( &( pstTCB->stEventListItem));
                if(0UL == (OS_UBase_t) pstTCBOwnerList)
                {
                    OS_Task__vResetNextTaskUnblockTime();

                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
                    {
                        OS_Task__vYieldIfUsingPreemption();
                    }
                }
            }
        }
        OS_Task__vExitCritical();
    }
    return (boReturn);
}

OS_Boolean_t OS_Task__boGenericNotifyFromISR(OS_Task_Handle_t pvTaskToNotify,
                                    OS_UBase_t uxValue,
                                    OS_Task_eNotifyAction enAction,
                                    OS_UBase_t *puxPreviousNotificationValue,
                                    OS_Boolean_t *pboHigherPriorityTaskWoken)
{
    OS_List_t* pstPendingReadyList = (OS_List_t*) 0UL;
    OS_List_t* pstTCBOwnerList = (OS_List_t*) 0UL;
    OS_Task_TCB_t * pstTCB = (OS_Task_TCB_t*) 0UL;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
    OS_Boolean_t boReturn = TRUE;

    if(0UL != (OS_UBase_t) pvTaskToNotify)
    {
        pstTCB = (OS_Task_TCB_t *) pvTaskToNotify;

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
                        boReturn = FALSE;
                    }
                    break;

                case OS_Task_enNotifyAction_NoAction :
                    break;
                default:
                    break;
            }

            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                pstTCBOwnerList = (OS_List_t*) OS_List__pvItemContainer(&( pstTCB->stEventListItem));
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
                        pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                        OS_List__vInsertEnd(pstPendingReadyList,
                                            &(pstTCB->stGenericListItem));
                    }

                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
                    {
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

void OS_Task__vNotifyGiveFromISR(OS_Task_Handle_t pvTaskToNotify,
                            OS_Boolean_t *pboHigherPriorityTaskWoken)
{
    OS_List_t* pstPendingReadyList = (OS_List_t*) 0UL;
    OS_List_t* pstTCBOwnerList = (OS_List_t*) 0UL;
    OS_Task_TCB_t * pstTCB = (OS_Task_TCB_t*) 0UL;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Task_eNotifyState enOriginalNotifyState = OS_Task_enNotifyState_NotWaitingNotification;

    if(0UL != (OS_UBase_t) pvTaskToNotify)
    {
        pstTCB = (OS_Task_TCB_t *) pvTaskToNotify;

        uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
        {
            enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;
            (pstTCB->uxNotifiedValue)++;

            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                pstTCBOwnerList = (OS_List_t*) OS_List__pvItemContainer(&( pstTCB->stEventListItem));
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
                        pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                        OS_List__vInsertEnd(pstPendingReadyList,
                                            &(pstTCB->stEventListItem));
                    }

                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
                    {
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

OS_Boolean_t OS_Task__boNotifyStateClear(OS_Task_Handle_t pvTask)
{
    OS_Task_TCB_t * pstTCB = (OS_Task_TCB_t*) 0UL;
    OS_Boolean_t boReturn = FALSE;

    pstTCB = (OS_Task_TCB_t*) pvTask;
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
