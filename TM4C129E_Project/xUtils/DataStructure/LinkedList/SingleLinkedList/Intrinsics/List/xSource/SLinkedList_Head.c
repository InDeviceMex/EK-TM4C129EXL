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
#include <stdlib.h>

SLinkedListElement_TypeDef* SLinkedList__pstGetHead(const SLinkedList_TypeDef*  const pstList)
{
    SLinkedListElement_TypeDef* pstHeadReg = (SLinkedListElement_TypeDef*)0U;
    pstHeadReg = pstList->pstHead;
    return pstHeadReg;
}

void SLinkedList__vSetHead(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstHeadArg)
{
    pstList->pstHead = pstHeadArg;
}

SLinkedList_nSTATUS SLinkedList__enIsHead(const SLinkedList_TypeDef* const pstList, const SLinkedListElement_TypeDef* const pstElement)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstListHead = (SLinkedListElement_TypeDef*)0UL;
    pstListHead = SLinkedList__pstGetHead(pstList);
    if ((uint32_t) pstElement == (uint32_t) (pstListHead))
    {
        enStatus = SLinkedList_enSTATUS_OK;
    }
    return enStatus;
}
