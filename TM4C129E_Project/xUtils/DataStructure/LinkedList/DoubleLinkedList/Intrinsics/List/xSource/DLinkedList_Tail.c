/**
 *
 * @file DLinkedList_Tail.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Tail.h>
#include <stdlib.h>

DLinkedListElement_TypeDef* DLinkedList__pstGetTail(const DLinkedList_TypeDef*  const pstList)
{
    DLinkedListElement_TypeDef* pstTailReg = (DLinkedListElement_TypeDef*)0U;
    pstTailReg = pstList->pstTail;
    return pstTailReg;
}

void DLinkedList__vSetTail(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstTailArg)
{
    pstList->pstTail = pstTailArg;
}

DLinkedList_nSTATUS DLinkedList__enIsTail(const DLinkedListElement_TypeDef* const pstElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    if ((uint32_t) 0UL == (uint32_t) (pstElement->pstNextNode))
    {
        enStatus = DLinkedList_enSTATUS_OK;
    }
    return enStatus;
}



