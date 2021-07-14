/**
 *
 * @file DLinkedList_ItemValue.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 13 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Item/xHeader/DLinkedList_ItemValue.h>

uint32_t DLinkedList_Item__u32GetValue(const DLinkedListItem_TypeDef* const pstItem)
{
    uint32_t u32ValueItemReg = 0UL;
    u32ValueItemReg = pstItem->u32ValueItem;
    return (u32ValueItemReg);
}

void DLinkedList_Item__vSetValue(DLinkedListItem_TypeDef* pstItem, uint32_t u32ValueItemArg)
{
    pstItem->u32ValueItem = u32ValueItemArg;
}
