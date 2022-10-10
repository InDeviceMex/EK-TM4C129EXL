/**
 *
 * @file DLinkedList_Owner.c
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
 * @verbatim 14 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Owner.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

DLinkedList_nERROR DLinkedList__enIsItemOwnerList(const DLinkedList_t* pstList, const DLinkedListItem_t* const pstItem, boolean_t* boStatus)
{
    DLinkedList_t* pstOwnerListItem;
    DLinkedList_nERROR enErrorReg;

    pstOwnerListItem = (DLinkedList_t*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstOwnerListItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((uintptr_t) pstOwnerListItem == (uintptr_t) pstList)
        {
            *boStatus = TRUE;
        }
        else
        {
            *boStatus = FALSE;
        }
    }
    return (enErrorReg);
}

