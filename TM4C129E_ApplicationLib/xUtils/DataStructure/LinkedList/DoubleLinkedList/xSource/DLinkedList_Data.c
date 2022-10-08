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

void* DLinkedList__pvGetDataItemPos(const DLinkedList_t* pstList, UBase_t uxPosition)
{
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = DLinkedList__pstGetItemPos(pstList, uxPosition);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            pvItemData = DLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

void* DLinkedList__pvGetDataTail(const DLinkedList_t* pstList)
{
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = DLinkedList__pstGetTail(pstList);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            pvItemData = DLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

void* DLinkedList__pvGetDataHead(const DLinkedList_t* pstList)
{
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = DLinkedList__pstGetHead(pstList);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            pvItemData = DLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}


UBase_t DLinkedList__uxGetValueItemPos(const DLinkedList_t* pstList, UBase_t uxPosition)
{
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    UBase_t uxItemValue = (UBase_t) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = DLinkedList__pstGetItemPos(pstList, uxPosition);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            uxItemValue = DLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemValue);
}

UBase_t DLinkedList__uxGetValueTail(const DLinkedList_t* pstList)
{
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    UBase_t uxItemValue = (UBase_t) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = DLinkedList__pstGetTail(pstList);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            uxItemValue = DLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemValue);
}

UBase_t DLinkedList__uxGetValueHead(const DLinkedList_t* pstList)
{
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    UBase_t uxItemValue = (UBase_t) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = DLinkedList__pstGetHead(pstList);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            uxItemValue = DLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemValue);
}

void* DLinkedList__pvGetDataNextItem(DLinkedList_t* pstList)
{
    DLinkedListItem_t* pstLastItemReg = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t* pstNextItemReg = (DLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstLastItemReg = DLinkedList__pstGetLastItemRead(pstList);
        if((UBase_t) pstLastItemReg != (UBase_t) 0UL)
        {
            pstNextItemReg = DLinkedList_Item__pstGetNextItem(pstLastItemReg);
        }
        else
        {
            pstNextItemReg = DLinkedList__pstGetHead(pstList);
        }
        DLinkedList__vSetLastItemRead(pstList, pstNextItemReg);
        pvItemData = DLinkedList_Item__pvGetData(pstNextItemReg);
    }
    return (pvItemData);
}

void* DLinkedList__pvGetDataPreviousItem(DLinkedList_t* pstList)
{
    DLinkedListItem_t* pstLastItemReg = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t* pstPreviousItemReg = (DLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstLastItemReg = DLinkedList__pstGetLastItemRead(pstList);
        if((UBase_t) pstLastItemReg != (UBase_t) 0UL)
        {
            pstPreviousItemReg = DLinkedList_Item__pstGetPreviousItem(pstLastItemReg);
        }
        else
        {
            pstPreviousItemReg = DLinkedList__pstGetTail(pstList);
        }
        DLinkedList__vSetLastItemRead(pstList, pstPreviousItemReg);
        pvItemData = DLinkedList_Item__pvGetData(pstPreviousItemReg);
    }
    return (pvItemData);
}
