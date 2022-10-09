/**
 *
 * @file CSLinkedList_Index.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Index.h>

CSLinkedListItem_t* CSLinkedList__pstGetLastItemRead(const CSLinkedList_t*  const pstList)
{
    CSLinkedListItem_t* pstLastItemReadReg = (CSLinkedListItem_t*) 0U;
    if(0UL != (UBase_t) pstList)
    {
        pstLastItemReadReg = pstList->pstLastItemRead;
    }
    return (pstLastItemReadReg);
}

void CSLinkedList__vSetLastItemRead(CSLinkedList_t* pstList, CSLinkedListItem_t* pstLastItemReadArg)
{
    if(0UL != (UBase_t) pstList)
    {
        pstList->pstLastItemRead = pstLastItemReadArg;
    }
}

CSLinkedList_nERROR CSLinkedList__enIsLastItemRead(const CSLinkedList_t* const pstList, const CSLinkedListItem_t* const pstItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstListLastItemRead = (CSLinkedListItem_t*)0UL;
    pstListLastItemRead= CSLinkedList__pstGetLastItemRead(pstList);
    if ((UBase_t) pstItem == (UBase_t) (pstListLastItemRead))
    {
        enStatus = CSLinkedList_enERROR_OK;
    }
    return (enStatus);
}



