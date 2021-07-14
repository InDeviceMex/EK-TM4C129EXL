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

CDLinkedListItem_TypeDef* CDLinkedList__pstGetHead(const CDLinkedList_TypeDef*  const pstList)
{
    CDLinkedListItem_TypeDef* pstHeadReg = (CDLinkedListItem_TypeDef*) 0U;
    if(0UL != (uint32_t) pstList)
    {
        pstHeadReg = pstList->pstHead;
    }
    return (pstHeadReg);
}

void CDLinkedList__vSetHead(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstHeadArg)
{
    if(0UL != (uint32_t) pstList)
    {
        pstList->pstHead = pstHeadArg;
    }
}

CDLinkedList_nSTATUS CDLinkedList__enIsHead(const CDLinkedList_TypeDef* const pstList, const CDLinkedListItem_TypeDef* const pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstListHead = (CDLinkedListItem_TypeDef*)0UL;
    pstListHead = CDLinkedList__pstGetHead(pstList);
    if ((uint32_t) pstItem == (uint32_t) (pstListHead))
    {
        enStatus = CDLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}
