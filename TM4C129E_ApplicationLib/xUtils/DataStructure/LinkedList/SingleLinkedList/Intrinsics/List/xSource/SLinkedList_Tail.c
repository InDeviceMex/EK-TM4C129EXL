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

SLinkedList_nERROR SLinkedList__enGetTail(const SLinkedList_t*  const pstList, SLinkedListItem_t** pstTailArg)
{
    SLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstTailArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstTailArg = pstList->pstTail;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enSetTail(SLinkedList_t* pstList, SLinkedListItem_t* pstTailArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstTail = pstTailArg;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

SLinkedList_nERROR SLinkedList__enIsTail(const SLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    SLinkedList_nERROR enErrorReg;

    enErrorReg = SLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pboStatus))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if (0UL == (uintptr_t) (pstItem->pstNextItem))
        {
            *pboStatus = TRUE;
        }
        else
        {
            *pboStatus = FALSE;
        }
    }
    return (enErrorReg);
}

