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

CDLinkedList_nERROR CDLinkedList_Item__enGetValue(const CDLinkedListItem_t* const pstItem, UBase_t* puxValueItemArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) puxValueItemArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *puxValueItemArg = pstItem->uxValueItem;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList_Item__enSetValue(CDLinkedListItem_t* pstItem, UBase_t uxValueItemArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->uxValueItem = uxValueItemArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
