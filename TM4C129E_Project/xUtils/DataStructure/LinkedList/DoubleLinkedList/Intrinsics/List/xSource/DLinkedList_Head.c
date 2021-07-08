/**
 *
 * @file DLinkedList_Head.c
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Head.h>
#include <stdlib.h>

DLinkedListElement_TypeDef* DLinkedList__pstGetHead(const DLinkedList_TypeDef*  const pstList)
{
    DLinkedListElement_TypeDef* pstHeadReg = (DLinkedListElement_TypeDef*)0U;
    pstHeadReg = pstList->pstHead;
    return pstHeadReg;
}

void DLinkedList__vSetHead(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstHeadArg)
{
    pstList->pstHead = pstHeadArg;
}

DLinkedList_nSTATUS DLinkedList__enIsHead(const DLinkedList_TypeDef* const pstList, const DLinkedListElement_TypeDef* const pstElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstListHead = (DLinkedListElement_TypeDef*)0UL;
    pstListHead = DLinkedList__pstGetHead(pstList);
    if ((uint32_t) pstElement == (uint32_t) (pstListHead))
    {
        enStatus = DLinkedList_enSTATUS_OK;
    }
    return enStatus;
}


