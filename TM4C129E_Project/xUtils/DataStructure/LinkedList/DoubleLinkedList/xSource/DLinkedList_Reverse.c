/**
 *
 * @file DLinkedList_Reverse.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Reverse.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

DLinkedList_nSTATUS DLinkedList__enReverse(DLinkedList_TypeDef* pstList)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstNextItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstNextNextItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstNextPreviousItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstItem = (DLinkedListItem_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstItem = DLinkedList__pstGetHead(pstList);
        DLinkedList__vSetTail(pstList, pstItem);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            pstNextItem = DLinkedList__pstGetItemNextNode(pstItem);
            if((uint32_t) 0UL != (uint32_t) pstNextItem)
            {
                enStatus = DLinkedList_enSTATUS_OK;
                DLinkedList__vSetItemNextNode(pstItem, (DLinkedListItem_TypeDef*)0UL);
                DLinkedList__vSetItemPreviousNode(pstItem, pstNextItem);

                while((uint32_t) 0UL != (uint32_t) pstNextItem)
                {
                    pstNextNextItem = DLinkedList__pstGetItemNextNode(pstNextItem);
                    DLinkedList__vSetItemPreviousNode(pstNextItem, pstNextNextItem);
                    DLinkedList__vSetItemNextNode(pstNextItem, pstItem);
                    pstNextPreviousItem = DLinkedList__pstGetItemPreviousNode(pstNextItem);

                    pstItem = pstNextItem;
                    pstNextItem = pstNextPreviousItem;
                }
                DLinkedList__vSetHead(pstList, pstItem);
            }
        }
    }
    return (enStatus);
}



