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

SLinkedListItem_t* SLinkedList__pstGetTail(const SLinkedList_t*  const pstList)
{
    SLinkedListItem_t* pstTailReg = (SLinkedListItem_t*)0U;
    if(0UL != (UBase_t) pstList)
    {
        pstTailReg = pstList->pstTail;
    }
    return (pstTailReg);
}

void SLinkedList__vSetTail(SLinkedList_t* pstList, SLinkedListItem_t* pstTailArg)
{
    if(0UL != (UBase_t) pstList)
    {
        pstList->pstTail = pstTailArg;
    }
}

SLinkedList_nERROR SLinkedList__enIsTail(const SLinkedListItem_t* const pstItem)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    if ((UBase_t) 0UL == (UBase_t) (pstItem->pstNextItem))
    {
        enStatus = SLinkedList_enERROR_OK;
    }
    return (enStatus);
}

