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
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    SLinkedList_nERROR enStatusRead = SLinkedList_enSTATUS_UNDEF;
    SLinkedListItem_t* pstItemToRemove = (SLinkedListItem_t*) 0UL ;
    SLinkedListItem_t* pstHeadNextItem = (SLinkedListItem_t*) 0UL ;
    SLinkedListItem_t* pstHeadData = (SLinkedListItem_t*) 0UL ;
    SLinkedListItem_t* pstItemNextItem = (SLinkedListItem_t*) 0UL ;
    SLinkedListItem_t* pstItemNextNextItem = (SLinkedListItem_t*) 0UL ;
    void* pstItemNextItemData = (void*) 0UL ;
    UBase_t uxItemNextItemValue = 0UL ;
    void* pstItemNextItemOwner = (void*) 0UL ;

    void* pstItemItemData = (void*) 0UL ;

    void* pstItemDataTemp = (void*) 0UL ;

    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeReg = SLinkedList__uxGetSize(pstList);
        if(0UL != uxSizeReg)
        {
            if((UBase_t) 0UL == (UBase_t) pstItem)
            {
                enStatus = SLinkedList_enERROR_OK;
                pstHeadData = SLinkedList__pstGetHead(pstList);
                pstItemDataTemp = SLinkedList_Item__pvGetData(pstHeadData);
                pstItemToRemove = pstHeadData;
                pstHeadNextItem = SLinkedList_Item__pstGetNextItem(pstItemToRemove);
                SLinkedList__vSetHead(pstList, pstHeadNextItem);
                if(1UL == uxSizeReg)
                {
                    SLinkedList__vSetTail(pstList, (SLinkedListItem_t*)0UL);
                }

                enStatusRead = SLinkedList__enIsLastItemRead(pstList,pstItemToRemove);
                if((UBase_t) SLinkedList_enERROR_OK == (UBase_t) enStatusRead)
                {
                    SLinkedList__vSetLastItemRead(pstList, pstHeadNextItem);
                }
            }
            else
            {
                pstItemNextItem = SLinkedList_Item__pstGetNextItem(pstItem);
                if((UBase_t) 0UL != (UBase_t) pstItemNextItem)
                {
                    enStatus = SLinkedList_enERROR_OK;

                    pstItemNextItemData = SLinkedList_Item__pvGetData(pstItemNextItem);
                    uxItemNextItemValue = SLinkedList_Item__uxGetValue(pstItemNextItem);
                    pstItemNextItemOwner = SLinkedList_Item__pvGetOwnerList(pstItemNextItem);

                    if(REMOVE_CURRENT == uxRemove)
                    {
                        pstItemItemData = SLinkedList_Item__pvGetData(pstItem);

                        SLinkedList_Item__vSetData(pstItem, pstItemNextItemData);
                        SLinkedList_Item__vSetValue(pstItem, uxItemNextItemValue);
                        SLinkedList_Item__vSetOwnerList(pstItem, pstItemNextItemOwner);

                        pstItemDataTemp = pstItemItemData;
                    }
                    else
                    {
                        pstItemDataTemp = pstItemNextItemData;
                    }

                    pstItemToRemove = pstItemNextItem;
                    pstItemNextNextItem = SLinkedList_Item__pstGetNextItem(pstItemToRemove);

                    SLinkedList_Item__vSetNextItem(pstItem, pstItemNextNextItem);

                    if((UBase_t) 0UL == (UBase_t) pstItemToRemove)
                    {
                        SLinkedList__vSetTail(pstList, (SLinkedListItem_t*)pstItem);
                    }

                    enStatusRead = SLinkedList__enIsLastItemRead(pstList,pstItemToRemove);
                    if((UBase_t) SLinkedList_enERROR_OK == (UBase_t) enStatusRead)
                    {
                        SLinkedList__vSetLastItemRead(pstList, pstItem);
                    }
                }
            }

            if(SLinkedList_enERROR_OK == enStatus)
            {
                if(0UL != (UBase_t) pvData)
                {
                    *pvData = pstItemDataTemp;
                }

                SLinkedList_Item__vSetOwnerList(pstItemToRemove,  (void *) 0UL);
                SLinkedList_Item__vSetNextItem(pstItemToRemove,  (SLinkedListItem_t *) 0UL);
                if(0UL !=  (UBase_t)  pstList->pvfDestroyItem)
                {
                    SLinkedList_Item__vSetValue(pstItemToRemove, 0UL);
                    SLinkedList_Item__vSetData(pstItemToRemove,  (void *) 0UL);
                    pstList->pvfDestroyItem(pstItemToRemove);
                    pstItemToRemove = (SLinkedListItem_t*) 0UL;
                }

                uxSizeReg--;
                SLinkedList__vSetSize(pstList, uxSizeReg);
            }
        }
    }
    return (enStatus);
}

SLinkedList_nERROR SLinkedList__enRemoveNextInList_GetData(SLinkedList_t* pstList, SLinkedListItem_t* pstItem, void** pvData)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemoveGeneric(pstList, pstItem, pvData, REMOVE_NEXT);
    return (enStatus);
}

SLinkedList_nERROR SLinkedList__enRemoveNextInList(SLinkedList_t* pstList, SLinkedListItem_t* pstItem)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

SLinkedList_nERROR SLinkedList__enRemoveNext_GetData(SLinkedListItem_t* pstItem, void** pvData)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    SLinkedList_t* pstListReg = (SLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = SLinkedList_enERROR_OK;
        pstListReg = (SLinkedList_t*) SLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = SLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

SLinkedList_nERROR SLinkedList__enRemoveNext(SLinkedListItem_t* pstItem)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}



SLinkedList_nERROR SLinkedList__enRemoveInList_GetData(SLinkedList_t* pstList, SLinkedListItem_t* pstItem, void** pvData)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemoveGeneric(pstList, pstItem, pvData, REMOVE_CURRENT);
    return (enStatus);
}

SLinkedList_nERROR SLinkedList__enRemoveInList(SLinkedList_t* pstList, SLinkedListItem_t* pstItem)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

SLinkedList_nERROR SLinkedList__enRemove_GetData(SLinkedListItem_t* pstItem, void** pvData)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    SLinkedList_t* pstListReg = (SLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = SLinkedList_enERROR_OK;
        pstListReg = (SLinkedList_t*) SLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = SLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

SLinkedList_nERROR SLinkedList__enRemove(SLinkedListItem_t* pstItem)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}


SLinkedList_nERROR  SLinkedList__enRemoveTail_GetData(SLinkedList_t* pstList, void** pvData)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    SLinkedListItem_t* pstEndItem = (SLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = SLinkedList__uxGetSize(pstList);
        if(1UL <  uxSizeList)
        {
            uxSizeList--;
            pstEndItem = SLinkedList__pstGetHead(pstList);
            uxSizeList--;
            while(0UL != uxSizeList)
            {
                pstEndItem = SLinkedList_Item__pstGetNextItem(pstEndItem);
                uxSizeList--;
            }
        }
        enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enStatus);
}

SLinkedList_nERROR  SLinkedList__enRemoveTail(SLinkedList_t* pstList)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemoveTail_GetData(pstList, (void**) 0UL);
    return (enStatus);
}


SLinkedList_nERROR  SLinkedList__enRemoveHead_GetData(SLinkedList_t* pstList, void** pvData)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, (SLinkedListItem_t*) 0UL, pvData);
    }
    return (enStatus);
}

SLinkedList_nERROR  SLinkedList__enRemoveHead(SLinkedList_t* pstList)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemoveHead_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

SLinkedList_nERROR  SLinkedList__enRemovePos_GetData(SLinkedList_t* pstList, UBase_t uxPosition, void** pvData)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    SLinkedListItem_t* pstItem = (SLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = SLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL != uxPosition)
            {
                pstItem = SLinkedList__pstGetHead(pstList);
                uxPosition--;
                while(0UL != uxPosition)
                {
                    pstItem = SLinkedList_Item__pstGetNextItem(pstItem);
                    uxPosition--;
                }
            }
            enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, pstItem, pvData);
        }
    }
    return (enStatus);
}

SLinkedList_nERROR  SLinkedList__enRemovePos(SLinkedList_t* pstList, UBase_t uxPosition)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    enStatus = SLinkedList__enRemovePos_GetData(pstList, uxPosition, (void**) 0UL);
    return (enStatus);
}
