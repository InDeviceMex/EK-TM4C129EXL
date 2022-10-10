/**
 *
 * @file CDLinkedList_ItemOwnerList.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Item/xHeader/CDLinkedList_ItemOwnerList.h>

CDLinkedList_nERROR CDLinkedList_Item__enGetOwnerList(const CDLinkedListItem_t* const pstItem, void** pvOwnerListArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pvOwnerListArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *pvOwnerListArg = pstItem->pvOwnerList;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList_Item__enSetOwnerList(CDLinkedListItem_t* pstItem, void* pvOwnerListArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pvOwnerList = pvOwnerListArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
