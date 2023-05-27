/**
 *
 * @file OS_Queue_Message_.h
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
 * @verbatim 30 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_MESSAGE__H_
#define XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_MESSAGE__H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_UBase_t OS_Queue__uxMessagesWaiting(const OS_Queue_Handle_t pvQueue);
OS_UBase_t OS_Queue__uxMessagesWaitingFromISR(const OS_Queue_Handle_t pvQueue);
OS_UBase_t OS_Queue__uxSpacesAvailable(const OS_Queue_Handle_t pvQueue);

#endif /* XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_MESSAGE__H_ */
