/**
 *
 * @file SLinkedList_ElementOwnerList.h
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

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTOWNERLIST_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTOWNERLIST_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

void* SLinkedList__pvGetElementOwnerList(const SLinkedListElement_TypeDef* const pstElement);
void SLinkedList__vSetElementOwnerList(SLinkedListElement_TypeDef* pstElement, void* pvOwnerListArg);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTOWNERLIST_H_ */
