/**
 *
 * @file CDLinkedList_Index.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Index.h>


CDLinkedList_nERROR CDLinkedList__enGetLastItemRead(const CDLinkedList_t*  const pstList, CDLinkedListItem_t** pstLastItemReadArg)
{
    CDLinkedList_nERROR enErrorReg;

    if((0UL == (uintptr_t) pstList) || (0UL == (uintptr_t) pstLastItemReadArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        *pstLastItemReadArg = pstList->pstLastItemRead;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enSetLastItemRead(CDLinkedList_t* pstList, CDLinkedListItem_t* pstLastItemReadArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        pstList->pstLastItemRead = pstLastItemReadArg;
        enErrorReg = CDLinkedList_enERROR_OK;
    }
    return(enErrorReg);
}



CDLinkedList_nERROR CDLinkedList__enIsLastItemRead(const CDLinkedList_t* const pstList, const CDLinkedListItem_t* const pstItem, boolean_t* pboStatus)
{
    CDLinkedList_nERROR enErrorReg;
    CDLinkedListItem_t* pstListLastItemRead;

    pstListLastItemRead = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pboStatus)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstListLastItemRead);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
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
