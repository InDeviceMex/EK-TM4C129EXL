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
#include <stdlib.h>

CSLinkedListElement_TypeDef* CSLinkedList__pstGetHead(const CSLinkedList_TypeDef*  const pstList)
{
    CSLinkedListElement_TypeDef* pstHeadReg = (CSLinkedListElement_TypeDef*)0U;
    pstHeadReg = pstList->pstHead;
    return pstHeadReg;
}

void CSLinkedList__vSetHead(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstHeadArg)
{
    pstList->pstHead = pstHeadArg;
}

CSLinkedList_nSTATUS CSLinkedList__enIsHead(const CSLinkedList_TypeDef* const pstList, const CSLinkedListElement_TypeDef* const pstElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstListHead = (CSLinkedListElement_TypeDef*)0UL;
    pstListHead = CSLinkedList__pstGetHead(pstList);
    if ((uint32_t) pstElement == (uint32_t) (pstListHead))
    {
        enStatus = CSLinkedList_enSTATUS_OK;
    }
    return enStatus;
}



