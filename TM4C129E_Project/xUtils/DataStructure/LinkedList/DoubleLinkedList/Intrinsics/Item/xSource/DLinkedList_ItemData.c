/**
 *
 * @file DLinkedList_ItemData.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Item/xHeader/DLinkedList_ItemData.h>

void* DLinkedList_Item__pvGetData(const DLinkedListItem_TypeDef* const pstItem)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = pstItem->pvDataContainer;
    return (pvDataReg);
}

void DLinkedList_Item__vSetData(DLinkedListItem_TypeDef* pstItem, void* pvDataArg)
{
    pstItem->pvDataContainer = pvDataArg;
}
