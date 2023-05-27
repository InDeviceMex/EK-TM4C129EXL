/**
 *
 * @file OS_CoRoutine_Queue.h
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
 * @verbatim 3 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_COROUTINE_XHEADER_OS_COROUTINE_QUEUE_H_
#define XOS_COROUTINE_XHEADER_OS_COROUTINE_QUEUE_H_

#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Defines.h>
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Boolean_t OS_CoRoutine__boSendFromISR(OS_Queue_Handle_t pvQueue,
                                         const void *pvItemToQueue,
                                         OS_Boolean_t boCoRoutinePreviouslyWoken);

OS_Boolean_t OS_CoRoutine__boReceiveFromISR(OS_Queue_Handle_t pvQueue,
                                            void *pvBuffer,
                                            OS_Boolean_t* pboCoRoutineWoken);

#endif /* XOS_COROUTINE_XHEADER_OS_COROUTINE_QUEUE_H_ */
