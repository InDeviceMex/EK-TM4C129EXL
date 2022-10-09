/**
 *
 * @file SLinkedList_ItemNextNode.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Item/xHeader/SLinkedList_ItemNextNode.h>

SLinkedList_nERROR SLinkedList_Item__enGetNextItem(const SLinkedListItem_t* const pstItem, SLinkedListItem_t** pstNextItemArg)
{
    SLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pstNextItemArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstNextItemArg = pstItem->pstNextItem;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList_Item__enSetNextItem(SLinkedListItem_t* pstItem, SLinkedListItem_t* pstNextItemArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstItem)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        pstItem->pstNextItem = pstNextItemArg;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}
