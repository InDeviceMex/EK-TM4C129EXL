/**
 *
 * @file CDLinkedList_ElementPreviousNode.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/xHeader/CDLinkedList_ElementPreviousNode.h>

CDLinkedListElement_TypeDef* CDLinkedList__pstGetElementPreviousNode(const CDLinkedListElement_TypeDef* const pstElement)
{
    CDLinkedListElement_TypeDef* pstPreviousElementReg = (CDLinkedListElement_TypeDef*)0UL;
    pstPreviousElementReg = pstElement->pstPreviousNode;

    return pstPreviousElementReg;
}

void CDLinkedList__vSetElementPreviousNode(CDLinkedListElement_TypeDef* pstElement, CDLinkedListElement_TypeDef* pstPreviousElement)
{
    pstElement->pstPreviousNode = pstPreviousElement;
}




