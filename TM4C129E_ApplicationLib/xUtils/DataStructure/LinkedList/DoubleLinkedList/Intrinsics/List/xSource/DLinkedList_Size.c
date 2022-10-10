/**
 *
 * @file DLinkedList_Size.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Size.h>


DLinkedList_nERROR DLinkedList__enGetSize(const DLinkedList_t* const pstList, UBase_t* puxSizeArg)
{
    DLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) puxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        *puxSizeArg = pstList->uxSize;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enSetSize(DLinkedList_t*  pstList, UBase_t uxSizeArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->uxSize = uxSizeArg;
        enErrorReg = DLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

DLinkedList_nERROR DLinkedList__enIsEmpty(const DLinkedList_t*  pstList, boolean_t* pboStatus)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pboStatus))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL  == pstList->uxSize)
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
