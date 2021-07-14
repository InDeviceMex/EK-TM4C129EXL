/**
 *
 * @file SLinkedList_ItemNextNode.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Item/xHeader/SLinkedList_ItemNextNode.h>

SLinkedListItem_TypeDef* SLinkedList__pstGetItemNextNode(const SLinkedListItem_TypeDef* const pstItem)
{
    SLinkedListItem_TypeDef* pstNextNodeReg = (SLinkedListItem_TypeDef*)0UL;
    pstNextNodeReg = pstItem->pstNextNode;
    return (pstNextNodeReg);
}

void SLinkedList__vSetItemNextNode(SLinkedListItem_TypeDef* pstItem, SLinkedListItem_TypeDef* pstNextNode)
{
    pstItem->pstNextNode = pstNextNode;
}
