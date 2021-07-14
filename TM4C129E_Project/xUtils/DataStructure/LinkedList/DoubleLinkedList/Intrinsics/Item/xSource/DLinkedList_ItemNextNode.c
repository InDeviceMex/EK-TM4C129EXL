/**
 *
 * @file DLinkedList_ItemNextNode.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Item/xHeader/DLinkedList_ItemNextNode.h>

DLinkedListItem_TypeDef* DLinkedList__pstGetItemNextNode(const DLinkedListItem_TypeDef* const pstItem)
{
    DLinkedListItem_TypeDef* pstNextNodeReg = (DLinkedListItem_TypeDef*)0UL;
    pstNextNodeReg = pstItem->pstNextNode;
    return (pstNextNodeReg);
}

void DLinkedList__vSetItemNextNode(DLinkedListItem_TypeDef* pstItem, DLinkedListItem_TypeDef* pstNextNode)
{
    pstItem->pstNextNode = pstNextNode;
}
