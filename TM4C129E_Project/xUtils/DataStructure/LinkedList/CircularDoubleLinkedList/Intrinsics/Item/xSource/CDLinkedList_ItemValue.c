/**
 *
 * @file CDLinkedList_ItemValue.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Item/xHeader/CDLinkedList_ItemValue.h>

uint32_t CDLinkedList__u32GetItemValue(const CDLinkedListItem_TypeDef* const pstItem)
{
    uint32_t u32ValueReg = 0UL;
    u32ValueReg = pstItem->u32Value;
    return (u32ValueReg);
}

void CDLinkedList__vSetItemValue(CDLinkedListItem_TypeDef* pstItem, uint32_t u32ValueArg)
{
    pstItem->u32Value = u32ValueArg;
}

