/**
 *
 * @file DLinkedList_ItemOwnerList.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Item/xHeader/DLinkedList_ItemOwnerList.h>

DLinkedList_nERROR DLinkedList_Item__enGetOwnerList(const DLinkedListItem_t* const pstItem, void** pvOwnerListArg)
{
    DLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pvOwnerListArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        *pvOwnerListArg = pstItem->pvOwnerList;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList_Item__enSetOwnerList(DLinkedListItem_t* pstItem, void* pvOwnerListArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pvOwnerList = pvOwnerListArg;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
