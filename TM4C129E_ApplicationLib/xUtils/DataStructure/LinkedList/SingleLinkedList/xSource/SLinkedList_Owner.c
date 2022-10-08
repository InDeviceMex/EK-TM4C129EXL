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

SLinkedList_nERROR SLinkedList__enIsItemOwnerList(const SLinkedList_t* pstList, const SLinkedListItem_t* const pstItem)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    SLinkedList_t* pstOwnerListItem = (SLinkedList_t*) 0UL;
    pstOwnerListItem = (SLinkedList_t*) SLinkedList_Item__pvGetOwnerList(pstItem);
    if((UBase_t) pstOwnerListItem == (UBase_t) pstList )
    {
        enStatus = SLinkedList_enERROR_OK;
    }
    return (enStatus);
}




