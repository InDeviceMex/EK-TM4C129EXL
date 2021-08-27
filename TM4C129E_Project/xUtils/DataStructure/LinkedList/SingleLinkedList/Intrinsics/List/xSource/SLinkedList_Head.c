/**
 *
 * @file SLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Head.h>

SLinkedListItem_TypeDef* SLinkedList__pstGetHead(const SLinkedList_TypeDef*  const pstList)
{
    SLinkedListItem_TypeDef* pstHeadReg = (SLinkedListItem_TypeDef*)0U;
    if(0UL != (uint32_t) pstList)
    {
        pstHeadReg = pstList->pstHead;
    }
    return (pstHeadReg);
}

void SLinkedList__vSetHead(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstHeadArg)
{
    if(0UL != (uint32_t) pstList)
    {
        pstList->pstHead = pstHeadArg;
    }
}

SLinkedList_nSTATUS SLinkedList__enIsHead(const SLinkedList_TypeDef* const pstList, const SLinkedListItem_TypeDef* const pstItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstListHead = (SLinkedListItem_TypeDef*)0UL;
    pstListHead = SLinkedList__pstGetHead(pstList);
    if ((uint32_t) pstItem == (uint32_t) (pstListHead))
    {
        enStatus = SLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}
