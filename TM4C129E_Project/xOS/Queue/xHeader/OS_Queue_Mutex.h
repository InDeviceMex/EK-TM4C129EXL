/**
 *
 * @file OS_Queue_Mutex.h
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

#ifndef XOS_QUEUE_XHEADER_OS_QUEUE_MUTEX_H_
#define XOS_QUEUE_XHEADER_OS_QUEUE_MUTEX_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Queue_Handle_TypeDef OS_Queue__pvCreateMutex(const OS_Queue_nType enQueueTypeArg);
OS_Boolean_t OS_Queue__boGiveMutexRecursive(OS_Queue_Handle_TypeDef pvMutex);
OS_Boolean_t OS_Queue__boTakeMutexRecursive(OS_Queue_Handle_TypeDef pvMutex,
                                            OS_UBase_t uxTicksToWait);
#endif /* XOS_QUEUE_XHEADER_OS_QUEUE_MUTEX_H_ */
