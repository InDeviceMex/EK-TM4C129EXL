/**
 *
 * @file CDLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Head.h>

CDLinkedList_nERROR CDLinkedList__enGetHead(const CDLinkedList_t*  const pstList, CDLinkedListItem_t** pstHeadArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstHeadArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstHeadArg = pstList->pstHead;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enSetHead(CDLinkedList_t* pstList, CDLinkedListItem_t* pstHeadArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstHead = pstHeadArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enIsHead(const CDLinkedList_t* const pstList, const CDLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    CDLinkedList_nERROR enErrorReg;
    CDLinkedListItem_t* pstListHead;

    pstListHead = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pboStatus)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetHead(pstList, &pstListHead);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
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
