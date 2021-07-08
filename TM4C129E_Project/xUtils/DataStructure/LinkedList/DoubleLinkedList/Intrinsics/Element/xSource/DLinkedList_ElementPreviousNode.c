/**
 *
 * @file DLinkedList_ElementPreviousNode.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/xHeader/DLinkedList_ElementPreviousNode.h>

DLinkedListElement_TypeDef* DLinkedList__pstGetElementPreviousNode(const DLinkedListElement_TypeDef* const pstElement)
{
    DLinkedListElement_TypeDef* pstPreviousElementReg = (DLinkedListElement_TypeDef*)0UL;
    pstPreviousElementReg = pstElement->pstPreviousNode;

    return pstPreviousElementReg;
}

void DLinkedList__vSetElementPreviousNode(DLinkedListElement_TypeDef* pstElement, DLinkedListElement_TypeDef* pstPreviousElement)
{
    pstElement->pstPreviousNode = pstPreviousElement;
}




