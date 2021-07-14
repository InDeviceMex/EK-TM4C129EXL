/**
 *
 * @file CSLinkedList_Data.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Data.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Item.h>

void* CSLinkedList__pvGetDataItem(const CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CSLinkedList__pstGetItemPos(pstList, u32Position);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            pvItemData = CSLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

uint32_t CSLinkedList__u32GetValueItem(const CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemValue = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CSLinkedList__pstGetItemPos(pstList, u32Position);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            u32ItemValue = CSLinkedList_Item__u32GetValue(pstItem);
        }
    }
    return (u32ItemValue);
}

void* CSLinkedList__pvGetDataTail(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CSLinkedList__pstGetTailItem(pstList);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            pvItemData = CSLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

uint32_t CSLinkedList__u32GetValueTail(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemValue = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CSLinkedList__pstGetTailItem(pstList);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            u32ItemValue = CSLinkedList_Item__u32GetValue(pstItem);
        }
    }
    return (u32ItemValue);
}

void* CSLinkedList__pvGetDataHead(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CSLinkedList__pstGetHeadItem(pstList);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            pvItemData = CSLinkedList_Item__pvGetData(pstItem);
        }
    }
    return (pvItemData);
}

uint32_t CSLinkedList__u32GetValueHead(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemValue = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CSLinkedList__pstGetHeadItem(pstList);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            u32ItemValue = CSLinkedList_Item__u32GetValue(pstItem);
        }
    }
    return (u32ItemValue);
}

void* CSLinkedList__pvGetDataNextItem(CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstLastItemReg = (CSLinkedListItem_TypeDef*) 0UL;
    CSLinkedListItem_TypeDef* pstNextItemReg = (CSLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstLastItemReg = CSLinkedList__pstGetLastItemRead(pstList);
        if((uint32_t) pstLastItemReg != (uint32_t) 0UL)
        {
            pstNextItemReg = CSLinkedList_Item__pstGetNextItem(pstLastItemReg);
        }
        else
        {
            pstNextItemReg = CSLinkedList__pstGetHeadItem(pstList);
        }
        CSLinkedList__vSetLastItemRead(pstList, pstNextItemReg);
        pvItemData = CSLinkedList_Item__pvGetData(pstNextItemReg);
    }
    return (pvItemData);
}
