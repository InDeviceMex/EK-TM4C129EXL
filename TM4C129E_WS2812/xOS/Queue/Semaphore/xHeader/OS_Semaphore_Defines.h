/**
 *
 * @file OS_Semaphore_Defines.h
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
 * @verbatim 20 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_DEFINES_H_
#define XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_DEFINES_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>
#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>


typedef OS_Queue_Handle_t OS_Semaphore_Handle_t;

#define OS_SEMAPHORE_BINARY_QUEUE_LENGTH    ((OS_UBase_t) 1UL)
#define OS_SEMAPHORE_QUEUE_ITEM_LENGTH    ((OS_UBase_t) 0UL)
#define OS_SEMAPHORE_BLOCK_TIME    ((OS_UBase_t) 0UL)


#endif /* XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_DEFINES_H_ */
