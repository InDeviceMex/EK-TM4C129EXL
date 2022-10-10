/**
 *
 * @file DLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Head.h>

DLinkedList_nERROR DLinkedList__enGetHead(const DLinkedList_t*  const pstList, DLinkedListItem_t** pstHeadArg)
{
    DLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstHeadArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstHeadArg = pstList->pstHead;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enSetHead(DLinkedList_t* pstList, DLinkedListItem_t* pstHeadArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstHead = pstHeadArg;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

DLinkedList_nERROR DLinkedList__enIsHead(const DLinkedList_t* const pstList, const DLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    DLinkedList_nERROR enErrorReg;
    DLinkedListItem_t* pstListHead;

    pstListHead = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pboStatus)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetHead(pstList, &pstListHead);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if ((uintptr_t) pstItem == (uintptr_t) (pstListHead))
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
