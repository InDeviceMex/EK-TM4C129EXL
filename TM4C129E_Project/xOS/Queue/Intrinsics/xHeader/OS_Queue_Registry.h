/**
 *
 * @file OS_Queue_Registry.h
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
 * @verbatim 15 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_REGISTRY_H_
#define XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_REGISTRY_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

void OS_Queue__vRegisterQueue( OS_Queue_Handle_TypeDef pvQueue,
                              const char* pcQueueNameArg);
void OS_Queue__vUnregisterQueue(OS_Queue_Handle_TypeDef pvQueue);

#endif /* XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_REGISTRY_H_ */
