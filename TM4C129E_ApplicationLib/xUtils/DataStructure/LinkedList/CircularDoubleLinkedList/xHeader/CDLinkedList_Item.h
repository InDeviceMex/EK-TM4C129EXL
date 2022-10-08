/**
 *
 * @file CDLinkedList_Item.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ITEM_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ITEM_H_


#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

UBase_t CDLinkedList__uxGetAllItem(const CDLinkedList_t* pstList, const void** pvData, UBase_t uxMaxLength);
UBase_t CDLinkedList__uxGetAllItem_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength);

UBase_t CDLinkedList__uxGetAllItemBackward(const CDLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength);
UBase_t CDLinkedList__uxGetAllItemBackward_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength);

UBase_t CDLinkedList__uxGetNItem(const CDLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength);
UBase_t CDLinkedList__uxGetNItem_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength);

UBase_t CDLinkedList__uxGetNItemBackward(const CDLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength);
UBase_t CDLinkedList__uxGetNItemBackward_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength);

CDLinkedListItem_t*  CDLinkedList__pstGetItemPos(const CDLinkedList_t* pstList, UBase_t uxPosition);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ITEM_H_ */
