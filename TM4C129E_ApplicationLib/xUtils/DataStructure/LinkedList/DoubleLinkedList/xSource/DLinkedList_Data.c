/**
 *
 * @file DLinkedList_Data.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Data.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Item.h>

DLinkedList_nERROR DLinkedList__enGetDataItemPosition(const DLinkedList_t* pstList, UBase_t uxPosition, void** pvItemDataArg)
{
    DLinkedListItem_t* pstItem;
    void* pvItemData;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetItemPosition(pstList, uxPosition, &pstItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetDataTail(const DLinkedList_t* pstList, void** pvItemDataArg)
{
    DLinkedListItem_t* pstItem;
    void* pvItemData;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetTail(pstList, &pstItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetDataHead(const DLinkedList_t* pstList, void** pvItemDataArg)
{
    DLinkedListItem_t* pstItem;
    void* pvItemData;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}


DLinkedList_nERROR DLinkedList__uxGetValueItemPosition(const DLinkedList_t* pstList, UBase_t uxPosition, UBase_t* uxItemValueArg)
{
    DLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetItemPosition(pstList, uxPosition, &pstItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetValueTail(const DLinkedList_t* pstList, UBase_t* uxItemValueArg)
{
    DLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetTail(pstList, &pstItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetValueHead(const DLinkedList_t* pstList, UBase_t* uxItemValueArg)
{
    DLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetDataNextItem(DLinkedList_t* pstList, void** pvItemDataArg)
{
    DLinkedListItem_t* pstLastItemReg;
    DLinkedListItem_t* pstNextItemReg;
    void* pvItemData;
    DLinkedList_nERROR enErrorReg;

    pstLastItemReg = (DLinkedListItem_t*) 0UL;
    pstNextItemReg = (DLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemReg);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pstLastItemReg)
        {
            enErrorReg = DLinkedList_Item__enGetNextItem(pstLastItemReg, &pstNextItemReg);
        }
        else
        {
            enErrorReg = DLinkedList__enGetHead(pstList, &pstNextItemReg);
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enSetLastItemRead(pstList, pstNextItemReg);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetData(pstNextItemReg, &pvItemData);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetDataPreviousItem(DLinkedList_t* pstList, void** pvItemDataArg)
{
    DLinkedListItem_t* pstLastItemReg;
    DLinkedListItem_t* pstPreviousItemReg;
    void* pvItemData;
    DLinkedList_nERROR enErrorReg;

    pstLastItemReg = (DLinkedListItem_t*) 0UL;
    pstPreviousItemReg = (DLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemReg);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pstLastItemReg)
        {
            enErrorReg = DLinkedList_Item__enGetPreviousItem(pstLastItemReg, &pstPreviousItemReg);
        }
        else
        {
            enErrorReg = DLinkedList__enGetTail(pstList, &pstPreviousItemReg);
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enSetLastItemRead(pstList, pstPreviousItemReg);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetData(pstPreviousItemReg, &pvItemData);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}
