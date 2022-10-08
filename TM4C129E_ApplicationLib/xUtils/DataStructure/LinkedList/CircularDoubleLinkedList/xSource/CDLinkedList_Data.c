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

void* CDLinkedList__pvGetDataItemPos(const CDLinkedList_t* pstList, UBase_t uxPosition)
{
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = CDLinkedList__pstGetItemPos(pstList, uxPosition);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            pvItemData = CDLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

UBase_t CDLinkedList__uxGetValueItemPos(const CDLinkedList_t* pstList, UBase_t uxPosition)
{
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxItemData = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = CDLinkedList__pstGetItemPos(pstList, uxPosition);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            uxItemData = CDLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemData);
}

void* CDLinkedList__pvGetDataTail(const CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = CDLinkedList__pstGetTail(pstList);
        if((UBase_t) pstItem != (UBase_t) 0UL)
        {
            pvItemData = CDLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

UBase_t CDLinkedList__uxGetValueTail(const CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxItemValue = (UBase_t) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = CDLinkedList__pstGetTail(pstList);
        if((UBase_t) pstItem != (UBase_t) 0UL)
        {
            uxItemValue = CDLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemValue);
}

void* CDLinkedList__pvGetDataHead(const CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = CDLinkedList__pstGetHead(pstList);
        if((UBase_t) pstItem != (UBase_t) 0UL)
        {
            pvItemData = CDLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

UBase_t CDLinkedList__uxGetValueHead(const CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxItemValue = (UBase_t) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = CDLinkedList__pstGetHead(pstList);
        if((UBase_t) pstItem != (UBase_t) 0UL)
        {
            uxItemValue = CDLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemValue);
}

void* CDLinkedList__pvGetDataNextItem(CDLinkedList_t* const pstList)
{
    CDLinkedListItem_t* pstLastItemReg = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t* pstNextItemReg = (CDLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstLastItemReg = CDLinkedList__pstGetLastItemRead(pstList);
        if((UBase_t) pstLastItemReg != (UBase_t) 0UL)
        {
            pstNextItemReg = CDLinkedList_Item__pstGetNextItem(pstLastItemReg);
        }
        else
        {
            pstNextItemReg = CDLinkedList__pstGetHead(pstList);
        }
        CDLinkedList__vSetLastItemRead(pstList, pstNextItemReg);
        pvItemData = CDLinkedList_Item__pvGetData(pstNextItemReg);
    }
    return (pvItemData);
}

void* CDLinkedList__pvGetDataPreviousItem(CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstLastItemReg = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t* pstPreviousItemReg = (CDLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstLastItemReg = CDLinkedList__pstGetLastItemRead(pstList);
        if((UBase_t) pstLastItemReg != (UBase_t) 0UL)
        {
            pstPreviousItemReg = CDLinkedList_Item__pstGetPreviousItem(pstLastItemReg);
        }
        else
        {
            pstPreviousItemReg = CDLinkedList__pstGetTail(pstList);
        }
        CDLinkedList__vSetLastItemRead(pstList, pstPreviousItemReg);
        pvItemData = CDLinkedList_Item__pvGetData(pstPreviousItemReg);
    }
    return (pvItemData);
}
