/**
 *
 * @file CSLinkedList_ItemNextNode.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Item/xHeader/CSLinkedList_ItemNextNode.h>

CSLinkedListItem_TypeDef* CSLinkedList__pstGetItemNextNode(const CSLinkedListItem_TypeDef* const pstItem)
{
    CSLinkedListItem_TypeDef* pstNextNodeReg = (CSLinkedListItem_TypeDef*)0UL;
    pstNextNodeReg = pstItem->pstNextNode;
    return (pstNextNodeReg);
}

void CSLinkedList__vSetItemNextNode(CSLinkedListItem_TypeDef* pstItem, CSLinkedListItem_TypeDef* pstNextNode)
{
    pstItem->pstNextNode = pstNextNode;
}
