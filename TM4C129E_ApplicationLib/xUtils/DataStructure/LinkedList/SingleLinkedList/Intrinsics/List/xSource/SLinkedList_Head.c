/**
 *
 * @file SLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Head.h>

SLinkedList_nERROR SLinkedList__enGetHead(const SLinkedList_t*  const pstList, SLinkedListItem_t** pstHeadArg)
{
    SLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstHeadArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstHeadArg = pstList->pstHead;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enSetHead(SLinkedList_t* pstList, SLinkedListItem_t* pstHeadArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstHead = pstHeadArg;
        enErrorReg = SLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

SLinkedList_nERROR SLinkedList__enIsHead(const SLinkedList_t* const pstList, const SLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    SLinkedList_nERROR enErrorReg;
    SLinkedListItem_t* pstListHead;

    pstListHead = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pboStatus)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetHead(pstList, &pstListHead);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
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
