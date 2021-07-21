/**
 *
 * @file OS_Task_Delayed.h
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

#ifndef XOS_TASK_XHEADER_OS_TASK_DELAYED_H_
#define XOS_TASK_XHEADER_OS_TASK_DELAYED_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vDelay(const uint32_t u32TicksToDelay);
void OS_Task__vDelayUntil( uint32_t * const pu32PreviousWakeTime, const uint32_t u32TimeIncrement );
void OS_Task__vAddCurrentTaskToDelayedList(const uint32_t u32TimeToWake);


#endif /* XOS_TASK_XHEADER_OS_TASK_DELAYED_H_ */
