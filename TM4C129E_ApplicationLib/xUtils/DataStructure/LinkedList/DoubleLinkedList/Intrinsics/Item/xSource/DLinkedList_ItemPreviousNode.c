/**
 *
 * @file DLinkedList_ItemPreviousNode.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Item/xHeader/DLinkedList_ItemPreviousNode.h>

DLinkedList_nERROR DLinkedList_Item__enGetPreviousItem(const DLinkedListItem_t* const pstItem, DLinkedListItem_t** pstPreviousItemArg)
{
    DLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pstPreviousItemArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstPreviousItemArg = pstItem->pstPreviousItem;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList_Item__enSetPreviousItem(DLinkedListItem_t* pstItem, DLinkedListItem_t* pstPreviousItemArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pstPreviousItem = pstPreviousItemArg;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

