/**
 *
 * @file SLinkedList_ItemData.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Item/xHeader/SLinkedList_ItemData.h>

SLinkedList_nERROR SLinkedList_Item__enGetData(const SLinkedListItem_t* const pstItem, void** pvDataArg)
{
    SLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pvDataArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        *pvDataArg = pstItem->pvDataContainer;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList_Item__enSetData(SLinkedListItem_t* pstItem, void* pvDataArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pvDataContainer = pvDataArg;
        enErrorReg = SLinkedList_enERROR_OK;
    }

    return(enErrorReg);
}
