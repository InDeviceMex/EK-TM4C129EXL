/**
 *
 * @file CDLinkedList_Tail.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Tail.h>
#include <stdlib.h>

CDLinkedListElement_TypeDef* CDLinkedList__pstGetTail(const CDLinkedList_TypeDef*  const pstList)
{
    CDLinkedListElement_TypeDef* pstTailReg = (CDLinkedListElement_TypeDef*)0U;
    pstTailReg = pstList->pstTail;
    return pstTailReg;
}

void CDLinkedList__vSetTail(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstTailArg)
{
    pstList->pstTail = pstTailArg;
}

CDLinkedList_nSTATUS CDLinkedList__enIsTail(const CDLinkedListElement_TypeDef* const pstElement)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    if ((uint32_t) 0UL == (uint32_t) (pstElement->pstNextNode))
    {
        enStatus = CDLinkedList_enSTATUS_OK;
    }
    return enStatus;
}



