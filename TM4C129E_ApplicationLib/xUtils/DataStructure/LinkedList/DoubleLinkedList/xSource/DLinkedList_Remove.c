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

DLinkedList_nERROR DLinkedList__enRemoveInList_GetData(DLinkedList_t* pstList, DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedListItem_t* pstHeadItem;
    DLinkedListItem_t* pstItemNextNode;
    DLinkedListItem_t* pstItemPreviousNode;
    UBase_t uxSizeReg;
    boolean_t boStatusRead;
    DLinkedList_nERROR enErrorReg;

    pstHeadItem = (DLinkedListItem_t*) 0UL ;
    pstItemNextNode = (DLinkedListItem_t*) 0UL ;
    pstItemPreviousNode = (DLinkedListItem_t*) 0UL ;
    uxSizeReg = 0UL;
    boStatusRead = FALSE;
    enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeReg);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == (uintptr_t) pstItem) || (0UL == uxSizeReg))
        {
            enErrorReg = DLinkedList_enERROR_EMPTY;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pvData)
        {
            enErrorReg = DLinkedList_Item__enGetData(pstItem, pvData);
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetHead(pstList, &pstHeadItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((uintptr_t) pstItem == (uintptr_t) pstHeadItem)
        {
            enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemNextNode);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList__enSetHead(pstList, pstItemNextNode);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                if(0UL == (uintptr_t) pstItemNextNode)
                {
                    enErrorReg = DLinkedList__enSetTail(pstList, (DLinkedListItem_t*) 0UL);
                }
                else
                {
                    enErrorReg = DLinkedList_Item__enSetPreviousItem(pstItemNextNode, (DLinkedListItem_t*) 0UL);
                }
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList__enIsLastItemRead(pstList, pstItem, &boStatusRead);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                if(TRUE == boStatusRead)
                {
                    enErrorReg = DLinkedList__enSetLastItemRead(pstList, pstItemNextNode);
                }
            }
        }
        else
        {
            enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemNextNode);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItem, &pstItemPreviousNode);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetNextItem(pstItemPreviousNode, pstItemNextNode);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                if(0UL == (uintptr_t) pstItemNextNode)
                {
                    enErrorReg = DLinkedList__enSetTail(pstList, pstItemPreviousNode);
                }
                else
                {
                    enErrorReg = DLinkedList_Item__enSetPreviousItem(pstItemNextNode, pstItemPreviousNode);
                }
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList__enIsLastItemRead(pstList,pstItem, &boStatusRead);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                if(TRUE == boStatusRead)
                {
                    enErrorReg = DLinkedList__enSetLastItemRead(pstList, pstItemPreviousNode);
                }
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enSetOwnerList(pstItem,  (void *) 0UL);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enSetNextItem(pstItem,  (DLinkedListItem_t *) 0UL);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enSetPreviousItem(pstItem,  (DLinkedListItem_t *) 0UL);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL !=  (uintptr_t) pstList->pvfDestroyItem)
        {
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetValue(pstItem, 0UL);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetData(pstItem,  (void *) 0UL);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstList->pvfDestroyItem(pstItem);
                pstItem = (DLinkedListItem_t*) 0UL;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        uxSizeReg--;
        DLinkedList__enSetSize(pstList, uxSizeReg);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemoveInList(DLinkedList_t* pstList, DLinkedListItem_t* pstItem)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemove_GetData(DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_t* pstListReg;
    DLinkedList_nERROR enErrorReg;

    pstListReg = (DLinkedList_t*) 0UL;
    enErrorReg = DLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstListReg);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemove(DLinkedListItem_t* pstItem)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enErrorReg);
}


DLinkedList_nERROR DLinkedList__enRemoveNextInList_GetData(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedListItem_t* pstItemNextNode;
    DLinkedList_nERROR enErrorReg;

    pstItemNextNode = (DLinkedListItem_t*) 0UL ;
    enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemNextNode);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enRemoveInList_GetData(pstList, pstItemNextNode, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemoveNextInList(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemoveNext_GetData(const DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_nERROR enErrorReg;
    DLinkedList_t* pstListReg;

    pstListReg = (DLinkedList_t*) 0UL;
    enErrorReg = DLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstListReg);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemoveNext(const DLinkedListItem_t* pstItem)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enErrorReg);
}



DLinkedList_nERROR DLinkedList__enRemovePreviousInList_GetData(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedListItem_t* pstItemPreviousNode;
    DLinkedList_nERROR enErrorReg;

    pstItemPreviousNode = (DLinkedListItem_t*) 0UL ;
    enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItem, &pstItemPreviousNode);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enRemoveInList_GetData(pstList, pstItemPreviousNode, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemovePreviousInList(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enRemovePreviousInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemovePrevious_GetData(const DLinkedListItem_t* pstItem, void** pvData)
{
    DLinkedList_t* pstListReg;
    DLinkedList_nERROR enErrorReg;

    pstListReg = (DLinkedList_t*) 0UL;
    enErrorReg = DLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstListReg);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enRemovePreviousInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enRemovePrevious(const DLinkedListItem_t* pstItem)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enRemovePrevious_GetData(pstItem, (void**) 0UL);
    return (enErrorReg);
}



DLinkedList_nERROR  DLinkedList__enRemoveTail_GetData(DLinkedList_t* pstList, void** pvData)
{
    DLinkedListItem_t* pstEndItem;
    DLinkedList_nERROR enErrorReg;

    pstEndItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetTail(pstList, &pstEndItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enRemoveInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR  DLinkedList__enRemoveTail(DLinkedList_t* pstList)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enRemoveTail_GetData(pstList, (void**) 0UL);
    return (enErrorReg);
}

DLinkedList_nERROR  DLinkedList__enRemoveHead_GetData(DLinkedList_t* pstList, void** pvData)
{
    DLinkedListItem_t* pstBeginItem;
    DLinkedList_nERROR enErrorReg;

    pstBeginItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetHead(pstList, &pstBeginItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enRemoveInList_GetData(pstList, pstBeginItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR  DLinkedList__enRemoveHead(DLinkedList_t* pstList)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enRemoveHead_GetData(pstList, (void**) 0UL);
    return (enErrorReg);
}

DLinkedList_nERROR  DLinkedList__enRemovePosition_GetData(DLinkedList_t* pstList, UBase_t uxPosition, void** pvData)
{
    DLinkedListItem_t* pstItem;
    DLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    DLinkedList_nERROR enErrorReg;


    pstItem = (DLinkedListItem_t*) 0UL;
    pstItemTemp = (DLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeList);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition >= uxSizeList)
        {
            enErrorReg = DLinkedList_enERROR_RANGE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Remove Head*/
        {
            enErrorReg = DLinkedList__enRemoveHead_GetData(pstList, pvData);
        }
        else if(uxPosition < (uxSizeList - 1UL))
        {
            UBase_t uxSizeBackward;
            UBase_t uxSizeForward;
            UBase_t uxDirection;
            UBase_t uxSizeOptimum;

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

            if(0UL == uxDirection) /*Forward*/
            {
                enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
                while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                    if(DLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItem = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            else /*Backward*/
            {
                enErrorReg = DLinkedList__enGetTail(pstList, &pstItem);
                while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                    if(DLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItem = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList__enRemoveInList_GetData(pstList, pstItem, pvData);
            }
        }
        else /*Remove Tail*/
        {
            enErrorReg = DLinkedList__enRemoveTail_GetData(pstList, pvData);
        }
    }
    return (enErrorReg);
}

DLinkedList_nERROR  DLinkedList__enRemovePosition(DLinkedList_t* pstList, UBase_t uxPosition)
{
    DLinkedListItem_t* pstItem;
    DLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    DLinkedList_nERROR enErrorReg;


    pstItem = (DLinkedListItem_t*) 0UL;
    pstItemTemp = (DLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeList);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition >= uxSizeList)
        {
            enErrorReg = DLinkedList_enERROR_RANGE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Remove Head*/
        {
            enErrorReg = DLinkedList__enRemoveHead(pstList);
        }
        else if(uxPosition < (uxSizeList - 1UL)) /*Remove Tail*/
        {
            UBase_t uxSizeBackward;
            UBase_t uxSizeForward;
            UBase_t uxDirection;
            UBase_t uxSizeOptimum;

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

            if(0UL == uxDirection) /*Forward*/
            {
                enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
                while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                    if(DLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItem = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            else /*Backward*/
            {
                enErrorReg = DLinkedList__enGetTail(pstList, &pstItem);
                while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                    if(DLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItem = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList__enRemoveInList(pstList, pstItem);
            }
        }
        else
        {
            enErrorReg = DLinkedList__enRemoveTail(pstList);
        }
    }
    return (enErrorReg);
}
