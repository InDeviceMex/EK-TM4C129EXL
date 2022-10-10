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
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedList_nERROR enStatusRead = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItemNextNode = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstItemPreviousNode = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstHeadItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstTailItem = (CDLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0UL;

    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeReg = CDLinkedList__uxGetSize(pstList);
        if(((UBase_t) 0UL != (UBase_t) pstItem) && (0UL != uxSizeReg))
        {
            enStatus = CDLinkedList_enERROR_OK;
            if(0UL != (UBase_t) pvData)
            {
                *pvData = CDLinkedList_Item__pvGetData(pstItem);
            }

            pstHeadItem = CDLinkedList__pstGetHead(pstList);
            pstTailItem = CDLinkedList__pstGetTail(pstList);

            pstItemNextNode = CDLinkedList_Item__pstGetNextItem(pstItem);
            pstItemPreviousNode = CDLinkedList_Item__pstGetPreviousItem(pstItem);

            if((UBase_t) pstHeadItem == (UBase_t) pstTailItem)/*Last Item*/
            {
                CDLinkedList__vSetTail(pstList, (CDLinkedListItem_t*) 0UL);
                CDLinkedList__vSetHead(pstList, (CDLinkedListItem_t*) 0UL);
                CDLinkedList__vSetLastItemRead(pstList, (CDLinkedListItem_t*) 0UL);
            }
            else
            {
                if((UBase_t) pstHeadItem == (UBase_t) pstItem)
                {
                    CDLinkedList__vSetHead(pstList, pstItemNextNode);
                }
                if((UBase_t) pstTailItem == (UBase_t) pstItem)
                {
                    CDLinkedList__vSetTail(pstList, pstItemPreviousNode);
                }
                CDLinkedList_Item__vSetNextItem(pstItemPreviousNode, pstItemNextNode);
                CDLinkedList_Item__vSetPreviousItem(pstItemNextNode, pstItemPreviousNode);

                enStatusRead = CDLinkedList__enIsLastItemRead(pstList,pstItem);
                if((UBase_t) CDLinkedList_enERROR_OK == (UBase_t) enStatusRead)
                {
                    CDLinkedList__vSetLastItemRead(pstList, pstItemPreviousNode);
                }
            }

            CDLinkedList_Item__vSetOwnerList(pstItem,  (void *) 0UL);
            CDLinkedList_Item__vSetNextItem(pstItem,  (CDLinkedListItem_t *) 0UL);
            CDLinkedList_Item__vSetPreviousItem(pstItem,  (CDLinkedListItem_t *) 0UL);
            if(0UL !=  (UBase_t)  pstList->pvfDestroyItem)
            {
                CDLinkedList_Item__vSetValue(pstItem, 0UL);
                CDLinkedList_Item__vSetData(pstItem,  (void *) 0UL);
                pstList->pvfDestroyItem(pstItem);
                pstItem = (CDLinkedListItem_t*) 0UL;
            }

            uxSizeReg--;
            CDLinkedList__vSetSize(pstList, uxSizeReg);
        }
    }
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemoveInList(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemove_GetData(CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedList_t* pstListReg = (CDLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = CDLinkedList_enERROR_OK;
        pstListReg = (CDLinkedList_t*) CDLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemove(CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}


CDLinkedList_nERROR CDLinkedList__enRemoveNextInList_GetData(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItemNextNode = (CDLinkedListItem_t*) 0UL ;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pstItem))
    {
        pstItemNextNode = CDLinkedList_Item__pstGetNextItem(pstItem);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItemNextNode, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemoveNextInList(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemoveNext_GetData(const CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedList_t* pstListReg = (CDLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = CDLinkedList_enERROR_OK;
        pstListReg = (CDLinkedList_t*) CDLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = CDLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemoveNext(const CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemovePreviousInList_GetData(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItemPreviousNode = (CDLinkedListItem_t*) 0UL ;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pstItem))
    {
        pstItemPreviousNode = CDLinkedList_Item__pstGetPreviousItem(pstItem);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItemPreviousNode, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemovePreviousInList(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enRemovePreviousInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemovePrevious_GetData(const CDLinkedListItem_t* pstItem, void** pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedList_t* pstListReg = (CDLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = CDLinkedList_enERROR_OK;
        pstListReg = (CDLinkedList_t*) CDLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = CDLinkedList__enRemovePreviousInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enRemovePrevious(const CDLinkedListItem_t* pstItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enRemovePrevious_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enRemoveTail_GetData(CDLinkedList_t* pstList, void** pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstEndItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enRemoveTail(CDLinkedList_t* pstList)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enRemoveTail_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enRemoveHead_GetData(CDLinkedList_t* pstList, void** pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstBeginItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstBeginItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enRemoveHead(CDLinkedList_t* pstList)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enRemoveHead_GetData(pstList, (void**) 0UL);
    return (enStatus);
}



CDLinkedList_nERROR  CDLinkedList__enRemovePos_GetData(CDLinkedList_t* pstList, UBase_t uxPosition, void** pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL == uxPosition) /*Remove Head*/
            {
                enStatus = CDLinkedList__enRemoveHead_GetData(pstList, pvData);
            }
            else if((UBase_t) uxPosition == (UBase_t) (uxSizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = CDLinkedList__enRemoveTail_GetData(pstList, pvData);
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
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemoveInList_GetData(pstList, pstItem, pvData);
                }
            }
        }
    }
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enRemovePos(CDLinkedList_t* pstList, UBase_t uxPosition)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL == uxPosition) /*Remove Head*/
            {
                enStatus = CDLinkedList__enRemoveHead(pstList);
            }
            else if((UBase_t) uxPosition == (UBase_t) (uxSizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = CDLinkedList__enRemoveTail(pstList);
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
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemoveInList(pstList, pstItem);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemoveInList(pstList, pstItem);
                }
            }
        }
    }
    return (enStatus);
}
