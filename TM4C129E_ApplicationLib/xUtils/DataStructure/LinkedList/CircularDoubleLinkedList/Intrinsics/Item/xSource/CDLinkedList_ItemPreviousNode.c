/**
 *
 * @file CDLinkedList_ItemPreviousNode.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Item/xHeader/CDLinkedList_ItemPreviousNode.h>

CDLinkedList_nERROR CDLinkedList_Item__enGetPreviousItem(const CDLinkedListItem_t* const pstItem, CDLinkedListItem_t** pstPreviousItemArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pstPreviousItemArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstPreviousItemArg = pstItem->pstPreviousItem;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList_Item__enSetPreviousItem(CDLinkedListItem_t* pstItem, CDLinkedListItem_t* pstPreviousItemArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pstPreviousItem = pstPreviousItemArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
