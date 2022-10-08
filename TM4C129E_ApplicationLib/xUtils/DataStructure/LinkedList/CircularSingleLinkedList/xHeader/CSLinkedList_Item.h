/**
 *
 * @file CSLinkedList_Item.h
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ITEM_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ITEM_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

CSLinkedListItem_t*  CSLinkedList__pstGetItemPos(const CSLinkedList_t* pstList, UBase_t uxPosition);

UBase_t CSLinkedList__uxGetAllItem(const CSLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength);
UBase_t CSLinkedList__uxGetAllItem_Value(const CSLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength);

UBase_t CSLinkedList__uxGetNItem(const CSLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength);
UBase_t CSLinkedList__uxGetNItem_Value(const CSLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ITEM_H_ */
