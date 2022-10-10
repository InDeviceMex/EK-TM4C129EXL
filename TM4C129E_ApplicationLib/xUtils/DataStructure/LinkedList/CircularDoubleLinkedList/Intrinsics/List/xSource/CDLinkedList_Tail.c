/**
 *
 * @file CDLinkedList_Tail.c
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Tail.h>

CDLinkedList_nERROR CDLinkedList__enGetTail(const CDLinkedList_t*  const pstList, CDLinkedListItem_t** pstTailArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstTailArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstTailArg = pstList->pstTail;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enSetTail(CDLinkedList_t* pstList, CDLinkedListItem_t* pstTailArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstTail = pstTailArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enIsTail(const CDLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    CDLinkedList_nERROR enErrorReg;

    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pstItem) || (0UL == (uintptr_t) pboStatus))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
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


