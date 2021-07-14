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

CSLinkedListItem_TypeDef* CSLinkedList__pstGetLastItemRead(const CSLinkedList_TypeDef*  const pstList)
{
    CSLinkedListItem_TypeDef* pstLastItemReadReg = (CSLinkedListItem_TypeDef*) 0U;
    if(0UL != (uint32_t) pstList)
    {
        pstLastItemReadReg = pstList->pstLastItemRead;
    }
    return (pstLastItemReadReg);
}

void CSLinkedList__vSetLastItemRead(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstLastItemReadArg)
{
    if(0UL != (uint32_t) pstList)
    {
        pstList->pstLastItemRead = pstLastItemReadArg;
    }
}

CSLinkedList_nSTATUS CSLinkedList__enIsLastItemRead(const CSLinkedList_TypeDef* const pstList, const CSLinkedListItem_TypeDef* const pstItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstListLastItemRead = (CSLinkedListItem_TypeDef*)0UL;
    pstListLastItemRead= CSLinkedList__pstGetLastItemRead(pstList);
    if ((uint32_t) pstItem == (uint32_t) (pstListLastItemRead))
    {
        enStatus = CSLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}



