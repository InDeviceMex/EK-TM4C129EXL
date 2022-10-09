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

SLinkedList_nERROR SLinkedList_Item__enGetValue(const SLinkedListItem_t* const pstItem, UBase_t* puxValueItemArg)
{
    SLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) puxValueItemArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        *puxValueItemArg = pstItem->uxValueItem;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList_Item__enSetValue(SLinkedListItem_t* pstItem, UBase_t uxValueItemArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->uxValueItem = uxValueItemArg;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
