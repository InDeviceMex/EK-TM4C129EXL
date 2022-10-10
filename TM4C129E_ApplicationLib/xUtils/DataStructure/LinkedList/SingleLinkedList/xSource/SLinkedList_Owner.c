/**
 *
 * @file SLinkedList_Owner.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Owner.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

SLinkedList_nERROR SLinkedList__enIsItemOwnerList(const SLinkedList_t* pstList, const SLinkedListItem_t* const pstItem, boolean_t* boStatus)
{
    SLinkedList_t* pstOwnerListItem;
    SLinkedList_nERROR enErrorReg;

    pstOwnerListItem = (SLinkedList_t*) 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstOwnerListItem);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
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
