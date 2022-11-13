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

#ifndef XOS_QUEUE_XHEADER_OS_QUEUE_SET_H_
#define XOS_QUEUE_XHEADER_OS_QUEUE_SET_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Queue_SetHandle_t OS_Queue__pvCreateSet(const OS_UBase_t uxEventQueueLengthArg);
OS_Queue_SetMemberHandle_t OS_Queue__pvSelectFromSet(OS_Queue_SetHandle_t pvQueueSet,
                                               OS_UBase_t const uxTicksToWait);
OS_Queue_SetMemberHandle_t OS_Queue__pvSelectFromSetFromISR(OS_Queue_SetHandle_t pvQueueSet);

#endif /* XOS_QUEUE_XHEADER_OS_QUEUE_SET_H_ */
