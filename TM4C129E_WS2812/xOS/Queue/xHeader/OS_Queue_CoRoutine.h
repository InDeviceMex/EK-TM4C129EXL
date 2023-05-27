/**
 *
 * @file OS_Queue_CoRoutine.h
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

#ifndef XOS_QUEUE_XHEADER_OS_QUEUE_COROUTINE_H_
#define XOS_QUEUE_XHEADER_OS_QUEUE_COROUTINE_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_UBase_t OS_Queue__boCoRoutineSend(OS_Queue_Handle_t pvQueue,
                                    const void* pvItemToQueue,
                                    OS_UBase_t uxTicksToWait);
OS_UBase_t OS_Queue__uxCoRoutineReceive(OS_Queue_Handle_t pvQueue,
                                        void *pvBuffer,
                                        OS_UBase_t uxTicksToWait);
OS_Boolean_t OS_Queue__boCoRoutineSendFromISR(OS_Queue_Handle_t pvQueue,
                                              const void *pvItemToQueue,
                                              OS_Boolean_t boCoRoutinePreviouslyWoken);
OS_Boolean_t OS_Queue__boCoRoutineReceiveFromISR(OS_Queue_Handle_t pvQueue,
                                                 void *pvBuffer,
                                                 OS_Boolean_t* pboCoRoutineWoken);

#endif /* XOS_QUEUE_XHEADER_OS_QUEUE_COROUTINE_H_ */
