/**
 *
 * @file CDLinkedList_ItemData.c
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

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Item/xHeader/CDLinkedList_ItemData.h>

void* CDLinkedList__pvGetItemData(const CDLinkedListItem_TypeDef* const pstItem)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = pstItem->pvDataContainer;
    return (pvDataReg);
}

void CDLinkedList__vSetItemData(CDLinkedListItem_TypeDef* pstItem, void* pvDataArg)
{
    pstItem->pvDataContainer = pvDataArg;
}
