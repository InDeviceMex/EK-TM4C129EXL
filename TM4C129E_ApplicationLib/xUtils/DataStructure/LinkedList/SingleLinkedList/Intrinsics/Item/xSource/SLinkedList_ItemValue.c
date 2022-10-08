/**
 *
 * @file SLinkedList_ItemValue.c
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
 * @verbatim 14 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Item/xHeader/SLinkedList_ItemValue.h>

UBase_t SLinkedList_Item__uxGetValue(const SLinkedListItem_t* const pstItem)
{
    UBase_t uxValueItemReg = 0UL;
    if(0UL != (UBase_t) pstItem)
    {
        uxValueItemReg = pstItem->uxValueItem;
    }
    return (uxValueItemReg);
}

void SLinkedList_Item__vSetValue(SLinkedListItem_t* pstItem, UBase_t uxValueItemArg)
{
    if(0UL != (UBase_t) pstItem)
    {
        pstItem->uxValueItem = uxValueItemArg;
    }
}
