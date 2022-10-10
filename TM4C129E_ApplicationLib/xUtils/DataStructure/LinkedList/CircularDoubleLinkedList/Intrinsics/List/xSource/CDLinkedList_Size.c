/**
 *
 * @file CDLinkedList_Size.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Size.h>


CDLinkedList_nERROR CDLinkedList__enGetSize(const CDLinkedList_t* const pstList, UBase_t* puxSizeArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) puxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *puxSizeArg = pstList->uxSize;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enSetSize(CDLinkedList_t*  pstList, UBase_t uxSizeArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->uxSize = uxSizeArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enIsEmpty(const CDLinkedList_t*  pstList, boolean_t* pboStatus)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pboStatus))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
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
