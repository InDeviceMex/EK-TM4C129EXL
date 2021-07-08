/**
 *
 * @file DLinkedList_ElementNextNode.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/xHeader/DLinkedList_ElementNextNode.h>

DLinkedListElement_TypeDef* DLinkedList__pstGetElementNextNode(const DLinkedListElement_TypeDef* const pstElement)
{
    DLinkedListElement_TypeDef* pstNextElementReg = (DLinkedListElement_TypeDef*)0UL;
    pstNextElementReg = pstElement->pstNextNode;

    return pstNextElementReg;
}

void DLinkedList__vSetElementNextNode(DLinkedListElement_TypeDef* pstElement, DLinkedListElement_TypeDef* pstNextElement)
{
    pstElement->pstNextNode = pstNextElement;
}



