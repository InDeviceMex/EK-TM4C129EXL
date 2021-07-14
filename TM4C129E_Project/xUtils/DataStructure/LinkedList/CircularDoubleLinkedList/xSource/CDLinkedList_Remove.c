/**
 *
 * @file CDLinkedList_Remove.c
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

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/CDLinkedList_Intrinsics.h>

CDLinkedList_nSTATUS CDLinkedList__enRemoveInList_GetData(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstItemNextNode = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstItemPreviousNode = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstHeadItem = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstTailItem = (CDLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstItem) || (0UL != u32SizeReg))
        {
            enStatus = CDLinkedList_enSTATUS_OK;
            if(0UL != (uint32_t) pvData)
            {
                *pvData = CDLinkedList__pvGetItemData(pstItem);
            }

            pstHeadItem = CDLinkedList__pstGetHead(pstList);
            pstTailItem = CDLinkedList__pstGetTail(pstList);

            pstItemNextNode = CDLinkedList__pstGetItemNextNode(pstItem);
            pstItemPreviousNode = CDLinkedList__pstGetItemPreviousNode(pstItem);

            if((uint32_t) pstHeadItem == (uint32_t) pstTailItem)/*Last Item*/
            {
                CDLinkedList__vSetTail(pstList, (CDLinkedListItem_TypeDef*) 0UL);
                CDLinkedList__vSetHead(pstList, (CDLinkedListItem_TypeDef*) 0UL);
            }
            else
            {
                if((uint32_t) pstHeadItem == (uint32_t) pstItem)
                {
                    CDLinkedList__vSetHead(pstList, pstItemNextNode);
                }
                if((uint32_t) pstTailItem == (uint32_t) pstItem)
                {
                    CDLinkedList__vSetTail(pstList, pstItemPreviousNode);
                }
                CDLinkedList__vSetItemNextNode(pstItemPreviousNode, pstItemNextNode);
                CDLinkedList__vSetItemPreviousNode(pstItemNextNode, pstItemPreviousNode);
            }

            CDLinkedList__vSetItemOwnerList(pstItem,  (void *) 0UL);
            CDLinkedList__vSetItemValue(pstItem, 0UL);
            CDLinkedList__vSetItemNextNode(pstItem,  (CDLinkedListItem_TypeDef *) 0UL);
            CDLinkedList__vSetItemPreviousNode(pstItem,  (CDLinkedListItem_TypeDef *) 0UL);
            if(0UL !=  (uint32_t)  pstList->pfvDestroyItem)
            {
                CDLinkedList__vSetItemData(pstItem,  (void *) 0UL);
                pstList->pfvDestroyItem(pstItem);
                pstItem = (CDLinkedListItem_TypeDef*) 0UL;
            }

            u32SizeReg--;
            CDLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemoveInList(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemove_GetData(CDLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedList_TypeDef* pstListReg = (CDLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstItem)
    {
        enStatus = CDLinkedList_enSTATUS_OK;
        pstListReg = (CDLinkedList_TypeDef*) CDLinkedList__pvGetItemOwnerList(pstItem);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemove(CDLinkedListItem_TypeDef* pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}


CDLinkedList_nSTATUS CDLinkedList__enRemoveNextInList_GetData(CDLinkedList_TypeDef* pstList, const CDLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstItemNextNode = (CDLinkedListItem_TypeDef*) 0UL ;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pstItem))
    {
        pstItemNextNode = CDLinkedList__pstGetItemNextNode(pstItem);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItemNextNode, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemoveNextInList(CDLinkedList_TypeDef* pstList, const CDLinkedListItem_TypeDef* pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemoveNext_GetData(const CDLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedList_TypeDef* pstListReg = (CDLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstItem)
    {
        enStatus = CDLinkedList_enSTATUS_OK;
        pstListReg = (CDLinkedList_TypeDef*) CDLinkedList__pvGetItemOwnerList(pstItem);
        enStatus = CDLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemoveNext(const CDLinkedListItem_TypeDef* pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemovePreviousInList_GetData(CDLinkedList_TypeDef* pstList, const CDLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstItemPreviousNode = (CDLinkedListItem_TypeDef*) 0UL ;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pstItem))
    {
        pstItemPreviousNode = CDLinkedList__pstGetItemPreviousNode(pstItem);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItemPreviousNode, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemovePreviousInList(CDLinkedList_TypeDef* pstList, const CDLinkedListItem_TypeDef* pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enRemovePreviousInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemovePrevious_GetData(const CDLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedList_TypeDef* pstListReg = (CDLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstItem)
    {
        enStatus = CDLinkedList_enSTATUS_OK;
        pstListReg = (CDLinkedList_TypeDef*) CDLinkedList__pvGetItemOwnerList(pstItem);
        enStatus = CDLinkedList__enRemovePreviousInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemovePrevious(const CDLinkedListItem_TypeDef* pstItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enRemovePrevious_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enRemoveEnd_GetData(CDLinkedList_TypeDef* pstList, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstEndItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enRemoveEnd(CDLinkedList_TypeDef* pstList)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enRemoveEnd_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enRemoveBegin_GetData(CDLinkedList_TypeDef* pstList, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstBeginItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstBeginItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enRemoveBegin(CDLinkedList_TypeDef* pstList)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enRemoveBegin_GetData(pstList, (void**) 0UL);
    return (enStatus);
}



CDLinkedList_nSTATUS  CDLinkedList__enRemovePos_GetData(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL == u32Position) /*Remove Head*/
            {
                enStatus = CDLinkedList__enRemoveBegin_GetData(pstList, pvData);
            }
            else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = CDLinkedList__enRemoveEnd_GetData(pstList, pvData);
            }
            else
            {
                u32SizeBackward = u32SizeList - u32Position;

                u32SizeForward = u32Position;

                if(u32SizeForward > u32SizeBackward)
                {
                    u32SizeOptimum = u32SizeBackward;
                    u32Direction = 1UL;
                }
                else
                {
                    u32SizeOptimum = u32SizeForward;
                    u32Direction = 0UL;
                }

                if(u32Direction == 0UL) /*Forward*/
                {
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemNextNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItem, pvData);
                }
            }
        }
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enRemovePos(CDLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL == u32Position) /*Remove Head*/
            {
                enStatus = CDLinkedList__enRemoveBegin(pstList);
            }
            else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = CDLinkedList__enRemoveEnd(pstList);
            }
            else
            {
                u32SizeBackward = u32SizeList - u32Position;

                u32SizeForward = u32Position;

                if(u32SizeForward > u32SizeBackward)
                {
                    u32SizeOptimum = u32SizeBackward;
                    u32Direction = 1UL;
                }
                else
                {
                    u32SizeOptimum = u32SizeForward;
                    u32Direction = 0UL;
                }

                if(u32Direction == 0UL) /*Forward*/
                {
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemNextNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemoveInList(pstList, pstItem);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemoveInList(pstList, pstItem);
                }
            }
        }
    }
    return (enStatus);
}
