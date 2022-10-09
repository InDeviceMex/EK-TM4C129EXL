/**
 *
 * @file SLinkedList_ItemOwnerList.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Item/xHeader/SLinkedList_ItemOwnerList.h>

SLinkedList_nERROR SLinkedList_Item__enGetOwnerList(const SLinkedListItem_t* const pstItem, void** pvOwnerListArg)
{
    SLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pvOwnerListArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        *pvOwnerListArg = pstItem->pvOwnerList;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList_Item__enSetOwnerList(SLinkedListItem_t* pstItem, void* pvOwnerListArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pvOwnerList = pvOwnerListArg;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
