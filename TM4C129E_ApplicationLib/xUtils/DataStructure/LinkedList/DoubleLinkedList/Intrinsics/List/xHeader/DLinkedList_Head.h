/**
 *
 * @file DLinkedList_Head.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_DLINKEDLIST_HEAD_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_DLINKEDLIST_HEAD_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

DLinkedList_nERROR DLinkedList__enGetHead(const DLinkedList_t*  const pstList, DLinkedListItem_t** pstHeadArg);
DLinkedList_nERROR DLinkedList__enSetHead(DLinkedList_t* pstList, DLinkedListItem_t* pstHeadArg);
DLinkedList_nERROR DLinkedList__enIsHead(const DLinkedList_t* const pstList, const DLinkedListItem_t* const pstItem, boolean_t* pboStatus);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_DLINKEDLIST_HEAD_H_ */
