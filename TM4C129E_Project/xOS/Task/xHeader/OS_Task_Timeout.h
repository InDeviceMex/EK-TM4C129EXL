/**
 *
 * @file OS_Task_Timeout.h
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

#ifndef XOS_TASK_XHEADER_OS_TASK_TIMEOUT_H_
#define XOS_TASK_XHEADER_OS_TASK_TIMEOUT_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vSetTimeOutState(OS_Task_TimeOut_TypeDef * const pstTimeOut);

uint32_t OS_Task__u32CheckForTimeOut( OS_Task_TimeOut_TypeDef * const pstTimeOut,
                               uint32_t * const pu32TicksToWait );

#endif /* XOS_TASK_XHEADER_OS_TASK_TIMEOUT_H_ */
