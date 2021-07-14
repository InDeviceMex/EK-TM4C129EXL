/**
 *
 * @file CDLinkedList_ItemNextNode.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Item/xHeader/CDLinkedList_ItemNextNode.h>

CDLinkedListItem_TypeDef* CDLinkedList_Item__pstGetNextItem(const CDLinkedListItem_TypeDef* const pstItem)
{
    CDLinkedListItem_TypeDef* pstNextItemReg = (CDLinkedListItem_TypeDef*)0UL;
    pstNextItemReg = pstItem->pstNextItem;
    return (pstNextItemReg);
}

void CDLinkedList_Item__vSetNextNode(CDLinkedListItem_TypeDef* pstItem, CDLinkedListItem_TypeDef* pstNextItemArg)
{
    pstItem->pstNextItem = pstNextItemArg;
}
