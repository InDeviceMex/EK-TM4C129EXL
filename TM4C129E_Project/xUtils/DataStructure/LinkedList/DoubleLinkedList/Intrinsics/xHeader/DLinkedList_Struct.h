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
    DLinkedList_enSTATUS_OK,
    DLinkedList_enSTATUS_ERROR
}DLinkedList_nSTATUS;

typedef struct DLinkedListItem
{
        void* pvDataContainer;
        void* pvOwnerList;
        uint32_t u32ValueItem;
        struct DLinkedListItem *pstPrevious;
        struct DLinkedListItem *pstNext;
}DLinkedListItem_TypeDef;

typedef struct DLinkedList
{
        uint32_t u32Size;
        uint32_t (*pfu32Match) (const void *pcvKey1, const void *pcvKey2);
        void (*pfvDestroyItemData) (void *DataContainer);
        void (*pfvDestroyItem) (void *Item);
        void (*pfvDestroy) (void* List);
        DLinkedListItem_TypeDef *pstHead;
        DLinkedListItem_TypeDef *pstTail;
}DLinkedList_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_XHEADER_DLINKEDLIST_STRUCT_H_ */
