/**
 *
 * @file DLinkedList_ElementOwnerList.h
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

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_DLINKEDLIST_ELEMENTOWNERLIST_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_DLINKEDLIST_ELEMENTOWNERLIST_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

void* DLinkedList__pvGetElementOwnerList(const DLinkedListElement_TypeDef* const pstElement);
void DLinkedList__vSetElementOwnerList(DLinkedListElement_TypeDef* pstElement, void* pvOwnerListArg);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_DOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_DLINKEDLIST_ELEMENTOWNERLIST_H_ */
