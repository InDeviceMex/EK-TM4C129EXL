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

static SLinkedList_nERROR SLinkedList__enRemoveGeneric(SLinkedList_t* pstList, SLinkedListItem_t* pstItem, void** pvData, UBase_t uxRemove);

static SLinkedList_nERROR SLinkedList__enRemoveGeneric(SLinkedList_t* pstList, SLinkedListItem_t* pstItem, void** pvData, UBase_t uxRemove)
{
    SLinkedListItem_t* pstHeadData;
    SLinkedListItem_t* pstItemToRemove;
    SLinkedListItem_t* pstHeadNextItem;
    SLinkedListItem_t* pstItemNextItem;
    SLinkedListItem_t* pstItemNextNextItem;
    void* pstItemNextItemData;
    void* pstItemNextItemOwner;
    void* pstItemItemData;
    void* pstItemDataTemp;
    UBase_t uxItemNextItemValue;
    UBase_t uxSizeReg;
    SLinkedList_nERROR enErrorReg;
    boolean_t boStatusRead;
    boolean_t boTerminate;


    pstHeadNextItem = (SLinkedListItem_t*) 0UL;
    pstItemToRemove = (SLinkedListItem_t*) 0UL;
    pstItemNextItem = (SLinkedListItem_t*) 0UL;
    pstItemNextNextItem = (SLinkedListItem_t*) 0UL;
    pstHeadData = (SLinkedListItem_t*) 0UL;
    pstItemNextItemData = (void*) 0UL;
    pstItemNextItemOwner = (void*) 0UL;
    pstItemItemData = (void*) 0UL;
    pstItemDataTemp = (void*) 0UL;
    uxItemNextItemValue = 0UL;
    uxSizeReg = 0UL;
    boStatusRead = FALSE;
    boTerminate = FALSE;
    enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeReg);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        /*List is empty*/
        if(0UL == uxSizeReg)
        {
            enErrorReg = SLinkedList_enERROR_EMPTY;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = SLinkedList__enGetHead(pstList, &pstHeadData);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList_Item__enGetData(pstHeadData, &pstItemDataTemp);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstItemToRemove = pstHeadData;
                enErrorReg = SLinkedList_Item__enGetNextItem(pstItemToRemove, &pstHeadNextItem);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList__enSetHead(pstList, pstHeadNextItem);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                if(1UL == uxSizeReg)
                {
                    enErrorReg = SLinkedList__enSetTail(pstList, (SLinkedListItem_t*) 0UL);
                }
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList__enIsLastItemRead(pstList, pstItemToRemove, &boStatusRead);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                if(TRUE == boStatusRead)
                {
                    enErrorReg = SLinkedList__enSetLastItemRead(pstList, pstHeadNextItem);
                }
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                boTerminate = TRUE;
            }
        }
    }
    if((SLinkedList_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        enErrorReg = SLinkedList_Item__enGetNextItem(pstItem, &pstItemNextItem);
        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            /*List has only one element*/
            if(0UL == (uintptr_t) pstItemNextItem)
            {
                boTerminate = TRUE;
            }
        }
    }
    if((SLinkedList_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        enErrorReg = SLinkedList_Item__enGetData(pstItemNextItem, &pstItemNextItemData);
        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            enErrorReg = SLinkedList_Item__enGetValue(pstItemNextItem, &uxItemNextItemValue);
        }
        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            enErrorReg = SLinkedList_Item__enGetOwnerList(pstItemNextItem, &pstItemNextItemOwner);
        }

        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            if(REMOVE_CURRENT == uxRemove)
            {
                enErrorReg = SLinkedList_Item__enGetData(pstItem, &pstItemItemData);
                if(SLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = SLinkedList_Item__enSetData(pstItem, pstItemNextItemData);
                }
                if(SLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = SLinkedList_Item__enSetValue(pstItem, uxItemNextItemValue);
                }
                if(SLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = SLinkedList_Item__enSetOwnerList(pstItem, pstItemNextItemOwner);
                }
                if(SLinkedList_enERROR_OK == enErrorReg)
                {
                    pstItemDataTemp = pstItemItemData;
                }
            }
            else
            {
                pstItemDataTemp = pstItemNextItemData;
            }
        }

        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            pstItemToRemove = pstItemNextItem;
            enErrorReg = SLinkedList_Item__enGetNextItem(pstItemToRemove, &pstItemNextNextItem);
        }
        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            enErrorReg = SLinkedList_Item__enSetNextItem(pstItem, pstItemNextNextItem);
        }
        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            if(0UL == (uintptr_t) pstItemToRemove)
            {
                enErrorReg = SLinkedList__enSetTail(pstList, (SLinkedListItem_t*)pstItem);
            }
        }
        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            enErrorReg = SLinkedList__enIsLastItemRead(pstList, pstItemToRemove, &boStatusRead);
        }
        if(SLinkedList_enERROR_OK == enErrorReg)
        {
            if(TRUE == boStatusRead)
            {
                enErrorReg = SLinkedList__enSetLastItemRead(pstList, pstItem);
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pvData)
        {
            *pvData = pstItemDataTemp;
        }
        enErrorReg = SLinkedList_Item__enSetOwnerList(pstItemToRemove,  (void *) 0UL);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enSetNextItem(pstItemToRemove,  (SLinkedListItem_t *) 0UL);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL !=  (uintptr_t)  pstList->pvfDestroyItem)
        {
            enErrorReg = SLinkedList_Item__enSetValue(pstItemToRemove, 0UL);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList_Item__enSetData(pstItemToRemove,  (void *) 0UL);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstList->pvfDestroyItem(pstItemToRemove);
                pstItemToRemove = (SLinkedListItem_t*) 0UL;
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        uxSizeReg--;
        enErrorReg = SLinkedList__enSetSize(pstList, uxSizeReg);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enRemoveNextInList_GetData(SLinkedList_t* pstList, SLinkedListItem_t* pstItem, void** pvData)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemoveGeneric(pstList, pstItem, pvData, REMOVE_NEXT);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enRemoveNextInList(SLinkedList_t* pstList, SLinkedListItem_t* pstItem)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enRemoveNext_GetData(SLinkedListItem_t* pstItem, void** pvData)
{
    SLinkedList_t* pstListReg;
    SLinkedList_nERROR enErrorReg;

    pstListReg = (SLinkedList_t*) 0UL;
    enErrorReg = SLinkedList_Item__enGetOwnerList(pstItem,  (void**) &pstListReg);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enRemoveNext(SLinkedListItem_t* pstItem)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enErrorReg);
}



SLinkedList_nERROR SLinkedList__enRemoveInList_GetData(SLinkedList_t* pstList, SLinkedListItem_t* pstItem, void** pvData)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemoveGeneric(pstList, pstItem, pvData, REMOVE_CURRENT);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enRemoveInList(SLinkedList_t* pstList, SLinkedListItem_t* pstItem)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enRemove_GetData(SLinkedListItem_t* pstItem, void** pvData)
{
    SLinkedList_t* pstListReg;
    SLinkedList_nERROR enErrorReg;

    pstListReg = (SLinkedList_t*) 0UL;
    enErrorReg = SLinkedList_Item__enGetOwnerList(pstItem, (void**) &pstListReg);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enRemove(SLinkedListItem_t* pstItem)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enErrorReg);
}

SLinkedList_nERROR  SLinkedList__enRemoveTail_GetData(SLinkedList_t* pstList, void** pvData)
{
    SLinkedListItem_t* pstEndItem;
    SLinkedListItem_t *pstEndItemTemp;
    UBase_t uxSizeList;
    SLinkedList_nERROR enErrorReg;
    boolean_t boTerminate;

    boTerminate = FALSE;
    uxSizeList = 0UL;
    pstEndItemTemp = (SLinkedListItem_t*) 0UL;
    pstEndItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeList);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(1UL >=  uxSizeList)
        {
            boTerminate = TRUE;
        }
    }
    if((SLinkedList_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        uxSizeList--;
        enErrorReg = SLinkedList__enGetHead(pstList, &pstEndItem);
    }
    if((SLinkedList_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        uxSizeList--;
        while((0UL != uxSizeList) && (SLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = SLinkedList_Item__enGetNextItem(pstEndItem, &pstEndItemTemp);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstEndItem = pstEndItemTemp;
                uxSizeList--;
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enRemoveNextInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enErrorReg);
}

SLinkedList_nERROR  SLinkedList__enRemoveTail(SLinkedList_t* pstList)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemoveTail_GetData(pstList, (void**) 0UL);
    return (enErrorReg);
}


SLinkedList_nERROR  SLinkedList__enRemoveHead_GetData(SLinkedList_t* pstList, void** pvData)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemoveNextInList_GetData(pstList, (SLinkedListItem_t*) 0UL, pvData);
    return (enErrorReg);
}

SLinkedList_nERROR  SLinkedList__enRemoveHead(SLinkedList_t* pstList)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemoveHead_GetData(pstList, (void**) 0UL);
    return (enErrorReg);
}

SLinkedList_nERROR  SLinkedList__enRemovePosition_GetData(SLinkedList_t* pstList, UBase_t uxPosition, void** pvData)
{
    SLinkedListItem_t* pstItem;
    UBase_t uxSizeList;
    SLinkedList_nERROR enErrorReg;
    boolean_t boTerminate;

    boTerminate = FALSE;
    pstItem = (SLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeList);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition >= uxSizeList)
        {
            enErrorReg = SLinkedList_enERROR_RANGE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition)
        {
            boTerminate = TRUE;
        }
    }
    if((SLinkedList_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        enErrorReg = SLinkedList__enGetHead(pstList, &pstItem);
    }
    if((SLinkedList_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        uxPosition--;
        while((0UL != uxPosition) && (SLinkedList_enERROR_OK == enErrorReg))
        {
            SLinkedListItem_t *pstItemTemp = (SLinkedListItem_t*) 0UL;
            enErrorReg = SLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstItem = pstItemTemp;
                uxPosition--;
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enRemoveNextInList_GetData(pstList, pstItem, pvData);
    }
    return (enErrorReg);
}

SLinkedList_nERROR  SLinkedList__enRemovePosition(SLinkedList_t* pstList, UBase_t uxPosition)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enRemovePosition_GetData(pstList, uxPosition, (void**) 0UL);
    return (enErrorReg);
}
