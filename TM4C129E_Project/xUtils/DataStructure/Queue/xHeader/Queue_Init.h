/**
 *
 * @file Queue_Init.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 13 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_QUEUE_XHEADER_QUEUE_INIT_H_
#define XUTILS_DATASTRUCTURE_QUEUE_XHEADER_QUEUE_INIT_H_

#include <xUtils/DataStructure/Queue/xHeader/Queue_Struct.h>

Queue_TypeDef* Queue__pstInit(void (*pfvDestroyElementDataArg) (void *DataContainer),
                              void (*pfvDestroyItemArg) (void *Item));
Queue_nSTATUS Queue__enInit(Queue_TypeDef* pstQueue,
                            void (*pfvDestroyElementDataArg) (void *DataContainer),
                            void (*pfvDestroyItemArg) (void *Item));

#endif /* XUTILS_DATASTRUCTURE_QUEUE_XHEADER_QUEUE_INIT_H_ */
