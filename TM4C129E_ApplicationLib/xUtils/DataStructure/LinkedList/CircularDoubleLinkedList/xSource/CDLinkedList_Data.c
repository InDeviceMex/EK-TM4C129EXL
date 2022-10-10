/**
 *
 * @file CDLinkedList_Data.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Data.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/CDLinkedList_Intrinsics.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Item.h>

CDLinkedList_nERROR CDLinkedList__enGetDataItemPosition(const CDLinkedList_t* pstList, UBase_t uxPosition, void** pvItemDataArg)
{
    CDLinkedListItem_t* pstItem;
    void* pvItemData;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetItemPosition(pstList, uxPosition, &pstItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetValueItemPosition(const CDLinkedList_t* pstList, UBase_t uxPosition, UBase_t* uxItemValueArg)
{
    CDLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetItemPosition(pstList, uxPosition, &pstItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetDataTail(const CDLinkedList_t* pstList, void** pvItemDataArg)
{
    CDLinkedListItem_t* pstItem;
    void* pvItemData;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetTail(pstList, &pstItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetValueTail(const CDLinkedList_t* pstList, UBase_t* uxItemValueArg)
{
    CDLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetTail(pstList, &pstItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enGetDataHead(const CDLinkedList_t* pstList, void** pvItemDataArg)
{
    CDLinkedListItem_t* pstItem;
    void* pvItemData;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetValueHead(const CDLinkedList_t* pstList, UBase_t* uxItemValueArg)
{
    CDLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetDataNextItem(CDLinkedList_t* const pstList, void** pvItemDataArg)
{
    CDLinkedListItem_t* pstLastItemReg;
    CDLinkedListItem_t* pstNextItemReg;
    void* pvItemData;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemReg = (CDLinkedListItem_t*) 0UL;
    pstNextItemReg = (CDLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemReg);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pstLastItemReg)
        {
            enErrorReg = CDLinkedList_Item__enGetNextItem(pstLastItemReg, &pstNextItemReg);
        }
        else
        {
            enErrorReg = CDLinkedList__enGetHead(pstList, &pstNextItemReg);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enSetLastItemRead(pstList, pstNextItemReg);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetData(pstNextItemReg, &pvItemData);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetDataPreviousItem(CDLinkedList_t* pstList, void** pvItemDataArg)
{
    CDLinkedListItem_t* pstLastItemReg;
    CDLinkedListItem_t* pstPreviousItemReg;
    void* pvItemData;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemReg = (CDLinkedListItem_t*) 0UL;
    pstPreviousItemReg = (CDLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemReg);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if((UBase_t) pstLastItemReg != (UBase_t) 0UL)
        {
            enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstLastItemReg, &pstPreviousItemReg);
        }
        else
        {
            enErrorReg = CDLinkedList__enGetTail(pstList, &pstPreviousItemReg);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enSetLastItemRead(pstList, pstPreviousItemReg);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enGetData(pstPreviousItemReg, &pvItemData);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}
