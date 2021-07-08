/**
 *
 * @file CDLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Head.h>
#include <stdlib.h>

CDLinkedListElement_TypeDef* CDLinkedList__pstGetHead(const CDLinkedList_TypeDef*  const pstList)
{
    CDLinkedListElement_TypeDef* pstHeadReg = (CDLinkedListElement_TypeDef*)0U;
    pstHeadReg = pstList->pstHead;
    return pstHeadReg;
}

void CDLinkedList__vSetHead(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstHeadArg)
{
    pstList->pstHead = pstHeadArg;
}

CDLinkedList_nSTATUS CDLinkedList__enIsHead(const CDLinkedList_TypeDef* const pstList, const CDLinkedListElement_TypeDef* const pstElement)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstListHead = (CDLinkedListElement_TypeDef*)0UL;
    pstListHead = CDLinkedList__pstGetHead(pstList);
    if ((uint32_t) pstElement == (uint32_t) (pstListHead))
    {
        enStatus = CDLinkedList_enSTATUS_OK;
    }
    return enStatus;
}



