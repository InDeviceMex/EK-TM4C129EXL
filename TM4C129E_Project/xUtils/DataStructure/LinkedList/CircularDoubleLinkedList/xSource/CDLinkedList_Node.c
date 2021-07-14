/**
 *
 * @file CDLinkedList_Node.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/CDLinkedList_Intrinsics.h>

CDLinkedListItem_TypeDef*  CDLinkedList__pstGetNodePos(const CDLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstItem = CDLinkedList__pstGetHead(pstList);
            }
            else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL))
            {
                pstItem = CDLinkedList__pstGetTail(pstList);
            }
            else
            {
                u32SizeBackward = u32SizeList - u32Position;
                u32SizeForward = u32Position;
                if(u32SizeForward > u32SizeBackward)
                {
                    u32SizeOptimum = u32SizeBackward;
                    u32Direction = 1UL;
                }
                else
                {
                    u32SizeOptimum = u32SizeForward;
                    u32Direction = 0UL;
                }

                if(u32Direction == 0UL) /*Forward*/
                {
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemNextNode(pstItem);
                        u32SizeOptimum--;
                    }
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                }
            }
        }
    }
    return (pstItem);
}

CDLinkedListItem_TypeDef*  CDLinkedList__pstGetNodeEnd(const CDLinkedList_TypeDef* pstList)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CDLinkedList__pstGetTail(pstList);
    }
    return (pstItem);
}

CDLinkedListItem_TypeDef*  CDLinkedList__pstGetNodeBegin(const CDLinkedList_TypeDef* pstList)
{
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = CDLinkedList__pstGetHead(pstList);
    }
    return pstItem;
}

uint32_t CDLinkedList__u32GetAllNode(const CDLinkedList_TypeDef* pstList, const void** pvData, uint32_t u32MaxLength)
{
    CDLinkedListItem_TypeDef *pstMember = (CDLinkedListItem_TypeDef*) 0UL;
    CDLinkedListItem_TypeDef *pstMemberTemp = (CDLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = CDLinkedList__pstGetHead(pstList);
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
        {
            pvDataMember = CDLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = CDLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CDLinkedList__u32GetAllNode_Value(const CDLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength)
{
    CDLinkedListItem_TypeDef *pstMember = (CDLinkedListItem_TypeDef*) 0UL;
    CDLinkedListItem_TypeDef *pstMemberTemp = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength))
    {
        pstMember = CDLinkedList__pstGetHead(pstList);
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
        {
            pu32ValueMember = CDLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            pstMemberTemp = CDLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CDLinkedList__u32GetAllNodeBackward(const CDLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength)
{
    CDLinkedListItem_TypeDef *pstMember = (CDLinkedListItem_TypeDef*) 0UL;
    CDLinkedListItem_TypeDef *pstMemberTemp = (CDLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = CDLinkedList__pstGetTail(pstList);
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
        {
            pvDataMember = CDLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = CDLinkedList__pstGetItemPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CDLinkedList__u32GetAllNodeBackward_Value(const CDLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength)
{
    CDLinkedListItem_TypeDef *pstMember = (CDLinkedListItem_TypeDef*) 0UL;
    CDLinkedListItem_TypeDef *pstMemberTemp = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength))
    {
        pstMember = CDLinkedList__pstGetTail(pstList);
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
        {
            pu32ValueMember = CDLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            pstMemberTemp = CDLinkedList__pstGetItemPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CDLinkedList__u32GetNNode(const CDLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    CDLinkedListItem_TypeDef *pstMember = (CDLinkedListItem_TypeDef*) 0UL;
    CDLinkedListItem_TypeDef *pstMemberTemp = (CDLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = CDLinkedList__pstGetHead(pstList);
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Nodes))
        {
            pvDataMember = CDLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = CDLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CDLinkedList__u32GetNNode_Value(const CDLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    CDLinkedListItem_TypeDef *pstMember = (CDLinkedListItem_TypeDef*) 0UL;
    CDLinkedListItem_TypeDef *pstMemberTemp = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = CDLinkedList__pstGetHead(pstList);
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Nodes))
        {
            pu32ValueMember = CDLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = CDLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CDLinkedList__u32GetNNodeBackward(const CDLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    CDLinkedListItem_TypeDef *pstMember = (CDLinkedListItem_TypeDef*) 0UL;
    CDLinkedListItem_TypeDef *pstMemberTemp = (CDLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = CDLinkedList__pstGetTail(pstList);
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Nodes))
        {
            pvDataMember = CDLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = CDLinkedList__pstGetItemPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CDLinkedList__u32GetNNodeBackward_Value(const CDLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    CDLinkedListItem_TypeDef *pstMember = (CDLinkedListItem_TypeDef*) 0UL;
    CDLinkedListItem_TypeDef *pstMemberTemp = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = CDLinkedList__pstGetTail(pstList);
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Nodes))
        {
            pu32ValueMember = CDLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = CDLinkedList__pstGetItemPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}
