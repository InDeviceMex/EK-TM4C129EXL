/**
 *
 * @file Queue_Struct.h
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
#ifndef XUTILS_DATASTRUCTURE_QUEUE_XHEADER_QUEUE_STRUCT_H_
#define XUTILS_DATASTRUCTURE_QUEUE_XHEADER_QUEUE_STRUCT_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

typedef enum
{
    Queue_enERROR_OK = (UBase_t) ERROR_OK,
    Queue_enERROR_POINTER = (UBase_t) ERROR_POINTER,
    Queue_enERROR_VALUE = (UBase_t) ERROR_VALUE,
    Queue_enERROR_EMPTY = (UBase_t) ERROR_EMPTY,
    Queue_enERROR_RANGE = (UBase_t) ERROR_RANGE,
    Queue_enERROR_FULL = (UBase_t) ERROR_FULL,
    Queue_enERROR_UNDEF = (UBase_t) ERROR_UNDEF,
}Queue_nERROR;


typedef SLinkedList_t Queue_t;

typedef SLinkedList_pfuxMatch_t Queue_pfuxMatch_t;
typedef SLinkedList_pvfDestroyItemData_t Queue_pvfDestroyItemData_t;
typedef SLinkedList_pvfDestroyItem_t Queue_pvfDestroyItem_t;
typedef SLinkedList_pvfDestroy_t Queue_pvfDestroy_t;

#endif /* XUTILS_DATASTRUCTURE_QUEUE_XHEADER_QUEUE_STRUCT_H_ */
