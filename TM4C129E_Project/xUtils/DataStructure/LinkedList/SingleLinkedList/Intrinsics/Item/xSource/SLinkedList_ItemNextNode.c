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

SLinkedListItem_TypeDef* SLinkedList_Item__pstGetNextItem(const SLinkedListItem_TypeDef* const pstItem)
{
    SLinkedListItem_TypeDef* pstNextItemReg = (SLinkedListItem_TypeDef*)0UL;
    if(0UL != (uint32_t) pstItem)
    {
        pstNextItemReg = pstItem->pstNextItem;
    }
    return (pstNextItemReg);
}

void SLinkedList_Item__vSetNextItem(SLinkedListItem_TypeDef* pstItem, SLinkedListItem_TypeDef* pstNextItemArg)
{
    if(0UL != (uint32_t) pstItem)
    {
        pstItem->pstNextItem = pstNextItemArg;
    }
}
