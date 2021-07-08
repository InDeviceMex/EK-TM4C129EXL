/**
 *
 * @file SLinkedList_ElementNextNode.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/xHeader/SLinkedList_ElementNextNode.h>

SLinkedListElement_TypeDef* SLinkedList__pstGetElementNextNode(const SLinkedListElement_TypeDef* const pstElement)
{
    SLinkedListElement_TypeDef* pstNextElementReg = (SLinkedListElement_TypeDef*)0UL;
    pstNextElementReg = pstElement->pstNextNode;

    return pstNextElementReg;
}

void SLinkedList__vSetElementNextNode(SLinkedListElement_TypeDef* pstElement, SLinkedListElement_TypeDef* pstNextElement)
{
    pstElement->pstNextNode = pstNextElement;
}


