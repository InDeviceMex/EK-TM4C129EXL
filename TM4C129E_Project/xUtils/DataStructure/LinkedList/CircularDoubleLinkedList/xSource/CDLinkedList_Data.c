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

void* CDLinkedList__pvGetItemDataPos(const CDLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CDLinkedList__pstGetItemPos(pstList, u32Position);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            pvItemData = CDLinkedList__pvGetItemData(pstItem);
        }
    }
    return (pvItemData);
}

uint32_t CDLinkedList__u32GetItemValuePos(const CDLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemData = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CDLinkedList__pstGetItemPos(pstList, u32Position);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            u32ItemData = CDLinkedList__u32GetItemValue(pstItem);
        }
    }
    return (u32ItemData);
}

void* CDLinkedList__pvGetItemDataEnd(const CDLinkedList_TypeDef* pstList)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CDLinkedList__pstGetItemEnd(pstList);
        if((uint32_t) pstItem != (uint32_t) 0UL)
        {
            pvItemData = CDLinkedList__pvGetItemData(pstItem);
        }
    }
    return (pvItemData);
}

uint32_t CDLinkedList__u32GetItemValueEnd(const CDLinkedList_TypeDef* pstList)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemValue = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CDLinkedList__pstGetItemEnd(pstList);
        if((uint32_t) pstItem != (uint32_t) 0UL)
        {
            u32ItemValue = CDLinkedList__u32GetItemValue(pstItem);
        }
    }
    return (u32ItemValue);
}

void* CDLinkedList__pvGetItemDataBegin(const CDLinkedList_TypeDef* pstList)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CDLinkedList__pstGetItemBegin(pstList);
        if((uint32_t) pstItem != (uint32_t) 0UL)
        {
            pvItemData = CDLinkedList__pvGetItemData(pstItem);
        }
    }
    return (pvItemData);
}

uint32_t CDLinkedList__u32GetItemValueBegin(const CDLinkedList_TypeDef* pstList)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemValue = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CDLinkedList__pstGetItemBegin(pstList);
        if((uint32_t) pstItem != (uint32_t) 0UL)
        {
            u32ItemValue = CDLinkedList__u32GetItemValue(pstItem);
        }
    }
    return (u32ItemValue);
}
