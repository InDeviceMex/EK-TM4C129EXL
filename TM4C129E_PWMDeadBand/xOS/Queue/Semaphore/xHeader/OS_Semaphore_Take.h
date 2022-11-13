/**
 *
 * @file OS_Semaphore_Take.h
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

#ifndef XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_TAKE_H_
#define XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_TAKE_H_

#include <xOS/Queue/Semaphore/xHeader/OS_Semaphore_Defines.h>

OS_Boolean_t OS_Semaphore__boTake(OS_Semaphore_Handle_t pvSemaphoreArg, OS_UBase_t uxBlockTime);
OS_Boolean_t OS_Semaphore__boAltTake(OS_Semaphore_Handle_t pvSemaphoreArg, OS_UBase_t uxBlockTime);
OS_Boolean_t OS_Semaphore__boTakeFromISR(OS_Semaphore_Handle_t pvSemaphoreArg,
                                         OS_Boolean_t* const pboHigherPriorityTaskWoken);
OS_Boolean_t OS_Semaphore__boTakeRecursive(OS_Semaphore_Handle_t pvSemaphoreArg, OS_UBase_t uxBlockTime);


#endif /* XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_TAKE_H_ */
