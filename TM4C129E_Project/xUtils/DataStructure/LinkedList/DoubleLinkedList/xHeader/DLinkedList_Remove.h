/**
 *
 * @file DLinkedList_Remove.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_REMOVE_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

 DLinkedList_nSTATUS DLinkedList__enRemove(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstElement, void** pvData);
 DLinkedList_nSTATUS DLinkedList__enRemoveNext(DLinkedList_TypeDef* pstList, const DLinkedListElement_TypeDef* pstElement, void** pvData);
 DLinkedList_nSTATUS DLinkedList__enRemovePrevious(DLinkedList_TypeDef* pstList, const DLinkedListElement_TypeDef* pstElement, void** pvData);
 DLinkedList_nSTATUS DLinkedList__enRemoveBegin(DLinkedList_TypeDef* pstList, void** pvData);
 DLinkedList_nSTATUS DLinkedList__enRemoveEnd(DLinkedList_TypeDef* pstList, void** pvData);
 DLinkedList_nSTATUS  DLinkedList__enRemovePos(DLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData);





#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_REMOVE_H_ */
