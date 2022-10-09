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

CSLinkedList_nERROR CSLinkedList__enRemoveNextInList_GetData(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem, void** pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedList_nERROR enStatusRead = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstItemToRemove = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstTailItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstHeadItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstItemNextItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstItemToRemoveNextItem = (CSLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0UL;

    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeReg = CSLinkedList__uxGetSize(pstList);
        if(0UL != uxSizeReg)
        {
            enStatus = CSLinkedList_enERROR_OK;
            if((UBase_t) 0UL == (UBase_t) pstItem) /* Remove Head*/
            {
                pstItem = CSLinkedList__pstGetTail(pstList);
            }

            pstItemNextItem = CSLinkedList_Item__pstGetNextItem(pstItem);
            if(0UL != (UBase_t) pvData)
            {
                *pvData = CSLinkedList_Item__pvGetData(pstItemNextItem);
            }
            pstItemToRemove = pstItemNextItem;

            if((UBase_t) pstItem == (UBase_t) pstItemToRemove) /*Remove Last item*/
            {
                CSLinkedList__vSetTail(pstList, (CSLinkedListItem_t*)0UL);
                CSLinkedList__vSetHead(pstList, (CSLinkedListItem_t*)0UL);
                CSLinkedList__vSetLastItemRead(pstList, (CSLinkedListItem_t*) 0UL);
            }
            else
            {
                pstItemToRemoveNextItem = CSLinkedList_Item__pstGetNextItem(pstItemToRemove);
                CSLinkedList_Item__vSetNextItem(pstItem, pstItemToRemoveNextItem);

                pstHeadItem = CSLinkedList__pstGetHead(pstList);
                pstTailItem = CSLinkedList__pstGetTail(pstList);
                if((UBase_t) pstItemToRemove == (UBase_t) pstHeadItem)
                {
                    CSLinkedList__vSetHead(pstList, pstItemToRemoveNextItem);
                }
                if((UBase_t) pstItemToRemove == (UBase_t) pstTailItem)
                {
                    CSLinkedList__vSetTail(pstList, pstItem);
                }

                enStatusRead = CSLinkedList__enIsLastItemRead(pstList,pstItemToRemove);
                if((UBase_t) CSLinkedList_enERROR_OK == (UBase_t) enStatusRead)
                {
                    CSLinkedList__vSetLastItemRead(pstList, pstItem);
                }
            }

            CSLinkedList_Item__vSetOwnerList(pstItemToRemove,  (void *) 0UL);
            CSLinkedList_Item__vSetNextItem(pstItemToRemove,  (CSLinkedListItem_t *) 0UL);
            if(0UL !=  (UBase_t)  pstList->pvfDestroyItem)
            {
                CSLinkedList_Item__vSetValue(pstItemToRemove, 0UL);
                CSLinkedList_Item__vSetData(pstItemToRemove,  (void *) 0UL);
                pstList->pvfDestroyItem(pstItemToRemove);
                pstItemToRemove = (CSLinkedListItem_t*) 0UL;
            }

            uxSizeReg--;
            CSLinkedList__vSetSize(pstList, uxSizeReg);
        }
    }
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enRemoveNextInList(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enRemoveNext_GetData(CSLinkedListItem_t* pstItem, void** pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedList_t* pstListReg = (CSLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = CSLinkedList_enERROR_OK;
        pstListReg = (CSLinkedList_t*) CSLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enRemoveNext(CSLinkedListItem_t* pstItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enRemoveNext_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enRemoveInList_GetData(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem, void** pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedList_nERROR enStatusRead = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstItemToRemove = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstHeadNextItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstHeadItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstTailItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstItemNextItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstItemNextNextItem = (CSLinkedListItem_t*) 0UL ;
    void* pstItemNextItemData = (void*) 0UL ;
    void* pstItemNextOwnerList = (void*) 0UL;
    UBase_t uxItemNextItemValue = 0UL ;
    void* pstItemItemData = (void*) 0UL ;
    UBase_t uxItemItemValue = 0UL ;
    UBase_t uxSizeReg = 0UL;

    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeReg = CSLinkedList__uxGetSize(pstList);
        if(0UL != uxSizeReg)
        {
            if((UBase_t) 0UL == (UBase_t) pstItem)
            {
                enStatus = CSLinkedList_enERROR_OK;
                pstHeadItem = CSLinkedList__pstGetHead(pstList);

                pstHeadNextItem = CSLinkedList_Item__pstGetNextItem(pstHeadItem);
                if(0UL != (UBase_t) pvData)
                {
                    *pvData = CSLinkedList_Item__pvGetData(pstHeadItem);
                }
                pstItemToRemove = pstHeadItem;

                if((UBase_t) pstItemToRemove == (UBase_t) pstHeadNextItem) /*Remove Last item*/
                {
                    CSLinkedList__vSetHead(pstList, (CSLinkedListItem_t*) 0UL);
                    CSLinkedList__vSetTail(pstList, (CSLinkedListItem_t*) 0UL);
                    CSLinkedList__vSetLastItemRead(pstList,  (CSLinkedListItem_t*) 0UL);
                }
                else
                {
                    pstTailItem = CSLinkedList__pstGetTail(pstList);
                    CSLinkedList__vSetHead(pstList, pstHeadNextItem);
                    CSLinkedList_Item__vSetNextItem(pstTailItem, pstHeadNextItem);

                    enStatusRead = CSLinkedList__enIsLastItemRead(pstList,pstItemToRemove);
                    if((UBase_t) CSLinkedList_enERROR_OK == (UBase_t) enStatusRead)
                    {
                        CSLinkedList__vSetLastItemRead(pstList, pstTailItem);
                    }
                }

            }
            else
            {
                pstTailItem = CSLinkedList__pstGetTail(pstList);
                if(((UBase_t) pstItem != (UBase_t) pstTailItem) || (1UL == uxSizeReg))
                {
                    enStatus = CSLinkedList_enERROR_OK;

                    pstItemNextItem = CSLinkedList_Item__pstGetNextItem(pstItem);

                    pstItemNextItemData = CSLinkedList_Item__pvGetData(pstItemNextItem);
                    uxItemNextItemValue = CSLinkedList_Item__uxGetValue(pstItemNextItem);
                    pstItemNextOwnerList = CSLinkedList_Item__pvGetOwnerList(pstItemNextItem);

                    pstItemItemData = CSLinkedList_Item__pvGetData(pstItem);
                    uxItemItemValue = CSLinkedList_Item__uxGetValue(pstItem);

                    if(0UL != (UBase_t) pvData)
                    {
                        *pvData = pstItemItemData;
                    }
                    pstItemToRemove = pstItemNextItem;

                    pstItemNextNextItem = CSLinkedList_Item__pstGetNextItem(pstItemNextItem);
                    if((UBase_t) pstItemNextItem == (UBase_t) pstItemNextNextItem) /*Last node*/
                    {
                        CSLinkedList__vSetHead(pstList, (CSLinkedListItem_t*) 0UL);
                        CSLinkedList__vSetTail(pstList, (CSLinkedListItem_t*) 0UL);
                        CSLinkedList__vSetLastItemRead(pstList,  (CSLinkedListItem_t*) 0UL);
                    }
                    else
                    {
                        CSLinkedList_Item__vSetNextItem(pstItem, pstItemNextNextItem);
                        CSLinkedList_Item__vSetData(pstItem, pstItemNextItemData);
                        CSLinkedList_Item__vSetValue(pstItem, uxItemNextItemValue);
                        CSLinkedList_Item__vSetOwnerList(pstItem, pstItemNextOwnerList);

                        CSLinkedList_Item__vSetValue(pstItemToRemove, uxItemItemValue);
                        CSLinkedList_Item__vSetData(pstItemToRemove, pstItemItemData);

                        if((UBase_t) pstTailItem == (UBase_t) pstItemNextItem)
                        {
                            CSLinkedList__vSetTail(pstList, pstItem);
                        }


                        enStatusRead = CSLinkedList__enIsLastItemRead(pstList,pstItemToRemove);
                        if((UBase_t) CSLinkedList_enERROR_OK == (UBase_t) enStatusRead)
                        {
                            CSLinkedList__vSetLastItemRead(pstList, pstItem);
                        }
                    }
                }
            }

            if(CSLinkedList_enERROR_OK == enStatus)
            {
                CSLinkedList_Item__vSetOwnerList(pstItemToRemove,  (void *) 0UL);
                CSLinkedList_Item__vSetNextItem(pstItemToRemove,  (CSLinkedListItem_t *) 0UL);
                if(0UL !=  (UBase_t)  pstList->pvfDestroyItem)
                {
                    CSLinkedList_Item__vSetValue(pstItemToRemove, 0UL);
                    CSLinkedList_Item__vSetData(pstItemToRemove,  (void *) 0UL);
                    pstList->pvfDestroyItem(pstItemToRemove);
                    pstItemToRemove = (CSLinkedListItem_t*) 0UL;
                }

                uxSizeReg--;
                CSLinkedList__vSetSize(pstList, uxSizeReg);
            }
        }
    }
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enRemoveInList(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enRemoveInList_GetData(pstList, pstItem, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enRemove_GetData(CSLinkedListItem_t* pstItem, void** pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedList_t* pstListReg = (CSLinkedList_t*) 0UL;

    if(0UL != (UBase_t) pstItem)
    {
        enStatus = CSLinkedList_enERROR_OK;
        pstListReg = (CSLinkedList_t*) CSLinkedList_Item__pvGetOwnerList(pstItem);
        enStatus = CSLinkedList__enRemoveInList_GetData(pstListReg, pstItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enRemove(CSLinkedListItem_t* pstItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enRemove_GetData(pstItem, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nERROR  CSLinkedList__enRemoveTail_GetData(CSLinkedList_t* pstList, void** pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstEndItem = (CSLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        if(1UL <  uxSizeList)
        {
            uxSizeList--;
            pstEndItem = CSLinkedList__pstGetHead(pstList);
            uxSizeList--;
            while(0UL != uxSizeList)
            {
                pstEndItem = CSLinkedList_Item__pstGetNextItem(pstEndItem);
                uxSizeList--;
            }
        }
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstEndItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nERROR  CSLinkedList__enRemoveTail(CSLinkedList_t* pstList)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enRemoveTail_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nERROR  CSLinkedList__enRemoveHead_GetData(CSLinkedList_t* pstList, void** pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, (CSLinkedListItem_t*) 0UL, pvData);
    }
    return (enStatus);
}

CSLinkedList_nERROR  CSLinkedList__enRemoveHead(CSLinkedList_t* pstList)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enRemoveHead_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nERROR  CSLinkedList__enRemovePos_GetData(CSLinkedList_t* pstList, UBase_t uxPosition, void** pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstItem = (CSLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL != uxPosition)
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                uxPosition--;
                while(0UL != uxPosition)
                {
                    pstItem = CSLinkedList_Item__pstGetNextItem(pstItem);
                    uxPosition--;
                }
            }
            enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstItem, pvData);
        }
    }
    return (enStatus);
}

CSLinkedList_nERROR  CSLinkedList__enRemovePos(CSLinkedList_t* pstList, UBase_t uxPosition)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enRemovePos_GetData(pstList, uxPosition, (void**) 0UL);
    return (enStatus);
}
