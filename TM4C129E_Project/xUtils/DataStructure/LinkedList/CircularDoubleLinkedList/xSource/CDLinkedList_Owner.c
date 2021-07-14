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

CDLinkedList_nSTATUS CDLinkedList__enIsItemOwnerList(const CDLinkedList_TypeDef* pstList, const CDLinkedListItem_TypeDef* const pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedList_TypeDef* pstOwnerListItem = (CDLinkedList_TypeDef*) 0UL;
    pstOwnerListItem = (CDLinkedList_TypeDef*) CDLinkedList__pvGetItemOwnerList(pstItem);
    if((uint32_t) pstOwnerListItem == (uint32_t) pstList )
    {
        enStatus = CDLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}




