/**
 *
 * @file OS_Queue_Notify.h
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
 * @verbatim 17 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_XHEADER_OS_QUEUE_NOTIFY_H_
#define XOS_QUEUE_XHEADER_OS_QUEUE_NOTIFY_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Boolean_t OS_Queue__boNotifyQueueSetContainer(const OS_Queue_TypeDef * const pstQueue,
                                                 const OS_Queue_nPos enCopyPosition);

#endif /* XOS_QUEUE_XHEADER_OS_QUEUE_NOTIFY_H_ */
