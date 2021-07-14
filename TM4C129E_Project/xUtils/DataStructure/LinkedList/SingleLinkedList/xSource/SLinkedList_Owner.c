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

SLinkedList_nSTATUS SLinkedList__enIsElementOwnerList(const SLinkedList_TypeDef* pstList, const SLinkedListElement_TypeDef* const pstElement)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedList_TypeDef* pstOwnerListElement = (SLinkedList_TypeDef*) 0UL;
    pstOwnerListElement = (SLinkedList_TypeDef*) SLinkedList__pvGetElementOwnerList(pstElement);
    if((uint32_t) pstOwnerListElement == (uint32_t) pstList )
    {
        enStatus = SLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}




