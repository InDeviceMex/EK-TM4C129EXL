/**
 *
 * @file DLinkedList_Item.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ITEM_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ITEM_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

UBase_t DLinkedList__uxGetAllItem(const DLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength);
UBase_t DLinkedList__uxGetAllItem_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength);

UBase_t DLinkedList__uxGetAllItemBackward(const DLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength);
UBase_t DLinkedList__uxGetAllItemBackward_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength);

UBase_t DLinkedList__uxGetNItem(const DLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength);
UBase_t DLinkedList__uxGetNItem_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength);

UBase_t DLinkedList__uxGetNItemBackward(const DLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength);
UBase_t DLinkedList__uxGetNItemBackward_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength);

DLinkedListItem_t*  DLinkedList__pstGetItemPos(const DLinkedList_t* pstList, UBase_t uxPosition);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ITEM_H_ */
