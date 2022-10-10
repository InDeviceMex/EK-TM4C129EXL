/**
 *
 * @file DLinkedList_ItemValue.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 13 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_DLINKEDLIST_ITEMVALUE_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_DLINKEDLIST_ITEMVALUE_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

DLinkedList_nERROR DLinkedList_Item__enGetValue(const DLinkedListItem_t* const pstItem, UBase_t* puxValueItemArg);
DLinkedList_nERROR DLinkedList_Item__enSetValue(DLinkedListItem_t* pstItem, UBase_t uxValueItemArg);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_DLINKEDLIST_ITEMVALUE_H_ */
