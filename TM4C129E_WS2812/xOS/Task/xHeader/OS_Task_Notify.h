/**
 *
 * @file OS_Task_Notify.h
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

#ifndef XOS_TASK_XHEADER_OS_TASK_NOTIFY_H_
#define XOS_TASK_XHEADER_OS_TASK_NOTIFY_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_UBase_t OS_Task__uxNotifyTake(OS_Boolean_t boClearCountOnExit,
                                 OS_UBase_t uxTicksToWait);

OS_Boolean_t OS_Task__boNotifyWait(OS_UBase_t uxBitsToClearOnEntry,
                                OS_UBase_t uxBitsToClearOnExit,
                                OS_UBase_t *puxNotificationValue,
                                OS_UBase_t uxTicksToWait);

OS_Boolean_t OS_Task__boGenericNotify( OS_Task_Handle_t pvTaskToNotify,
                             OS_UBase_t uxValueArg,
                             OS_Task_eNotifyAction enAction,
                             OS_UBase_t *puxPreviousNotificationValue);

OS_Boolean_t OS_Task__boNotify( OS_Task_Handle_t pvTaskToNotify,
                             OS_UBase_t uxValueArg,
                             OS_Task_eNotifyAction enAction);

OS_Boolean_t OS_Task__boNotifyAndQuery( OS_Task_Handle_t pvTaskToNotify,
                             OS_UBase_t uxValueArg,
                             OS_Task_eNotifyAction enAction,
                             OS_UBase_t *puxPreviousNotificationValue);

OS_Boolean_t OS_Task__boNotifyGive( OS_Task_Handle_t pvTaskToNotify);

OS_Boolean_t OS_Task__boGenericNotifyFromISR(OS_Task_Handle_t pvTaskToNotify,
                                    OS_UBase_t uxValueArg,
                                    OS_Task_eNotifyAction enAction,
                                    OS_UBase_t *puxPreviousNotificationValue,
                                    OS_Boolean_t *pboHigherPriorityTaskWoken);

OS_Boolean_t OS_Task__boNotifyFromISR(OS_Task_Handle_t pvTaskToNotify,
                                    OS_UBase_t uxValueArg,
                                    OS_Task_eNotifyAction enAction,
                                    OS_Boolean_t *pboHigherPriorityTaskWoken);

OS_Boolean_t OS_Task__boNotifyAndQueryFromISR(OS_Task_Handle_t pvTaskToNotify,
                                    OS_UBase_t uxValueArg,
                                    OS_Task_eNotifyAction enAction,
                                    OS_UBase_t *puxPreviousNotificationValue,
                                    OS_Boolean_t *pboHigherPriorityTaskWoken);

void OS_Task__vNotifyGiveFromISR(OS_Task_Handle_t pvTaskToNotify,
                            OS_Boolean_t *pboHigherPriorityTaskWoken);

OS_Boolean_t OS_Task__boNotifyStateClear(OS_Task_Handle_t pvTask);

#endif /* XOS_TASK_XHEADER_OS_TASK_NOTIFY_H_ */
