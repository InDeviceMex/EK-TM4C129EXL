/**
 *
 * @file OS_Queue_Empty.h
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
 * @verbatim 4 oct. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 oct. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_EMPTY_H_
#define XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_EMPTY_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Boolean_t OS_Queue__boIsQueueEmpty(const OS_Queue_TypeDef* pstQueue);
OS_Boolean_t OS_Queue__boIsQueueEmptyFromISR(const OS_Queue_Handle_TypeDef* pstQueue);

#endif /* XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_EMPTY_H_ */
