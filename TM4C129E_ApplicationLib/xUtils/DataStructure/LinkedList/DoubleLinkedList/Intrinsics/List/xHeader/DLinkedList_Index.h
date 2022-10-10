/**
 *
 * @file DLinkedList_Index.h
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
 * @verbatim 14 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_DLINKEDLIST_INDEX_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_DLINKEDLIST_INDEX_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

DLinkedList_nERROR DLinkedList__enGetLastItemRead(const DLinkedList_t*  const pstList, DLinkedListItem_t** pstLastItemReadArg);
DLinkedList_nERROR DLinkedList__enSetLastItemRead(DLinkedList_t* pstList, DLinkedListItem_t* pstLastItemReadArg);
DLinkedList_nERROR DLinkedList__enIsLastItemRead(const DLinkedList_t* const pstList, const DLinkedListItem_t* const pstItem, boolean_t* pboStatus);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_DLINKEDLIST_INDEX_H_ */
