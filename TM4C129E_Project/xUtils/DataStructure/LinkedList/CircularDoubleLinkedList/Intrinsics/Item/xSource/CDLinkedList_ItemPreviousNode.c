/**
 *
 * @file CDLinkedList_ItemPreviousNode.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Item/xHeader/CDLinkedList_ItemPreviousNode.h>

CDLinkedListItem_TypeDef* CDLinkedList__pstGetItemPreviousNode(const CDLinkedListItem_TypeDef* const pstItem)
{
    CDLinkedListItem_TypeDef* pstPreviousNodeReg = (CDLinkedListItem_TypeDef*)0UL;
    pstPreviousNodeReg = pstItem->pstPreviousNode;
    return (pstPreviousNodeReg);
}

void CDLinkedList__vSetItemPreviousNode(CDLinkedListItem_TypeDef* pstItem, CDLinkedListItem_TypeDef* pstPreviousNode)
{
    pstItem->pstPreviousNode = pstPreviousNode;
}
