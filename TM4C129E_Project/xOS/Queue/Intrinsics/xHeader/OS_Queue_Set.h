/**
 *
 * @file OS_Queue_Set.h
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
 * @verbatim 1 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_SET_H_
#define XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_SET_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Boolean_t OS_Queue__boRemoveFromSet(OS_Queue_SetMemberHandle_t pvfQueueOrSemaphore, OS_Queue_SetHandle_t pvfQueueSet);
OS_Boolean_t OS_Queue__boAddToSet(OS_Queue_SetMemberHandle_t pvfQueueOrSemaphore, OS_Queue_SetHandle_t pvfQueueSet);

#endif /* XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_SET_H_ */
