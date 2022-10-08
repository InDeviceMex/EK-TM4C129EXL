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
    SLinkedList_enSTATUS_UNDEF = (UBase_t) ERROR_UNDEF,
}SLinkedList_nERROR;

typedef struct SLinkedListItem
{
        void* pvDataContainer;
        void* pvOwnerList;
        UBase_t uxValueItem;
        struct SLinkedListItem *pstNextItem;
}SLinkedListItem_t;

typedef struct SLinkedList
{
        UBase_t uxSize;
        UBase_t (*pfuxMatch) (const void *pcvKey1, const void *pcvKey2);
        void (*pvfDestroyItemData) (void *DataContainer);
        void (*pvfDestroyItem) (void *Item);
        void (*pvfDestroy) (void* List);
        SLinkedListItem_t *pstLastItemRead;
        SLinkedListItem_t *pstHead;
        SLinkedListItem_t *pstTail;
}SLinkedList_t;

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_XHEADER_SLINKEDLIST_STRUCT_H_ */
