/**
 *
 * @file CSLinkedList_ElementNextNode.h
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSLINKEDLIST_ELEMENTNEXTNODE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSLINKEDLIST_ELEMENTNEXTNODE_H_


#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>


CSLinkedListElement_TypeDef* CSLinkedList__pstGetElementNextNode(const CSLinkedListElement_TypeDef* const pstElement);
void CSLinkedList__vSetElementNextNode(CSLinkedListElement_TypeDef* pstElement, CSLinkedListElement_TypeDef* pstNextElement);




#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSLINKEDLIST_ELEMENTNEXTNODE_H_ */
