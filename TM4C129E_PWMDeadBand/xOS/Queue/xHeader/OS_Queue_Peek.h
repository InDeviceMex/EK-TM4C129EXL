/**
 *
 * @file OS_Queue_Peek.h
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

#ifndef XOS_QUEUE_XHEADER_OS_QUEUE_PEEK_H_
#define XOS_QUEUE_XHEADER_OS_QUEUE_PEEK_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Boolean_t OS_Queue__boPeekFromISR(OS_Queue_Handle_t pvQueue,  void* const pvBuffer);

#endif /* XOS_QUEUE_XHEADER_OS_QUEUE_PEEK_H_ */
