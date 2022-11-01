/**
 *
 * @file SLinkedList_Struct.h
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_XHEADER_SLINKEDLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_XHEADER_SLINKEDLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    SLinkedList_enERROR_OK = (UBase_t) ERROR_OK,
    SLinkedList_enERROR_POINTER = (UBase_t) ERROR_POINTER,
    SLinkedList_enERROR_VALUE = (UBase_t) ERROR_VALUE,
    SLinkedList_enERROR_EMPTY = (UBase_t) ERROR_EMPTY,
    SLinkedList_enERROR_RANGE = (UBase_t) ERROR_RANGE,
    SLinkedList_enERROR_UNDEF = (UBase_t) ERROR_UNDEF,
}SLinkedList_nERROR;


typedef UBase_t (*SLinkedList_pfuxMatch_t)(const void *pcvKey1, const void *pcvKey2);
typedef void (*SLinkedList_pvfDestroyItemData_t)(void *DataContainer);
typedef void (*SLinkedList_pvfDestroyItem_t)(void *Item);
typedef void (*SLinkedList_pvfDestroy_t)(void* List);



typedef struct SLinkedListItem
{
    UBase_t uxValueItem;
    void* pvDataContainer;
    void* pvOwnerList;
    struct SLinkedListItem *pstNextItem;
}SLinkedListItem_t;

typedef struct SLinkedList
{
        UBase_t uxSize;
        UBase_t uxReserved1;
        SLinkedList_pfuxMatch_t pfuxMatch;
        SLinkedList_pvfDestroyItemData_t pvfDestroyItemData;
        SLinkedList_pvfDestroyItem_t pvfDestroyItem;
        SLinkedList_pvfDestroy_t pvfDestroy;
        SLinkedListItem_t *pstLastItemRead;
        SLinkedListItem_t *pstHead;
        SLinkedListItem_t *pstTail;
        SLinkedListItem_t *pstReserved2;
}SLinkedList_t;

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_XHEADER_SLINKEDLIST_STRUCT_H_ */
