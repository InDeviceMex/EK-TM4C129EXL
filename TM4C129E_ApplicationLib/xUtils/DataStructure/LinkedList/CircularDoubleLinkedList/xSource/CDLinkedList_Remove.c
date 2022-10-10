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

CDLinkedList_nERROR CDLinkedList__enRemoveInList_GetData(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedListItem_t* pstHeadItem;
    CDLinkedListItem_t* pstTailItem;
    CDLinkedListItem_t* pstItemNextNode;
    CDLinkedListItem_t* pstItemPreviousNode;
    UBase_t uxSizeReg;
    boolean_t boStatusRead;
    CDLinkedList_nERROR enErrorReg;

    pstHeadItem = (CDLinkedListItem_t*) 0UL ;
    pstTailItem = (CDLinkedListItem_t*) 0UL ;
    pstItemNextNode = (CDLinkedListItem_t*) 0UL ;
    pstItemPreviousNode = (CDLinkedListItem_t*) 0UL ;
    uxSizeReg = 0UL;
    boStatusRead = FALSE;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeReg);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxSizeReg)
        {
            enErrorReg = CDLinkedList_enERROR_EMPTY;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pvData)
        {
            enErrorReg = CDLinkedList_Item__enGetData(pstItem, pvData);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetHead(pstList, &pstHeadItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetTail(pstList, &pstTailItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemNextNode);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemPreviousNode);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {

        if((uintptr_t) pstHeadItem == (uintptr_t) pstTailItem)/*Last Item*/
        {
            enErrorReg = CDLinkedList__enSetTail(pstList, (CDLinkedListItem_t*) 0UL);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enSetHead(pstList, (CDLinkedListItem_t*) 0UL);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enSetLastItemRead(pstList, (CDLinkedListItem_t*) 0UL);
            }
        }
        else
        {
            if((uintptr_t) pstHeadItem == (uintptr_t) pstItem)
            {
                enErrorReg = CDLinkedList__enSetHead(pstList, pstItemNextNode);
            }
            if((uintptr_t) pstTailItem == (uintptr_t) pstItem)
            {
                enErrorReg = CDLinkedList__enSetTail(pstList, pstItemPreviousNode);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList_Item__enSetNextItem(pstItemPreviousNode, pstItemNextNode);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList_Item__enSetPreviousItem(pstItemNextNode, pstItemPreviousNode);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enIsLastItemRead(pstList,pstItem, &boStatusRead);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                if(TRUE == boStatusRead)
                {
                    enErrorReg = CDLinkedList__enSetLastItemRead(pstList, pstItemPreviousNode);
                }
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enSetOwnerList(pstItem,  (void *) 0UL);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enSetNextItem(pstItem,  (CDLinkedListItem_t *) 0UL);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enSetPreviousItem(pstItem,  (CDLinkedListItem_t *) 0UL);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t)  pstList->pvfDestroyItem)
        {
            enErrorReg = CDLinkedList_Item__enSetValue(pstItem, 0UL);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList_Item__enSetData(pstItem,  (void *) 0UL);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstList->pvfDestroyItem(pstItem);
                pstItem = (CDLinkedListItem_t*) 0UL;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        uxSizeReg--;
        enErrorReg = CDLinkedList__enSetSize(pstList, uxSizeReg);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemoveInList(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemove_GetData(CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedList_t* pstListReg;
    CDLinkedList_nERROR enErrorReg;

    pstListReg = (CDLinkedList_t*) 0UL;
    enErrorReg = CDLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstListReg);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemove(CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enRemoveNextInList_GetData(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedListItem_t* pstItemNextNode;
    CDLinkedList_nERROR enErrorReg;

    pstItemNextNode = (CDLinkedListItem_t*) 0UL ;
    enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemNextNode);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enRemoveInList_GetData(pstList, pstItemNextNode, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemoveNextInList(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemoveNext_GetData(const CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedList_nERROR enErrorReg;
    CDLinkedList_t* pstListReg;

    pstListReg = (CDLinkedList_t*) 0UL;
    enErrorReg = CDLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstListReg);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemoveNext(const CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemovePreviousInList_GetData(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedListItem_t* pstItemPreviousNode;
    CDLinkedList_nERROR enErrorReg;

    pstItemPreviousNode = (CDLinkedListItem_t*) 0UL ;
    enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemPreviousNode);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enRemoveInList_GetData(pstList, pstItemPreviousNode, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemovePreviousInList(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enRemovePreviousInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemovePrevious_GetData(const CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedList_t* pstListReg;
    CDLinkedList_nERROR enErrorReg;

    pstListReg = (CDLinkedList_t*) 0UL;
    enErrorReg = CDLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstListReg);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enRemovePreviousInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enRemovePrevious(const CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enRemovePrevious_GetData(pstItem, (void**) 0UL);
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enRemoveTail_GetData(CDLinkedList_t* pstList, void** pvData)
{
    CDLinkedListItem_t* pstEndItem;
    CDLinkedList_nERROR enErrorReg;

    pstEndItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetTail(pstList, &pstEndItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enRemoveInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enRemoveTail(CDLinkedList_t* pstList)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enRemoveTail_GetData(pstList, (void**) 0UL);
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enRemoveHead_GetData(CDLinkedList_t* pstList, void** pvData)
{
    CDLinkedListItem_t* pstBeginItem;
    CDLinkedList_nERROR enErrorReg;

    pstBeginItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetHead(pstList, &pstBeginItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enRemoveInList_GetData(pstList, pstBeginItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enRemoveHead(CDLinkedList_t* pstList)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enRemoveHead_GetData(pstList, (void**) 0UL);
    return (enErrorReg);
}



CDLinkedList_nERROR  CDLinkedList__enRemovePosition_GetData(CDLinkedList_t* pstList, UBase_t uxPosition, void** pvData)
{
    CDLinkedListItem_t* pstItem;
    CDLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;


    pstItem = (CDLinkedListItem_t*) 0UL;
    pstItemTemp = (CDLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition >= uxSizeList)
        {
            enErrorReg = CDLinkedList_enERROR_RANGE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Remove Head*/
        {
            enErrorReg = CDLinkedList__enRemoveHead_GetData(pstList, pvData);
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
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
                while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItem = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            else /*Backward*/
            {
                enErrorReg = CDLinkedList__enGetTail(pstList, &pstItem);
                while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItem = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enRemoveInList_GetData(pstList, pstItem, pvData);
            }
        }
        else /*Remove Tail*/
        {
            enErrorReg = CDLinkedList__enRemoveTail_GetData(pstList, pvData);
        }
    }
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enRemovePosition(CDLinkedList_t* pstList, UBase_t uxPosition)
{
    CDLinkedListItem_t* pstItem;
    CDLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;


    pstItem = (CDLinkedListItem_t*) 0UL;
    pstItemTemp = (CDLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition >= uxSizeList)
        {
            enErrorReg = CDLinkedList_enERROR_RANGE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Remove Head*/
        {
            enErrorReg = CDLinkedList__enRemoveHead(pstList);
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
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
                while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItem = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            else /*Backward*/
            {
                enErrorReg = CDLinkedList__enGetTail(pstList, &pstItem);
                while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItem = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enRemoveInList(pstList, pstItem);
            }
        }
        else
        {
            enErrorReg = CDLinkedList__enRemoveTail(pstList);
        }
    }
    return (enErrorReg);
}
