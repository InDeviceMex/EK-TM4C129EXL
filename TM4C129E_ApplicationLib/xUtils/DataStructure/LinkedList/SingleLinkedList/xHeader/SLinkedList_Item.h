/**
 *
 * @file SLinkedList_Item.h
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ITEM_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ITEM_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

UBase_t SLinkedList__uxGetNItem(const SLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength);
UBase_t SLinkedList__uxGetAllItem(const SLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength);

UBase_t SLinkedList__uxGetAllItem_Value(const SLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength);
UBase_t SLinkedList__uxGetNItem_Value(const SLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength);

SLinkedListItem_t*  SLinkedList__pstGetItemPos(const SLinkedList_t* pstList, UBase_t uxPosition);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ITEM_H_ */
