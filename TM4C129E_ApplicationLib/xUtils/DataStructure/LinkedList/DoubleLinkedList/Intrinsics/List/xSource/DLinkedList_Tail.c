/**
 *
 * @file DLinkedList_Tail.c
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Tail.h>

DLinkedList_nERROR DLinkedList__enGetTail(const DLinkedList_t*  const pstList, DLinkedListItem_t** pstTailArg)
{
    DLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstTailArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstTailArg = pstList->pstTail;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enSetTail(DLinkedList_t* pstList, DLinkedListItem_t* pstTailArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstTail = pstTailArg;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

DLinkedList_nERROR DLinkedList__enIsTail(const DLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    DLinkedList_nERROR enErrorReg;

    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pboStatus))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
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
