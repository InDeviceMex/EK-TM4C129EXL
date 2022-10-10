/**
 *
 * @file CDLinkedList_ItemNextNode.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Item/xHeader/CDLinkedList_ItemNextNode.h>

CDLinkedList_nERROR CDLinkedList_Item__enGetNextItem(const CDLinkedListItem_t* const pstItem, CDLinkedListItem_t** pstNextItemArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pstNextItemArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstNextItemArg = pstItem->pstNextItem;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList_Item__enSetNextItem(CDLinkedListItem_t* pstItem, CDLinkedListItem_t* pstNextItemArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pstNextItem = pstNextItemArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
