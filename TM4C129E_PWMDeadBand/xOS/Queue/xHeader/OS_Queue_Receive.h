/**
 *
 * @file OS_Queue_Receive.h
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
 * @verbatim 2 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_XHEADER_OS_QUEUE_RECEIVE_H_
#define XOS_QUEUE_XHEADER_OS_QUEUE_RECEIVE_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Boolean_t OS_Queue__boGenericReceive( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait,
                                       const OS_Boolean_t boJustPeeking);
OS_Boolean_t OS_Queue__boPeek( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait);
OS_Boolean_t OS_Queue__boReceive( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait);

OS_Boolean_t OS_Queue__boReceiveFromISR(OS_Queue_Handle_t pvQueue,
                                   void * const pvBuffer,
                                   OS_Boolean_t* const pboHigherPriorityTaskWoken);

OS_Boolean_t OS_Queue__boAltGenericReceive( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait,
                                       const OS_Boolean_t boJustPeeking);
OS_Boolean_t OS_Queue__boAltPeek( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait);
OS_Boolean_t OS_Queue__boAltReceive( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait);

#endif /* XOS_QUEUE_XHEADER_OS_QUEUE_RECEIVE_H_ */
