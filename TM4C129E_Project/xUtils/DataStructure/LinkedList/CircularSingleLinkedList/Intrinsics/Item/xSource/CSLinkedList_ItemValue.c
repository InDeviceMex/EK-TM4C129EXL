/**
 *
 * @file CSLinkedList_ItemValue.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Item/xHeader/CSLinkedList_ItemValue.h>

uint32_t CSLinkedList__u32GetItemValue(const CSLinkedListItem_TypeDef* const pstItem)
{
    uint32_t u32ValueReg = 0UL;
    u32ValueReg = pstItem->u32Value;
    return (u32ValueReg);
}

void CSLinkedList__vSetItemValue(CSLinkedListItem_TypeDef* pstItem, uint32_t u32ValueArg)
{
    pstItem->u32Value = u32ValueArg;
}
