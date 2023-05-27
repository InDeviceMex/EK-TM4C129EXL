/**
 *
 * @file OS_Semaphore_Create.h
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

#ifndef XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_CREATE_H_
#define XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_CREATE_H_

#include <xOS/Queue/Semaphore/xHeader/OS_Semaphore_Defines.h>

OS_Boolean_t OS_Semaphore__boCreateBinary(OS_Semaphore_Handle_t* pvSemaphoreArg);
OS_Semaphore_Handle_t OS_Semaphore__pvCreateBinary(void);

OS_Semaphore_Handle_t OS_Semaphore__pvCreateMutex(void);
OS_Semaphore_Handle_t OS_Semaphore__pvCreateRecursiveMutex(void);

OS_Task_Handle_t OS_Semaphore__pvGetMutexHolder(OS_Semaphore_Handle_t pvSemaphoreArg);
OS_Semaphore_Handle_t OS_Semaphore__pvCreateCounting(const OS_UBase_t uxMaxCount,
                                                     const OS_UBase_t uxInitialCount);


#endif /* XOS_QUEUE_SEMAPHORE_XHEADER_OS_SEMAPHORE_CREATE_H_ */
