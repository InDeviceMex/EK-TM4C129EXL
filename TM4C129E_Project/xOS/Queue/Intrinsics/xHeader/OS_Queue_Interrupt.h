/**
 *
 * @file OS_Queue_Interrupt.h
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
 * @verbatim 15 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_INTERRUPT_H_
#define XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_INTERRUPT_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

void OS_Queue__vYieldWithinAPI(void);
void OS_Queue__vYieldIfUsingPreemption(void);

#endif /* XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_INTERRUPT_H_ */
