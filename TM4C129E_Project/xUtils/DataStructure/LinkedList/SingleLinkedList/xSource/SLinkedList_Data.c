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

void* SLinkedList__pvGetItemDataPos(const SLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = SLinkedList__pstGetItemPos(pstList, u32Position);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            pvItemData = SLinkedList__pvGetItemData(pstItem);
        }
    }
    return (pvItemData);
}

void* SLinkedList__pvGetItemDataEnd(const SLinkedList_TypeDef* pstList)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = SLinkedList__pstGetItemEnd(pstList);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            pvItemData = SLinkedList__pvGetItemData(pstItem);
        }
    }
    return (pvItemData);
}

void* SLinkedList__pvGetItemDataBegin(const SLinkedList_TypeDef* pstList)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    void* pvItemData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = SLinkedList__pstGetItemBegin(pstList);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            pvItemData = SLinkedList__pvGetItemData(pstItem);
        }
    }
    return (pvItemData);
}


uint32_t SLinkedList__u32GetItemValuePos(const SLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemValue = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = SLinkedList__pstGetItemPos(pstList, u32Position);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            u32ItemValue = SLinkedList__u32GetItemValue(pstItem);
        }
    }
    return (u32ItemValue);
}

uint32_t SLinkedList__u32GetItemValueEnd(const SLinkedList_TypeDef* pstList)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemValue = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = SLinkedList__pstGetItemEnd(pstList);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            u32ItemValue = SLinkedList__u32GetItemValue(pstItem);
        }
    }
    return (u32ItemValue);
}

uint32_t SLinkedList__u32GetItemValueBegin(const SLinkedList_TypeDef* pstList)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32ItemValue = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = SLinkedList__pstGetItemBegin(pstList);
        if((uint32_t) 0UL != (uint32_t) pstItem)
        {
            u32ItemValue = SLinkedList__u32GetItemValue(pstItem);
        }
    }
    return (u32ItemValue);
}
