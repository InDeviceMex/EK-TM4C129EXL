/**
 *
 * @file SLinkedList_Remove.c
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

#define REMOVE_NEXT (1UL)
#define REMOVE_CURRENT (0UL)

static SLinkedList_nSTATUS SLinkedList__enRemoveGeneric(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstItem, void** pvData, uint32_t u32Remove);

static SLinkedList_nSTATUS SLinkedList__enRemoveGeneric(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstItem, void** pvData, uint32_t u32Remove)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstOldItem = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstHeadNextNode = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstHeadData = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstItemNextNode = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstItemNextNextNode = (SLinkedListItem_TypeDef*) 0UL ;
    void* pstItemNextNodeData = (void*) 0UL ;
    void* pstItemItemData = (void*) 0UL ;
    void* pstItemDataTemp = (void*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = SLinkedList__u32GetSize(pstList);
        if(0UL != u32SizeReg)
        {
            if((uint32_t) 0UL == (uint32_t) pstItem)
            {
                enStatus = SLinkedList_enSTATUS_OK;
                pstHeadData = SLinkedList__pstGetHead(pstList);
                pstItemDataTemp = SLinkedList__pvGetItemData(pstHeadData);
                pstOldItem = pstHeadData;
                pstHeadNextNode = SLinkedList__pstGetItemNextNode(pstHeadData);
                SLinkedList__vSetHead(pstList, pstHeadNextNode);
                if(1UL == u32SizeReg)
                {
                    SLinkedList__vSetTail(pstList, (SLinkedListItem_TypeDef*)0UL);
                }
            }
            else
            {
                pstItemNextNode = SLinkedList__pstGetItemNextNode(pstItem);
                if((uint32_t) 0UL != (uint32_t) pstItemNextNode)
                {
                    enStatus = SLinkedList_enSTATUS_OK;

                    pstItemNextNodeData = SLinkedList__pvGetItemData(pstItemNextNode);
                    if(REMOVE_CURRENT == u32Remove)
                    {
                        pstItemItemData = SLinkedList__pvGetItemData(pstItem);
                        pstItemDataTemp = pstItemItemData;
                    }
                    else
                    {
                        pstItemDataTemp = pstItemNextNodeData;
                    }

                    pstOldItem = pstItemNextNode;
                    pstItemNextNextNode = SLinkedList__pstGetItemNextNode(pstItemNextNode);
                    if(REMOVE_CURRENT == u32Remove)
                    {
                        SLinkedList__vSetItemData(pstItem, pstItemNextNodeData);
                    }

                    SLinkedList__vSetItemNextNode(pstItem, pstItemNextNextNode);


                    pstItemNextNode = SLinkedList__pstGetItemNextNode(pstItem);
                    if((uint32_t) 0UL == (uint32_t) pstItemNextNode)
                    {
                        SLinkedList__vSetTail(pstList, (SLinkedListItem_TypeDef*)pstItem);
                    }
                }
            }

            if(SLinkedList_enSTATUS_OK == enStatus)
            {
                if(0UL != (uint32_t) pvData)
                {
                    *pvData = pstItemDataTemp;
                }

                SLinkedList__vSetItemValue(pstOldItem, 0UL);
                SLinkedList__vSetItemOwnerList(pstOldItem,  (void *) 0UL);
                SLinkedList__vSetItemNextNode(pstOldItem,  (SLinkedListItem_TypeDef *) 0UL);
                if(0UL !=  (uint32_t)  pstList->pfvDestroyItem)
                {
                    SLinkedList__vSetItemData(pstOldItem,  (void *) 0UL);
                    pstList->pfvDestroyItem(pstOldItem);
                    pstOldItem = (SLinkedListItem_TypeDef*) 0UL;
                }

                u32SizeReg--;
                SLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enRemoveNextInList_GetData(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstItem, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveGeneric(pstList, pstItem, pvData, REMOVE_NEXT);
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enRemoveNextInList(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enRemoveNext_GetData(SLinkedListItem_TypeDef* pstItem, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedList_TypeDef* pstListReg = (SLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstItem)
    {
        enStatus = SLinkedList_enSTATUS_OK;
        pstListReg = (SLinkedList_TypeDef*) SLinkedList__pvGetItemOwnerList(pstItem);
        enStatus = SLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enRemoveNext(SLinkedListItem_TypeDef* pstItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}



SLinkedList_nSTATUS SLinkedList__enRemoveInList_GetData(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstItem, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveGeneric(pstList, pstItem, pvData, REMOVE_CURRENT);
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enRemoveInList(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enRemove_GetData(SLinkedListItem_TypeDef* pstItem, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedList_TypeDef* pstListReg = (SLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstItem)
    {
        enStatus = SLinkedList_enSTATUS_OK;
        pstListReg = (SLinkedList_TypeDef*) SLinkedList__pvGetItemOwnerList(pstItem);
        enStatus = SLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enRemove(SLinkedListItem_TypeDef* pstItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}


SLinkedList_nSTATUS  SLinkedList__enRemoveEnd_GetData(SLinkedList_TypeDef* pstList, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstEndItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(1UL <  u32SizeList)
        {
            u32SizeList--;
            pstEndItem = SLinkedList__pstGetHead(pstList);
            u32SizeList--;
            while(0UL != u32SizeList)
            {
                pstEndItem = SLinkedList__pstGetItemNextNode(pstEndItem);
                u32SizeList--;
            }
        }
        enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enStatus);
}

SLinkedList_nSTATUS  SLinkedList__enRemoveEnd(SLinkedList_TypeDef* pstList)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveEnd_GetData(pstList, (void**) 0UL);
    return (enStatus);
}


SLinkedList_nSTATUS  SLinkedList__enRemoveBegin_GetData(SLinkedList_TypeDef* pstList, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, (SLinkedListItem_TypeDef*) 0UL, pvData);
    }
    return (enStatus);
}

SLinkedList_nSTATUS  SLinkedList__enRemoveBegin(SLinkedList_TypeDef* pstList)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveBegin_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

SLinkedList_nSTATUS  SLinkedList__enRemovePos_GetData(SLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL != u32Position)
            {
                pstItem = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = SLinkedList__pstGetItemNextNode(pstItem);
                    u32Position--;
                }
            }
            enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, pstItem, pvData);
        }
    }
    return (enStatus);
}

SLinkedList_nSTATUS  SLinkedList__enRemovePos(SLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemovePos_GetData(pstList, u32Position, (void**) 0UL);
    return (enStatus);
}
