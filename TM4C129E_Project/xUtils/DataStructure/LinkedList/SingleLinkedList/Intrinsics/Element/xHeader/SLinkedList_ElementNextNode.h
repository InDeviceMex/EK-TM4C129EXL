/**
 *
 * @file SLinkedList_ElementNextNode.h
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTNEXTNODE_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTNEXTNODE_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>


SLinkedListElement_TypeDef* SLinkedList__pstGetElementNextNode(const SLinkedListElement_TypeDef* const pstElement);
void SLinkedList__vSetElementNextNode(SLinkedListElement_TypeDef* pstElement, SLinkedListElement_TypeDef* pstNextElement);


#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTNEXTNODE_H_ */
