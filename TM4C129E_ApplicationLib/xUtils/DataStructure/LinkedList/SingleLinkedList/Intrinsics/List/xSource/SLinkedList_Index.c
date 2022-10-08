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

SLinkedListItem_t* SLinkedList__pstGetLastItemRead(const SLinkedList_t*  const pstList)
{
    SLinkedListItem_t* pstLastItemReadReg = (SLinkedListItem_t*) 0U;
    if(0UL != (UBase_t) pstList)
    {
        pstLastItemReadReg = pstList->pstLastItemRead;
    }
    return (pstLastItemReadReg);
}

void SLinkedList__vSetLastItemRead(SLinkedList_t* pstList, SLinkedListItem_t* pstLastItemReadArg)
{
    if(0UL != (UBase_t) pstList)
    {
        pstList->pstLastItemRead = pstLastItemReadArg;
    }
}

SLinkedList_nERROR SLinkedList__enIsLastItemRead(const SLinkedList_t* const pstList, const SLinkedListItem_t* const pstItem)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    SLinkedListItem_t* pstListLastItemRead = (SLinkedListItem_t*)0UL;
    pstListLastItemRead= SLinkedList__pstGetLastItemRead(pstList);
    if ((UBase_t) pstItem == (UBase_t) (pstListLastItemRead))
    {
        enStatus = SLinkedList_enERROR_OK;
    }
    return (enStatus);
}



