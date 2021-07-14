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

CDLinkedListItem_TypeDef* CDLinkedList__pstGetTail(const CDLinkedList_TypeDef*  const pstList)
{
    CDLinkedListItem_TypeDef* pstTailReg = (CDLinkedListItem_TypeDef*)0U;
    if(0UL != (uint32_t) pstList)
    {
        pstTailReg = pstList->pstTail;
    }
    return (pstTailReg);
}

void CDLinkedList__vSetTail(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstTailArg)
{
    if(0UL != (uint32_t) pstList)
    {
        pstList->pstTail = pstTailArg;
    }
}

CDLinkedList_nSTATUS CDLinkedList__enIsTail(const CDLinkedListItem_TypeDef* const pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    if (0UL == (uint32_t) (pstItem->pstNextItem))
    {
        enStatus = CDLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}



