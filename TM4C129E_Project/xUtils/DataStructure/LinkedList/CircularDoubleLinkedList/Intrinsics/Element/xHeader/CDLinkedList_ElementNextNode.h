/**
 *
 * @file CDLinkedList_ElementNextNode.h
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDLINKEDLIST_ELEMENTNEXTNODE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDLINKEDLIST_ELEMENTNEXTNODE_H_


#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>


CDLinkedListElement_TypeDef* CDLinkedList__pstGetElementNextNode(const CDLinkedListElement_TypeDef* const pstElement);
void CDLinkedList__vSetElementNextNode(CDLinkedListElement_TypeDef* pstElement, CDLinkedListElement_TypeDef* pstNextElement);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDLINKEDLIST_ELEMENTNEXTNODE_H_ */
