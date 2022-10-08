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

void* SLinkedList__pvGetDataItemPos(const SLinkedList_t* pstList, UBase_t uxPosition)
{
    SLinkedListItem_t* pstItem = (SLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = SLinkedList__pstGetItemPos(pstList, uxPosition);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            pvItemData = SLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

void* SLinkedList__pvGetDataTail(const SLinkedList_t* pstList)
{
    SLinkedListItem_t* pstItem = (SLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = SLinkedList__pstGetTail(pstList);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            pvItemData = SLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

void* SLinkedList__pvGetDataHead(const SLinkedList_t* pstList)
{
    SLinkedListItem_t* pstItem = (SLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = SLinkedList__pstGetHead(pstList);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            pvItemData = SLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}


UBase_t SLinkedList__uxGetValueItemPos(const SLinkedList_t* pstList, UBase_t uxPosition)
{
    SLinkedListItem_t* pstItem = (SLinkedListItem_t*) 0UL;
    UBase_t uxItemValue = (UBase_t) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = SLinkedList__pstGetItemPos(pstList, uxPosition);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            uxItemValue = SLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemValue);
}

UBase_t SLinkedList__uxGetValueTail(const SLinkedList_t* pstList)
{
    SLinkedListItem_t* pstItem = (SLinkedListItem_t*) 0UL;
    UBase_t uxItemValue = (UBase_t) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = SLinkedList__pstGetTail(pstList);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            uxItemValue = SLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemValue);
}

UBase_t SLinkedList__uxGetValueHead(const SLinkedList_t* pstList)
{
    SLinkedListItem_t* pstItem = (SLinkedListItem_t*) 0UL;
    UBase_t uxItemValue = (UBase_t) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstItem = SLinkedList__pstGetHead(pstList);
        if((UBase_t) 0UL != (UBase_t) pstItem)
        {
            uxItemValue = SLinkedList_Item__uxGetValue(pstItem);
        }
    }
    return (uxItemValue);
}

void* SLinkedList__pvGetDataNextItem(SLinkedList_t* pstList)
{
    SLinkedListItem_t* pstLastItemReg = (SLinkedListItem_t*) 0UL;
    SLinkedListItem_t* pstNextItemReg = (SLinkedListItem_t*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        pstLastItemReg = SLinkedList__pstGetLastItemRead(pstList);
        if((UBase_t) pstLastItemReg != (UBase_t) 0UL)
        {
            pstNextItemReg = SLinkedList_Item__pstGetNextItem(pstLastItemReg);
        }
        else
        {
            pstNextItemReg = SLinkedList__pstGetHead(pstList);
        }
        SLinkedList__vSetLastItemRead(pstList, pstNextItemReg);
        pvItemData = SLinkedList_Item__pvGetData(pstNextItemReg);
    }
    return (pvItemData);
}
