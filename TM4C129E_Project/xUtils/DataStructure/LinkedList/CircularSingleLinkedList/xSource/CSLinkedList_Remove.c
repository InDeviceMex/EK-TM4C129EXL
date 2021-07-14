/**
 *
 * @file CSLinkedList_Remove.c
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>

CSLinkedList_nSTATUS CSLinkedList__enRemoveNextInList_GetData(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstOldItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstTailNode = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstHeadItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstItemNextNode = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstItemNextNextNode = (CSLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeReg = CSLinkedList__u32GetSize(pstList);
        if(0UL != u32SizeReg)
        {
            enStatus = CSLinkedList_enSTATUS_OK;
            if((uint32_t) 0UL == (uint32_t) pstItem) /* Remove Head*/
            {
                pstItem = CSLinkedList__pstGetTail(pstList);
            }

            pstItemNextNode = CSLinkedList__pstGetItemNextNode(pstItem);
            if(0UL != (uint32_t) pvData)
            {
                *pvData = CSLinkedList__pvGetItemData(pstItemNextNode);
            }
            pstOldItem = pstItemNextNode;

            if((uint32_t) pstItem == (uint32_t) pstItemNextNode) /*Remove Last item*/
            {
                CSLinkedList__vSetTail(pstList, (CSLinkedListItem_TypeDef*)0UL);
                CSLinkedList__vSetHead(pstList, (CSLinkedListItem_TypeDef*)0UL);
            }
            else
            {
                pstItemNextNextNode = CSLinkedList__pstGetItemNextNode(pstItemNextNode);
                CSLinkedList__vSetItemNextNode(pstItem, pstItemNextNextNode);

                pstHeadItem = CSLinkedList__pstGetHead(pstList);
                pstTailNode = CSLinkedList__pstGetTail(pstList);
                if((uint32_t) pstItemNextNode == (uint32_t) pstHeadItem)
                {
                    CSLinkedList__vSetHead(pstList, pstItemNextNextNode);
                }
                if((uint32_t) pstItemNextNode == (uint32_t) pstTailNode)
                {
                    CSLinkedList__vSetTail(pstList, pstItem);
                }
            }

            CSLinkedList__vSetItemValue(pstOldItem, 0UL);
            CSLinkedList__vSetItemOwnerList(pstOldItem,  (void *) 0UL);
            CSLinkedList__vSetItemNextNode(pstOldItem,  (CSLinkedListItem_TypeDef *) 0UL);
            if(0UL !=  (uint32_t)  pstList->pfvDestroyItem)
            {
                CSLinkedList__vSetItemData(pstOldItem,  (void *) 0UL);
                pstList->pfvDestroyItem(pstOldItem);
                pstOldItem = (CSLinkedListItem_TypeDef*) 0UL;
            }

            u32SizeReg--;
            CSLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveNextInList(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveNext_GetData(CSLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedList_TypeDef* pstListReg = (CSLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstItem)
    {
        enStatus = CSLinkedList_enSTATUS_OK;
        pstListReg = (CSLinkedList_TypeDef*) CSLinkedList__pvGetItemOwnerList(pstItem);
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveNext(CSLinkedListItem_TypeDef* pstItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveInList_GetData(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstOldItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstHeadNextNode = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstHeadItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstTailItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstItemNextNode = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstItemNextNextNode = (CSLinkedListItem_TypeDef*) 0UL ;
    void* pstItemNextNodeData = (void*) 0UL ;
    void* pstItemNodeData = (void*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeReg = CSLinkedList__u32GetSize(pstList);
        if(0UL != u32SizeReg)
        {
            if((uint32_t) 0UL == (uint32_t) pstItem)
            {
                enStatus = CSLinkedList_enSTATUS_OK;
                pstHeadItem = CSLinkedList__pstGetHead(pstList);

                pstHeadNextNode = CSLinkedList__pstGetItemNextNode(pstHeadItem);
                if(0UL != (uint32_t) pvData)
                {
                    *pvData = CSLinkedList__pvGetItemData(pstHeadItem);
                }
                pstOldItem = pstHeadItem;

                if((uint32_t) pstHeadItem == (uint32_t) pstHeadNextNode) /*Remove Last item*/
                {
                    CSLinkedList__vSetHead(pstList, (CSLinkedListItem_TypeDef*) 0UL);
                    CSLinkedList__vSetTail(pstList, (CSLinkedListItem_TypeDef*) 0UL);
                }
                else
                {
                    pstTailItem = CSLinkedList__pstGetTail(pstList);
                    CSLinkedList__vSetHead(pstList, pstHeadNextNode);
                    CSLinkedList__vSetItemNextNode(pstTailItem, pstHeadNextNode);
                }

            }
            else
            {
                pstTailItem = CSLinkedList__pstGetTail(pstList);
                if(((uint32_t) pstItem != (uint32_t) pstTailItem) || (1UL == u32SizeReg))
                {
                    enStatus = CSLinkedList_enSTATUS_OK;

                    pstItemNextNode = CSLinkedList__pstGetItemNextNode(pstItem);
                    pstItemNextNodeData = CSLinkedList__pvGetItemData(pstItemNextNode);
                    pstItemNodeData = CSLinkedList__pvGetItemData(pstItem);
                    if(0UL != (uint32_t) pvData)
                    {
                        *pvData = pstItemNodeData;
                    }
                    pstOldItem = pstItemNextNode;

                    pstItemNextNextNode = CSLinkedList__pstGetItemNextNode(pstItemNextNode);
                    if((uint32_t) pstItemNextNode == (uint32_t) pstItemNextNextNode) /*Last node*/
                    {
                        CSLinkedList__vSetHead(pstList, (CSLinkedListItem_TypeDef*) 0UL);
                        CSLinkedList__vSetTail(pstList, (CSLinkedListItem_TypeDef*) 0UL);
                    }
                    else
                    {
                        CSLinkedList__vSetItemNextNode(pstItem, pstItemNextNextNode);
                        CSLinkedList__vSetItemData(pstItem, pstItemNextNodeData);

                        if((uint32_t) pstTailItem == (uint32_t) pstItemNextNode)
                        {
                            CSLinkedList__vSetTail(pstList, pstItem);
                        }
                    }
                }
            }

            if(CSLinkedList_enSTATUS_OK == enStatus)
            {
                CSLinkedList__vSetItemValue(pstOldItem, 0UL);
                CSLinkedList__vSetItemOwnerList(pstOldItem,  (void *) 0UL);
                CSLinkedList__vSetItemNextNode(pstOldItem,  (CSLinkedListItem_TypeDef *) 0UL);
                if(0UL !=  (uint32_t)  pstList->pfvDestroyItem)
                {
                    CSLinkedList__vSetItemData(pstOldItem,  (void *) 0UL);
                    pstList->pfvDestroyItem(pstOldItem);
                    pstOldItem = (CSLinkedListItem_TypeDef*) 0UL;
                }

                u32SizeReg--;
                CSLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveInList(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemove_GetData(CSLinkedListItem_TypeDef* pstItem, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedList_TypeDef* pstListReg = (CSLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstItem)
    {
        enStatus = CSLinkedList_enSTATUS_OK;
        pstListReg = (CSLinkedList_TypeDef*) CSLinkedList__pvGetItemOwnerList(pstItem);
        enStatus = CSLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemove(CSLinkedListItem_TypeDef* pstItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemoveEnd_GetData(CSLinkedList_TypeDef* pstList, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstEndItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(1UL <  u32SizeList)
        {
            u32SizeList--;
            pstEndItem = CSLinkedList__pstGetHead(pstList);
            u32SizeList--;
            while(0UL != u32SizeList)
            {
                pstEndItem = CSLinkedList__pstGetItemNextNode(pstEndItem);
                u32SizeList--;
            }
        }
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemoveEnd(CSLinkedList_TypeDef* pstList)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveEnd_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemoveBegin_GetData(CSLinkedList_TypeDef* pstList, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, (CSLinkedListItem_TypeDef*) 0UL, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemoveBegin(CSLinkedList_TypeDef* pstList)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveBegin_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemovePos_GetData(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL != u32Position)
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = CSLinkedList__pstGetItemNextNode(pstItem);
                    u32Position--;
                }
            }
            enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstItem, pvData);
        }
    }
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemovePos(CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemovePos_GetData(pstList, u32Position, (void**) 0UL);
    return (enStatus);
}
