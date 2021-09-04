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

uint32_t OS_Task__u32NotifyTake(uint32_t u32ClearCountOnExit, uint32_t u32TicksToWait);

uint32_t OS_Task__u32NotifyWait(uint32_t u32BitsToClearOnEntry,
                                uint32_t u32BitsToClearOnExit,
                                uint32_t *pu32NotificationValue,
                                uint32_t u32TicksToWait);

uint32_t OS_Task__u32GenericNotify( OS_Task_Handle_TypeDef pvTaskToNotify,
                             uint32_t u32Value,
                             OS_Task_eNotifyAction enAction,
                             uint32_t *pu32PreviousNotificationValue);

uint32_t OS_Task__u32GenericNotifyFromISR(OS_Task_Handle_TypeDef pvTaskToNotify,
                                    uint32_t u32Value,
                                    OS_Task_eNotifyAction enAction,
                                    uint32_t *pu32PreviousNotificationValue,
                                    uint32_t *pu32HigherPriorityTaskWoken);
#endif /* XOS_TASK_XHEADER_OS_TASK_NOTIFY_H_ */
