/**
 *
 * @file OS_Queue_Send.h
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
 * @verbatim 1 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_XHEADER_OS_QUEUE_SEND_H_
#define XOS_QUEUE_XHEADER_OS_QUEUE_SEND_H_

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Defines.h>

OS_Boolean_t OS_Queue__boGenericSend(OS_Queue_Handle_t pvQueue,
                                   const void * const pvItemToQueue,
                                   OS_UBase_t uxTicksToWait,
                                   const OS_Queue_nPos enCopyPosition);

OS_Boolean_t OS_Queue__boGenericSendFromISR(OS_Queue_Handle_t pvQueueArg,
                                            const void* const pvItemToQueue,
                                            OS_Boolean_t* const pboHigherPriorityTaskWoken,
                                            const OS_Queue_nPos enCopyPosition);

OS_Boolean_t OS_Queue__boAltGenericSend(OS_Queue_Handle_t pvQueue,
                                        const void* const pvItemToQueue,
                                        OS_UBase_t uxTicksToWait,
                                        OS_Queue_nPos enCopyPosition);

OS_Boolean_t OS_Queue__boGiveFromISR( OS_Queue_Handle_t pvQueue,
                                      OS_Boolean_t* const pboHigherPriorityTaskWoken);
#endif /* XOS_QUEUE_XHEADER_OS_QUEUE_SEND_H_ */
