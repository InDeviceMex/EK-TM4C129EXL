/**
 *
 * @file SLinkedList_Data.c
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Data.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Item.h>

SLinkedList_nERROR SLinkedList__enGetDataItemPosition(const SLinkedList_t* pstList, UBase_t uxPosition, void** pvItemDataArg)
{
    SLinkedListItem_t* pstItem;
    void* pvItemData;
    SLinkedList_nERROR enErrorReg;

    pstItem = (SLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetItemPosition(pstList, uxPosition, &pstItem);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enGetDataTail(const SLinkedList_t* pstList, void** pvItemDataArg)
{
    SLinkedListItem_t* pstItem;
    void* pvItemData;
    SLinkedList_nERROR enErrorReg;

    pstItem = (SLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetTail(pstList, &pstItem);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enGetDataHead(const SLinkedList_t* pstList, void** pvItemDataArg)
{
    SLinkedListItem_t* pstItem;
    void* pvItemData;
    SLinkedList_nERROR enErrorReg;

    pstItem = (SLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetHead(pstList, &pstItem);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enGetData(pstItem, &pvItemData);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}


SLinkedList_nERROR SLinkedList__enGetValueItemPosition(const SLinkedList_t* pstList, UBase_t uxPosition, UBase_t* uxItemValueArg)
{
    SLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    SLinkedList_nERROR enErrorReg;

    pstItem = (SLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetItemPosition(pstList, uxPosition, &pstItem);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enGetValueTail(const SLinkedList_t* pstList, UBase_t* uxItemValueArg)
{
    SLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    SLinkedList_nERROR enErrorReg;

    pstItem = (SLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetTail(pstList, &pstItem);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enGetValueHead(const SLinkedList_t* pstList, UBase_t* uxItemValueArg)
{
    SLinkedListItem_t* pstItem;
    UBase_t uxItemValue;
    SLinkedList_nERROR enErrorReg;

    pstItem = (SLinkedListItem_t*) 0UL;
    uxItemValue = 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) uxItemValueArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetHead(pstList, &pstItem);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enGetValue(pstItem, &uxItemValue);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *uxItemValueArg = uxItemValue;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enGetDataNextItem(SLinkedList_t* pstList, void** pvItemDataArg)
{
    SLinkedListItem_t* pstLastItemReg;
    SLinkedListItem_t* pstNextItemReg;
    void* pvItemData;
    SLinkedList_nERROR enErrorReg;

    pstLastItemReg = (SLinkedListItem_t*) 0UL;
    pstNextItemReg = (SLinkedListItem_t*) 0UL;
    pvItemData = (void*) 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pvItemDataArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetLastItemRead(pstList, &pstLastItemReg);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL != (uintptr_t) pstLastItemReg)
        {
            enErrorReg = SLinkedList_Item__enGetNextItem(pstLastItemReg, &pstNextItemReg);
        }
        else
        {
            enErrorReg = SLinkedList__enGetHead(pstList, &pstNextItemReg);
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enSetLastItemRead(pstList, pstNextItemReg);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enGetData(pstNextItemReg, &pvItemData);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *pvItemDataArg = pvItemData;
    }
    return (enErrorReg);
}
