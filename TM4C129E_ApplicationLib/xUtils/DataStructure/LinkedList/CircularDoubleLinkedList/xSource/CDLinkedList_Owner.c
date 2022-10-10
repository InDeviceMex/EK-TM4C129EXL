/**
 *
 * @file CDLinkedList_Owner.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Owner.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/CDLinkedList_Intrinsics.h>

CDLinkedList_nERROR CDLinkedList__enIsItemOwnerList(const CDLinkedList_t* pstList, const CDLinkedListItem_t* const pstItem, boolean_t* boStatus)
{
    CDLinkedList_t* pstOwnerListItem;
    CDLinkedList_nERROR enErrorReg;

    pstOwnerListItem = (CDLinkedList_t*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstOwnerListItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
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



