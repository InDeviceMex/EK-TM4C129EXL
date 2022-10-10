/**
 *
 * @file DLinkedList_ItemNextNode.c
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Item/xHeader/DLinkedList_ItemNextNode.h>

DLinkedList_nERROR DLinkedList_Item__enGetNextItem(const DLinkedListItem_t* const pstItem, DLinkedListItem_t** pstNextItemArg)
{
    DLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pstNextItemArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstNextItemArg = pstItem->pstNextItem;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList_Item__enSetNextItem(DLinkedListItem_t* pstItem, DLinkedListItem_t* pstNextItemArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pstNextItem = pstNextItemArg;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

