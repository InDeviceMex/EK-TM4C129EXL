/**
 *
 * @file CSLinkedList_Tail.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Tail.h>

CSLinkedListItem_TypeDef* CSLinkedList__pstGetTail(const CSLinkedList_TypeDef*  const pstList)
{
    CSLinkedListItem_TypeDef* pstTailReg = (CSLinkedListItem_TypeDef*)0U;
    pstTailReg = pstList->pstTail;
    return (pstTailReg);
}

void CSLinkedList__vSetTail(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstTailArg)
{
    pstList->pstTail = pstTailArg;
}

CSLinkedList_nSTATUS CSLinkedList__enIsTail(const CSLinkedList_TypeDef*  const pstList, const CSLinkedListItem_TypeDef* const pstItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstListTail = (CSLinkedListItem_TypeDef*) 0UL;
    pstListTail = CSLinkedList__pstGetTail(pstList);
    if ((uint32_t) pstListTail == (uint32_t) pstItem)
    {
        enStatus = CSLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}
