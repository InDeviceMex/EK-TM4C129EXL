/**
 *
 * @file SLinkedList_Index.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Index.h>

SLinkedList_nERROR SLinkedList__enGetLastItemRead(const SLinkedList_t*  const pstList, SLinkedListItem_t** pstLastItemReadArg)
{
    SLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstLastItemReadArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstLastItemReadArg = pstList->pstLastItemRead;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enSetLastItemRead(SLinkedList_t* pstList, SLinkedListItem_t* pstLastItemReadArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstLastItemRead = pstLastItemReadArg;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}



SLinkedList_nERROR SLinkedList__enIsLastItemRead(const SLinkedList_t* const pstList, const SLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    SLinkedList_nERROR enErrorReg;
    SLinkedListItem_t* pstListLastItemRead;

    pstListLastItemRead = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pboStatus)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetLastItemRead(pstList, &pstListLastItemRead);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if ((uintptr_t) pstItem == (uintptr_t) (pstListLastItemRead))
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
