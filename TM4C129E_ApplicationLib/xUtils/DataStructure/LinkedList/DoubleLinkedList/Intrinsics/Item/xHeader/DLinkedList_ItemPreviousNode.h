/**
 *
 * @file DLinkedList_ItemPreviousNode.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_DLINKEDLIST_ITEMPREVIOUSITEM_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_DLINKEDLIST_ITEMPREVIOUSITEM_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

DLinkedList_nERROR DLinkedList_Item__enGetPreviousItem(const DLinkedListItem_t* const pstItem, DLinkedListItem_t** pstPreviousItemArg);
DLinkedList_nERROR DLinkedList_Item__enSetPreviousItem(DLinkedListItem_t* pstItem, DLinkedListItem_t* pstPreviousItemArg);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_DLINKEDLIST_ITEMPREVIOUSITEM_H_ */
