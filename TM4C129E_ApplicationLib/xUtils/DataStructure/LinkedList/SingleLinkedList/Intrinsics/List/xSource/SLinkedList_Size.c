/**
 *
 * @file SLinkedList_Size.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Size.h>

SLinkedList_nERROR SLinkedList__enGetSize(const SLinkedList_t* const pstList, UBase_t* puxSizeArg)
{
    SLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) puxSizeArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        *puxSizeArg = pstList->uxSize;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enSetSize(SLinkedList_t*  pstList, UBase_t uxSizeArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->uxSize = uxSizeArg;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

SLinkedList_nERROR SLinkedList__enIsEmpty(const SLinkedList_t*  pstList, boolean_t* pboStatus)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pboStatus))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
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

