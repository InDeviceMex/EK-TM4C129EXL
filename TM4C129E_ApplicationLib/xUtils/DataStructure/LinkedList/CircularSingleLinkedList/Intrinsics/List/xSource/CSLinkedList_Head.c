/**
 *
 * @file CSLinkedList_Head.c
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Head.h>

CSLinkedListItem_t* CSLinkedList__pstGetHead(const CSLinkedList_t*  const pstList)
{
    CSLinkedListItem_t* pstHeadReg = (CSLinkedListItem_t*) 0U;
    if(0UL != (UBase_t) pstList)
    {
        pstHeadReg = pstList->pstHead;
    }
    return (pstHeadReg);
}

void CSLinkedList__vSetHead(CSLinkedList_t* pstList, CSLinkedListItem_t* pstHeadArg)
{
    if(0UL != (UBase_t) pstList)
    {
        pstList->pstHead = pstHeadArg;
    }
}

CSLinkedList_nERROR CSLinkedList__enIsHead(const CSLinkedList_t* const pstList, const CSLinkedListItem_t* const pstItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstListHead = (CSLinkedListItem_t*)0UL;
    pstListHead = CSLinkedList__pstGetHead(pstList);
    if ((UBase_t) pstItem == (UBase_t) (pstListHead))
    {
        enStatus = CSLinkedList_enERROR_OK;
    }
    return (enStatus);
}
