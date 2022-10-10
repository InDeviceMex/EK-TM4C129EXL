/**
 *
 * @file CDLinkedList_ItemData.c
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Item/xHeader/CDLinkedList_ItemData.h>

CDLinkedList_nERROR CDLinkedList_Item__enGetData(const CDLinkedListItem_t* const pstItem, void** pvDataArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pvDataArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *pvDataArg = pstItem->pvDataContainer;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList_Item__enSetData(CDLinkedListItem_t* pstItem, void* pvDataArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pvDataContainer = pvDataArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }

    return(enErrorReg);
}
