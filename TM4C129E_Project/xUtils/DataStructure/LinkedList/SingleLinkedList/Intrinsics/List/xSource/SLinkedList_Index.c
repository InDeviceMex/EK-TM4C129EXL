/**
 *
 * @file SLinkedList_Index.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Index.h>

SLinkedListItem_TypeDef* SLinkedList__pstGetLastItemRead(const SLinkedList_TypeDef*  const pstList)
{
    SLinkedListItem_TypeDef* pstLastItemReadReg = (SLinkedListItem_TypeDef*) 0U;
    pstLastItemReadReg = pstList->pstLastItemRead;
    return (pstLastItemReadReg);
}

void SLinkedList__vSetLastItemRead(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstLastItemReadArg)
{
    pstList->pstLastItemRead = pstLastItemReadArg;
}

SLinkedList_nSTATUS SLinkedList__enIsLastItemRead(const SLinkedList_TypeDef* const pstList, const SLinkedListItem_TypeDef* const pstItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstListLastItemRead = (SLinkedListItem_TypeDef*)0UL;
    pstListLastItemRead= SLinkedList__pstGetLastItemRead(pstList);
    if ((uint32_t) pstItem == (uint32_t) (pstListLastItemRead))
    {
        enStatus = SLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}



