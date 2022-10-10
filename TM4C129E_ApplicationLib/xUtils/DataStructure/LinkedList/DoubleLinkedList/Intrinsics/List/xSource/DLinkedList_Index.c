/**
 *
 * @file DLinkedList_Index.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Index.h>


DLinkedList_nERROR DLinkedList__enGetLastItemRead(const DLinkedList_t*  const pstList, DLinkedListItem_t** pstLastItemReadArg)
{
    DLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstLastItemReadArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstLastItemReadArg = pstList->pstLastItemRead;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enSetLastItemRead(DLinkedList_t* pstList, DLinkedListItem_t* pstLastItemReadArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstLastItemRead = pstLastItemReadArg;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}



DLinkedList_nERROR DLinkedList__enIsLastItemRead(const DLinkedList_t* const pstList, const DLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    DLinkedList_nERROR enErrorReg;
    DLinkedListItem_t* pstListLastItemRead;

    pstListLastItemRead = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pboStatus)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstListLastItemRead);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if ((uintptr_t) pstItem == (uintptr_t) pstListLastItemRead)
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
