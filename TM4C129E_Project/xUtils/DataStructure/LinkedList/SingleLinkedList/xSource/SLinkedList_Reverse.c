/**
 *
 * @file SLinkedList_Reverse.c
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Reverse.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

SLinkedList_nSTATUS SLinkedList__enReverse(SLinkedList_TypeDef* pstList)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstPreviousNode = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstNextNode = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstHeadItem = (SLinkedListItem_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstHeadItem = SLinkedList__pstGetHead(pstList);
        SLinkedList__vSetTail(pstList, pstHeadItem);
        while((uint32_t) 0UL != (uint32_t) pstHeadItem)
        {
            pstNextNode = SLinkedList__pstGetItemNextNode(pstHeadItem);
            SLinkedList__vSetItemNextNode(pstHeadItem, pstPreviousNode);
            pstPreviousNode = pstHeadItem;
            pstHeadItem = pstNextNode;
        }
        pstHeadItem = pstPreviousNode;
        SLinkedList__vSetHead(pstList, pstHeadItem);
    }
    return (enStatus);
}
