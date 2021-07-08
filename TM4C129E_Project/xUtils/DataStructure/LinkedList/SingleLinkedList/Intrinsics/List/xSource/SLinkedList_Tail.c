/**
 *
 * @file SLinkedList_Tail.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Tail.h>
#include <stdlib.h>

SLinkedListElement_TypeDef* SLinkedList__pstGetTail(const SLinkedList_TypeDef*  const pstList)
{
    SLinkedListElement_TypeDef* pstTailReg = (SLinkedListElement_TypeDef*)0U;
    pstTailReg = pstList->pstTail;
    return pstTailReg;
}

void SLinkedList__vSetTail(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstTailArg)
{
    pstList->pstTail = pstTailArg;
}

SLinkedList_nSTATUS SLinkedList__enIsTail(const SLinkedListElement_TypeDef* const pstElement)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    if ((uint32_t) 0UL == (uint32_t) (pstElement->pstNextNode))
    {
        enStatus = SLinkedList_enSTATUS_OK;
    }
    return enStatus;
}

