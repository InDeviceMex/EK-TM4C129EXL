/**
 *
 * @file CSLinkedList_Item.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Item.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>

CSLinkedListItem_TypeDef*  CSLinkedList__pstGetItemPos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
            }
            else if((uint32_t) (u32SizeList -1UL) == (uint32_t) u32Position)
            {
                pstItem = CSLinkedList__pstGetTail(pstList);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                while(0UL != u32Position)
                {
                    pstItem = CSLinkedList__pstGetItemNextNode(pstItem);
                    u32Position--;
                }
            }
        }
    }
    return (pstItem);
}

CSLinkedListItem_TypeDef*  CSLinkedList__pstGetItemEnd(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CSLinkedList__pstGetTail(pstList);
    }
    return pstItem;
}

CSLinkedListItem_TypeDef*  CSLinkedList__pstGetItemBegin(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CSLinkedList__pstGetHead(pstList);
    }
    return (pstItem);
}

uint32_t CSLinkedList__u32GetAllItem(const CSLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength)
{
    CSLinkedListItem_TypeDef *pstMember = (CSLinkedListItem_TypeDef*) 0UL;
    CSLinkedListItem_TypeDef *pstMemberTemp = (CSLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
        {
            pvDataMember = CSLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = CSLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CSLinkedList__u32GetAllItem_Value(const CSLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength)
{
    CSLinkedListItem_TypeDef *pstMember = (CSLinkedListItem_TypeDef*) 0UL;
    CSLinkedListItem_TypeDef *pstMemberTemp = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
        {
            pu32ValueMember = CSLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            pstMemberTemp = CSLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CSLinkedList__u32GetNItem(const CSLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Items, uint32_t u32MaxLength)
{
    CSLinkedListItem_TypeDef *pstMember = (CSLinkedListItem_TypeDef*) 0UL;
    CSLinkedListItem_TypeDef *pstMemberTemp = (CSLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Items))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Items))
        {
            pvDataMember = CSLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Items--;
            pstMemberTemp = CSLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CSLinkedList__u32GetNItem_Value(const CSLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Items, uint32_t u32MaxLength)
{
    CSLinkedListItem_TypeDef *pstMember = (CSLinkedListItem_TypeDef*) 0UL;
    CSLinkedListItem_TypeDef *pstMemberTemp = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength) && (0UL != u32Items))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Items))
        {
            pu32ValueMember = CSLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            u32Items--;
            pstMemberTemp = CSLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}
