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

DLinkedList_nERROR DLinkedList_Item__enGetValue(const DLinkedListItem_t* const pstItem, UBase_t* puxValueItemArg)
{
    DLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) puxValueItemArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        *puxValueItemArg = pstItem->uxValueItem;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList_Item__enSetValue(DLinkedListItem_t* pstItem, UBase_t uxValueItemArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->uxValueItem = uxValueItemArg;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
