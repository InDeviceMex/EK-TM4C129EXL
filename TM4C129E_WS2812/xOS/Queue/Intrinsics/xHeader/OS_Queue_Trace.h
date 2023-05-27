/**
 *
 * @file OS_Queue_Trace.h
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
 * @verbatim 3 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_TRACE_H_
#define XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_TRACE_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_UBase_t OS_Queue__uxGetQueueNumber(OS_Queue_Handle_t pvQueue);
void OS_Queue__vSetQueueNumber(OS_Queue_Handle_t pvQueue,
                               OS_UBase_t uxQueueNumberReg);
OS_UBase_t OS_Queue__uxGetQueueType(OS_Queue_Handle_t pvQueue);

#endif /* XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_TRACE_H_ */
