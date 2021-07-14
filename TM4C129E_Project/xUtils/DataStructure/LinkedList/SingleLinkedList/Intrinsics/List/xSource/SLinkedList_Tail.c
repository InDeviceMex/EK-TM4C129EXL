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

SLinkedListItem_TypeDef* SLinkedList__pstGetTail(const SLinkedList_TypeDef*  const pstList)
{
    SLinkedListItem_TypeDef* pstTailReg = (SLinkedListItem_TypeDef*)0U;
    pstTailReg = pstList->pstTail;
    return pstTailReg;
}

void SLinkedList__vSetTail(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstTailArg)
{
    pstList->pstTail = pstTailArg;
}

SLinkedList_nSTATUS SLinkedList__enIsTail(const SLinkedListItem_TypeDef* const pstItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    if ((uint32_t) 0UL == (uint32_t) (pstItem->pstNextItem))
    {
        enStatus = SLinkedList_enSTATUS_OK;
    }
    return enStatus;
}

