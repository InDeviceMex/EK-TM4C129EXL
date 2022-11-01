/**
 *
 * @file CDLinkedList_Struct.h
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_XHEADER_CIRCULARDLINKEDLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_XHEADER_CIRCULARDLINKEDLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    CDLinkedList_enERROR_OK = (UBase_t) ERROR_OK,
    CDLinkedList_enERROR_POINTER = (UBase_t) ERROR_POINTER,
    CDLinkedList_enERROR_VALUE = (UBase_t) ERROR_VALUE,
    CDLinkedList_enERROR_EMPTY = (UBase_t) ERROR_EMPTY,
    CDLinkedList_enERROR_RANGE = (UBase_t) ERROR_RANGE,
    CDLinkedList_enERROR_UNDEF = (UBase_t) ERROR_UNDEF,
}CDLinkedList_nERROR;

typedef UBase_t (*CDLinkedList_pfuxMatch_t)(const void *pcvKey1, const void *pcvKey2);
typedef void (*CDLinkedList_pvfDestroyItemData_t)(void *DataContainer);
typedef void (*CDLinkedList_pvfDestroyItem_t)(void *Item);
typedef void (*CDLinkedList_pvfDestroy_t)(void* List);

typedef struct CDLinkedListItem
{
    UBase_t uxValueItem;
    UBase_t uxReserved;
    void* pvDataContainer;
    void* pvOwnerList;
    struct CDLinkedListItem *pstPreviousItem;
    struct CDLinkedListItem *pstNextItem;
}CDLinkedListItem_t;

typedef struct CDLinkedList
{
        UBase_t uxSize;
        UBase_t uxReserved1;
        CDLinkedList_pfuxMatch_t pfuxMatch;
        CDLinkedList_pvfDestroyItemData_t pvfDestroyItemData;
        CDLinkedList_pvfDestroyItem_t pvfDestroyItem;
        CDLinkedList_pvfDestroy_t pvfDestroy;
        CDLinkedListItem_t *pstLastItemRead;
        CDLinkedListItem_t *pstHead;
        CDLinkedListItem_t *pstTail;
        CDLinkedListItem_t *pstReserved2;
}CDLinkedList_t;

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_XHEADER_CIRCULARDLINKEDLIST_STRUCT_H_ */
