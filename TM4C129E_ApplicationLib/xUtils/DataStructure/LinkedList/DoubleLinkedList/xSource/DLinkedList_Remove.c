/**
 *
 * @file DLinkedList_Remove.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

DLinkedList_nSTATUS DLinkedList__enRemoveInList_GetData(DLinkedList_t* pstList, DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedList_nSTATUS enStatusRead = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_t* pstHeadItem = (DLinkedListItem_t*) 0UL ;
    DLinkedListItem_t* pstItemNextNode = (DLinkedListItem_t*) 0UL ;
    DLinkedListItem_t* pstItemPreviousNode = (DLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0UL;

    if(0UL != (UBase_t) pstList)
    {
        uxSizeReg = DLinkedList__uxGetSize(pstList);
        if(((UBase_t) 0UL != (UBase_t) pstItem) && (0UL != uxSizeReg))
        {
            enStatus = DLinkedList_enSTATUS_OK;
            if(0UL != (UBase_t) pvData)
            {
                *pvData = DLinkedList_Item__pvGetData(pstItem);
            }
            pstHeadItem = DLinkedList__pstGetHead(pstList);
            if((UBase_t) pstItem == (UBase_t) pstHeadItem)
            {
                pstItemNextNode = DLinkedList_Item__pstGetNextItem(pstItem);
                DLinkedList__vSetHead(pstList, pstItemNextNode);

                if((UBase_t) 0UL == (UBase_t) pstItemNextNode)
                {
                    DLinkedList__vSetTail(pstList, (DLinkedListItem_t*) 0UL);
                }
                else
                {
                    DLinkedList_Item__vSetPreviousItem(pstItemNextNode, (DLinkedListItem_t*) 0UL);
                }

                enStatusRead = DLinkedList__enIsLastItemRead(pstList,pstItem);
                if((UBase_t) DLinkedList_enSTATUS_OK == (UBase_t) enStatusRead)
                {
                    DLinkedList__vSetLastItemRead(pstList, pstItemNextNode);
                }

            }
            else
            {
                pstItemNextNode = DLinkedList_Item__pstGetNextItem(pstItem);
                pstItemPreviousNode = DLinkedList_Item__pstGetPreviousItem(pstItem);

                DLinkedList_Item__vSetNextItem(pstItemPreviousNode, pstItemNextNode);

                if((UBase_t) 0UL == (UBase_t) pstItemNextNode)
                {
                    DLinkedList__vSetTail(pstList, pstItemPreviousNode);
                }
                else
                {
                    DLinkedList_Item__vSetPreviousItem(pstItemNextNode, pstItemPreviousNode);
                }

                enStatusRead = DLinkedList__enIsLastItemRead(pstList,pstItem);
                if((UBase_t) DLinkedList_enSTATUS_OK == (UBase_t) enStatusRead)
                {
                    DLinkedList__vSetLastItemRead(pstList, pstItemPreviousNode);
                }
            }

            DLinkedList_Item__vSetOwnerList(pstItem,  (void *) 0UL);
            DLinkedList_Item__vSetNextItem(pstItem,  (DLinkedListItem_t *) 0UL);
            DLinkedList_Item__vSetPreviousItem(pstItem,  (DLinkedListItem_t *) 0UL);
            if(0UL !=  (UBase_t)  pstList->pvfDestroyItem)
            {
                DLinkedList_Item__vSetValue(pstItem, 0UL);
                DLinkedList_Item__vSetData(pstItem,  (void *) 0UL);
                pstList->pvfDestroyItem(pstItem);
                pstItem = (DLinkedListItem_t*) 0UL;
            }

            uxSizeReg--;
            DLinkedList__vSetSize(pstList, uxSizeReg);
        }
    }
    return (enStatus);
}


DLinkedList_nSTATUS DLinkedList__enRemoveInList(DLinkedList_t* pstList, DLinkedListItem_t* pstItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemove_GetData(DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedList_t* pstListReg = (DLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = DLinkedList_enSTATUS_OK;
        pstListReg = (DLinkedList_t*) DLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = DLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemove(DLinkedListItem_t* pstItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}




DLinkedList_nSTATUS DLinkedList__enRemoveNextInList_GetData(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_t* pstItemNextNode = (DLinkedListItem_t*) 0UL ;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pstItem))
    {
        pstItemNextNode = DLinkedList_Item__pstGetNextItem(pstItem);
        enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstItemNextNode, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemoveNextInList(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemoveNext_GetData(const DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedList_t* pstListReg = (DLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = DLinkedList_enSTATUS_OK;
        pstListReg = (DLinkedList_t*) DLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = DLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemoveNext(const DLinkedListItem_t* pstItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}



DLinkedList_nSTATUS DLinkedList__enRemovePreviousInList_GetData(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_t* pstItemPreviousNode = (DLinkedListItem_t*) 0UL ;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pstItem))
    {
        pstItemPreviousNode = DLinkedList_Item__pstGetPreviousItem(pstItem);
        enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstItemPreviousNode, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemovePreviousInList(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemovePreviousInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemovePrevious_GetData(const DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedList_t* pstListReg = (DLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = DLinkedList_enSTATUS_OK;
        pstListReg = (DLinkedList_t*) DLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = DLinkedList__enRemovePreviousInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemovePrevious(const DLinkedListItem_t* pstItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemovePrevious_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}



DLinkedList_nSTATUS  DLinkedList__enRemoveTail_GetData(DLinkedList_t* pstList, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_t* pstEndItem = (DLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = DLinkedList__pstGetTail(pstList);
        enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemoveTail(DLinkedList_t* pstList)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveTail_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemoveHead_GetData(DLinkedList_t* pstList, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_t* pstBeginItem = (DLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstBeginItem = DLinkedList__pstGetHead(pstList);
        enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstBeginItem, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemoveHead(DLinkedList_t* pstList)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveHead_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemovePos_GetData(DLinkedList_t* pstList, UBase_t uxPosition, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = DLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL == uxPosition) /*Remove Head*/
            {
                enStatus = DLinkedList__enRemoveHead_GetData(pstList, pvData);
            }
            else if((UBase_t) uxPosition == (UBase_t) (uxSizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = DLinkedList__enRemoveTail_GetData(pstList, pvData);
            }
            else
            {
                uxSizeBackward = uxSizeList - uxPosition;

                uxSizeForward = uxPosition;

                if(uxSizeForward > uxSizeBackward)
                {
                    uxSizeOptimum = uxSizeBackward;
                    uxDirection = 1UL;
                }
                else
                {
                    uxSizeOptimum = uxSizeForward;
                    uxDirection = 0UL;
                }

                if(uxDirection == 0UL) /*Forward*/
                {
                    pstItem = DLinkedList__pstGetHead(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = DLinkedList__pstGetTail(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstItem, pvData);
                }
            }
        }
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemovePos(DLinkedList_t* pstList, UBase_t uxPosition)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = DLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL == uxPosition) /*Remove Head*/
            {
                enStatus = DLinkedList__enRemoveHead(pstList);
            }
            else if((UBase_t) uxPosition == (UBase_t) (uxSizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = DLinkedList__enRemoveTail(pstList);
            }
            else
            {
                uxSizeBackward = uxSizeList - uxPosition;

                uxSizeForward = uxPosition;

                if(uxSizeForward > uxSizeBackward)
                {
                    uxSizeOptimum = uxSizeBackward;
                    uxDirection = 1UL;
                }
                else
                {
                    uxSizeOptimum = uxSizeForward;
                    uxDirection = 0UL;
                }

                if(uxDirection == 0UL) /*Forward*/
                {
                    pstItem = DLinkedList__pstGetHead(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = DLinkedList__enRemoveInList(pstList, pstItem);
                }
                else /*Backward*/
                {
                    pstItem = DLinkedList__pstGetTail(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = DLinkedList__enRemoveInList(pstList, pstItem);
                }
            }
        }
    }
    return (enStatus);
}
