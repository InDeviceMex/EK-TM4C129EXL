/**
 *
 * @file DLinkedList_Struct.h
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_XHEADER_DLINKEDLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_XHEADER_DLINKEDLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    DLinkedList_enERROR_OK = (UBase_t) ERROR_OK,
    DLinkedList_enERROR_POINTER = (UBase_t) ERROR_POINTER,
    DLinkedList_enERROR_VALUE = (UBase_t) ERROR_VALUE,
    DLinkedList_enERROR_EMPTY = (UBase_t) ERROR_EMPTY,
    DLinkedList_enERROR_RANGE = (UBase_t) ERROR_RANGE,
    DLinkedList_enERROR_UNDEF = (UBase_t) ERROR_UNDEF,
}DLinkedList_nERROR;


typedef UBase_t (*DLinkedList_pfuxMatch_t)(const void *pcvKey1, const void *pcvKey2);
typedef void (*DLinkedList_pvfDestroyItemData_t)(void *DataContainer);
typedef void (*DLinkedList_pvfDestroyItem_t)(void *Item);
typedef void (*DLinkedList_pvfDestroy_t)(void* List);

typedef struct DLinkedListItem
{
        void* pvDataContainer;
        void* pvOwnerList;
        UBase_t uxValueItem;
        struct DLinkedListItem *pstPreviousItem;
        struct DLinkedListItem *pstNextItem;
}DLinkedListItem_t;

typedef struct DLinkedList
{
        UBase_t uxSize;
        DLinkedList_pfuxMatch_t pfuxMatch;
        DLinkedList_pvfDestroyItemData_t pvfDestroyItemData;
        DLinkedList_pvfDestroyItem_t pvfDestroyItem;
        DLinkedList_pvfDestroy_t pvfDestroy;
        DLinkedListItem_t *pstLastItemRead;
        DLinkedListItem_t *pstHead;
        DLinkedListItem_t *pstTail;
}DLinkedList_t;

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_XHEADER_DLINKEDLIST_STRUCT_H_ */
