/**
 *
 * @file CSLinkedList_ElementOwnerList.h
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

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CSLINKEDLIST_ELEMENTOWNERLIST_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CSLINKEDLIST_ELEMENTOWNERLIST_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

void* CSLinkedList__pvGetElementOwnerList(const CSLinkedListElement_TypeDef* const pstElement);
void CSLinkedList__vSetElementOwnerList(CSLinkedListElement_TypeDef* pstElement, void* pvOwnerListArg);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CSLINKEDLIST_ELEMENTOWNERLIST_H_ */
