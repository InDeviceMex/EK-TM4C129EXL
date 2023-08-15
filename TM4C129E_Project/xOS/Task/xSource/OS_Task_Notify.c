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
    OS_Task_TCB_t *pstCurrentTCB;
    OS_UBase_t uxReturn;

    uxReturn = 0UL;
    pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_Task__vEnterCritical();
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(0UL == pstCurrentTCB->uxNotifiedValue)
        {
            pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_WaitingNotification;
            if(0UL < uxTicksToWait)
            {
                OS_UBase_t uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vAdaptResetReadyPriority(pstCurrentTCB->uxPriorityTask);
                }

                if(OS_ADAPT_MAX_DELAY == uxTicksToWait)
                {
                    OS_List_t* pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    OS_List__vInsertEnd(pstSuspendedTaskList, &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    OS_UBase_t uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                    OS_UBase_t uxTimeToWake = uxTickCount + uxTicksToWait;
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
    OS_Task_TCB_t *pstCurrentTCB;
    OS_Boolean_t boReturn;

    pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    boReturn = FALSE;
    OS_Task__vEnterCritical();
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(OS_Task_enNotifyState_Notified != pstCurrentTCB->enNotifyState)
        {
            pstCurrentTCB->uxNotifiedValue &= ~uxBitsToClearOnEntry;
            pstCurrentTCB->enNotifyState = OS_Task_enNotifyState_WaitingNotification;

            if(0UL < uxTicksToWait)
            {
                OS_UBase_t uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vAdaptResetReadyPriority( pstCurrentTCB->uxPriorityTask);
                }

                if(OS_ADAPT_MAX_DELAY == uxTicksToWait)
                {
                    OS_List_t* pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
                    OS_List__vInsertEnd(pstSuspendedTaskList,  &(pstCurrentTCB->stGenericListItem));
                }
                else
                {
                    OS_UBase_t uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                    OS_UBase_t uxTimeToWake = uxTickCount + uxTicksToWait;
                    OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
                }
                OS_Task__vYieldWithinAPI();
            }
        }
    }
    OS_Task__vExitCritical();

    OS_Task__vEnterCritical();
    {
        if(0UL != (OS_Pointer_t) puxNotificationValue)
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
                             OS_UBase_t uxValueArg,
                             OS_Task_eNotifyAction enAction,
                             OS_UBase_t *puxPreviousNotificationValue)
{
    OS_Boolean_t boReturn;
    boReturn = TRUE;
    if(0UL != (OS_Pointer_t) pvTaskToNotify)
    {
        OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t *) pvTaskToNotify;

        OS_Task__vEnterCritical();
        {
            if(0UL != (OS_Pointer_t) puxPreviousNotificationValue)
            {
                *puxPreviousNotificationValue = pstTCB->uxNotifiedValue;
            }

            OS_Task_eNotifyState enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;

            switch(enAction)
            {
                case OS_Task_enNotifyAction_SetBits   :
                    pstTCB->uxNotifiedValue |= uxValueArg;
                    break;

                case OS_Task_enNotifyAction_Increment :
                    (pstTCB->uxNotifiedValue)++;
                    break;

                case OS_Task_enNotifyAction_SetValueWithOverwrite :
                    pstTCB->uxNotifiedValue = (OS_UBase_t) uxValueArg;
                    break;

                case OS_Task_enNotifyAction_SetValueWithoutOverwrite :
                    if(enOriginalNotifyState != OS_Task_enNotifyState_Notified)
                    {
                        pstTCB->uxNotifiedValue = (OS_UBase_t) uxValueArg;
                    }
                    else
                    {
                        boReturn = FALSE;
                    }
                    break;

                case OS_Task_enNotifyAction_NoAction:
                    break;
                case OS_Task_enNotifyAction_Undef:
                    break;
                default:
                    break;
            }

            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {

                (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                OS_Task__vAddTaskToReadyList(pstTCB);

                OS_List_t* pstTCBOwnerList = (OS_List_t*) OS_List__pvGetItemContainer( &( pstTCB->stEventListItem));
                if(0UL == (OS_Pointer_t) pstTCBOwnerList)
                {
                    OS_Task__vResetNextTaskUnblockTime();

                    OS_Task_TCB_t *pstCurrentTCB = OS_Task__pstGetCurrentTCB();
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

OS_Boolean_t OS_Task__boNotify( OS_Task_Handle_t pvTaskToNotify,
                             OS_UBase_t uxValueArg,
                             OS_Task_eNotifyAction enAction)
{
    OS_Boolean_t boReturn;
    boReturn = OS_Task__boGenericNotify(pvTaskToNotify,
                                        uxValueArg,
                                 enAction,
                                 (OS_UBase_t*) 0UL);
    return (boReturn);
}

OS_Boolean_t OS_Task__boNotifyAndQuery( OS_Task_Handle_t pvTaskToNotify,
                             OS_UBase_t uxValueArg,
                             OS_Task_eNotifyAction enAction,
                             OS_UBase_t *puxPreviousNotificationValue)
{
    OS_Boolean_t boReturn;
    boReturn = OS_Task__boGenericNotify(pvTaskToNotify,
                                        uxValueArg,
                                 enAction,
                                 puxPreviousNotificationValue);
    return (boReturn);
}

OS_Boolean_t OS_Task__boGenericNotifyFromISR(OS_Task_Handle_t pvTaskToNotify,
                                    OS_UBase_t uxValueArg,
                                    OS_Task_eNotifyAction enAction,
                                    OS_UBase_t *puxPreviousNotificationValue,
                                    OS_Boolean_t *pboHigherPriorityTaskWoken)
{
    OS_Boolean_t boReturn;

    boReturn = TRUE;
    if(0UL != (OS_Pointer_t) pvTaskToNotify)
    {
        OS_Task_TCB_t * pstTCB = (OS_Task_TCB_t *) pvTaskToNotify;
        OS_UBase_t uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
        {
            if(0UL != (OS_Pointer_t) puxPreviousNotificationValue)
            {
                *puxPreviousNotificationValue = pstTCB->uxNotifiedValue;
            }

            OS_Task_eNotifyState enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;

            switch(enAction)
            {
                case OS_Task_enNotifyAction_SetBits   :
                    pstTCB->uxNotifiedValue |= uxValueArg;
                    break;

                case OS_Task_enNotifyAction_Increment :
                    (pstTCB->uxNotifiedValue)++;
                    break;

                case OS_Task_enNotifyAction_SetValueWithOverwrite :
                    pstTCB->uxNotifiedValue = (OS_UBase_t) uxValueArg;
                    break;

                case OS_Task_enNotifyAction_SetValueWithoutOverwrite :
                    if(OS_Task_enNotifyState_Notified != enOriginalNotifyState)
                    {
                        pstTCB->uxNotifiedValue = (OS_UBase_t) uxValueArg;
                    }
                    else
                    {
                        boReturn = FALSE;
                    }
                    break;

                case OS_Task_enNotifyAction_NoAction:
                    break;
                case OS_Task_enNotifyAction_Undef:
                    break;
                default:
                    break;
            }

            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                OS_List_t* pstTCBOwnerList = (OS_List_t*) OS_List__pvGetItemContainer(&( pstTCB->stEventListItem));
                if(0UL == (OS_Pointer_t) pstTCBOwnerList)
                {
                    OS_UBase_t uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
                    if(0UL == uxSchedulerSuspended)
                    {
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);
                    }
                    else
                    {
                        OS_List_t* pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                        OS_List__vInsertEnd(pstPendingReadyList,
                                            &(pstTCB->stGenericListItem));
                    }

                    OS_Task_TCB_t *pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
                    {
                        if(0UL != (OS_Pointer_t) pboHigherPriorityTaskWoken)
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

OS_Boolean_t OS_Task__boNotifyFromISR(OS_Task_Handle_t pvTaskToNotify,
                                    OS_UBase_t uxValueArg,
                                    OS_Task_eNotifyAction enAction,
                                    OS_Boolean_t *pboHigherPriorityTaskWoken)
{
    OS_Boolean_t boReturn;
    boReturn = OS_Task__boGenericNotifyFromISR(pvTaskToNotify,
                                               uxValueArg,
                                        enAction,
                                        (OS_UBase_t*) 0UL,
                                        pboHigherPriorityTaskWoken);
    return (boReturn);
}

OS_Boolean_t OS_Task__boNotifyAndQueryFromISR(OS_Task_Handle_t pvTaskToNotify,
                                    OS_UBase_t uxValueArg,
                                    OS_Task_eNotifyAction enAction,
                                    OS_UBase_t *puxPreviousNotificationValue,
                                    OS_Boolean_t *pboHigherPriorityTaskWoken)
{
    OS_Boolean_t boReturn;
    boReturn = OS_Task__boGenericNotifyFromISR(pvTaskToNotify,
                                               uxValueArg,
                                        enAction,
                                        puxPreviousNotificationValue,
                                        pboHigherPriorityTaskWoken);
    return (boReturn);
}


OS_Boolean_t OS_Task__boNotifyGive( OS_Task_Handle_t pvTaskToNotify)
{
    OS_Boolean_t boReturn;
    boReturn= OS_Task__boGenericNotify(pvTaskToNotify, 0UL, OS_Task_enNotifyAction_Increment, (OS_UBase_t*) 0UL);
    return (boReturn);
}

void OS_Task__vNotifyGiveFromISR(OS_Task_Handle_t pvTaskToNotify,
                            OS_Boolean_t *pboHigherPriorityTaskWoken)
{
    if(0UL != (OS_Pointer_t) pvTaskToNotify)
    {
        OS_Task_TCB_t * pstTCB = (OS_Task_TCB_t *) pvTaskToNotify;
        OS_UBase_t uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
        {
            OS_Task_eNotifyState enOriginalNotifyState = pstTCB->enNotifyState;
            pstTCB->enNotifyState = OS_Task_enNotifyState_Notified;
            (pstTCB->uxNotifiedValue)++;

            if(OS_Task_enNotifyState_WaitingNotification == enOriginalNotifyState)
            {
                OS_List_t* pstTCBOwnerList = (OS_List_t*) OS_List__pvGetItemContainer(&( pstTCB->stEventListItem));
                if( 0UL == (OS_Pointer_t) pstTCBOwnerList)
                {
                    OS_UBase_t uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
                    if(0UL == uxSchedulerSuspended)
                    {
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);
                    }
                    else
                    {
                        OS_List_t* pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                        OS_List__vInsertEnd(pstPendingReadyList,
                                            &(pstTCB->stEventListItem));
                    }

                    OS_Task_TCB_t *pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask > pstCurrentTCB->uxPriorityTask )
                    {
                        if(0UL != (OS_Pointer_t) pboHigherPriorityTaskWoken)
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
    OS_Task_TCB_t * pstTCB;
    OS_Boolean_t boReturn;

    pstTCB = OS_Task__pstGetTCBFromHandle((OS_Task_TCB_t*) pvTask);
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
