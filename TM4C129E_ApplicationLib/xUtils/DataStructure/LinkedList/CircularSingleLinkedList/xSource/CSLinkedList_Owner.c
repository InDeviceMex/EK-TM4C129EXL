/**
 *
 * @file CSLinkedList_Owner.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Owner.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>

CSLinkedList_nERROR CSLinkedList__enIsItemOwnerList(const CSLinkedList_t* pstList, const CSLinkedListItem_t* const pstItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedList_t* pstOwnerListItem = (CSLinkedList_t*) 0UL;
    pstOwnerListItem = (CSLinkedList_t*) CSLinkedList_Item__pvGetOwnerList(pstItem);
    if((UBase_t) pstOwnerListItem == (UBase_t) pstList )
    {
        enStatus = CSLinkedList_enERROR_OK;
    }
    return (enStatus);
}




