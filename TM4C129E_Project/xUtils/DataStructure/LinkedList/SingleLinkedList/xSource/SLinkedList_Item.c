/**
 *
 * @file SLinkedList_Item.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Item.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

SLinkedListItem_TypeDef*  SLinkedList__pstGetItemPos(const SLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstItem = SLinkedList__pstGetHead(pstList);
            }
            else if((uint32_t) (u32SizeList -1UL) == (uint32_t) u32Position)
            {
                pstItem = SLinkedList__pstGetTail(pstList);
            }
            else
            {
                pstItem = SLinkedList__pstGetHead(pstList);
                while(0UL != u32Position)
                {
                    pstItem = SLinkedList__pstGetItemNextNode(pstItem);
                    u32Position--;
                }
            }
        }
    }
    return (pstItem);
}

SLinkedListItem_TypeDef*  SLinkedList__pstGetItemEnd(const SLinkedList_TypeDef* pstList)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = SLinkedList__pstGetTail(pstList);
    }
    return (pstItem);
}

SLinkedListItem_TypeDef*  SLinkedList__pstGetItemBegin(const SLinkedList_TypeDef* pstList)
{
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = SLinkedList__pstGetHead(pstList);
    }
    return (pstItem);
}

uint32_t SLinkedList__u32GetAllItem(const SLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength)
{
    SLinkedListItem_TypeDef *pstMember = (SLinkedListItem_TypeDef*) 0UL;
    SLinkedListItem_TypeDef *pstMemberTemp = (SLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pvDataMember = SLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = SLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t SLinkedList__u32GetNItem(const SLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Items, uint32_t u32MaxLength)
{
    SLinkedListItem_TypeDef *pstMember = (SLinkedListItem_TypeDef*) 0UL;
    SLinkedListItem_TypeDef *pstMemberTemp = (SLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Items))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Items))
        {
            pvDataMember = SLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Items--;
            pstMemberTemp = SLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}



uint32_t SLinkedList__u32GetAllItem_Value(const SLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength)
{
    SLinkedListItem_TypeDef *pstMember = (SLinkedListItem_TypeDef*) 0UL;
    SLinkedListItem_TypeDef *pstMemberTemp = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pu32ValueMember = SLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            pstMemberTemp = SLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t SLinkedList__u32GetNItem_Value(const SLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Items, uint32_t u32MaxLength)
{
    SLinkedListItem_TypeDef *pstMember = (SLinkedListItem_TypeDef*) 0UL;
    SLinkedListItem_TypeDef *pstMemberTemp = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength) && (0UL != u32Items))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Items))
        {
            pu32ValueMember = SLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            u32Items--;
            pstMemberTemp = SLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

