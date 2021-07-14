/**
 *
 * @file DLinkedList_Node.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

DLinkedListItem_TypeDef*  DLinkedList__pstGetNodePos(const DLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    DLinkedListItem_TypeDef* pstItem = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = DLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstItem = DLinkedList__pstGetHead(pstList);
            }
            else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL))
            {
                pstItem = DLinkedList__pstGetTail(pstList);
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

                if(0UL == u32Direction) /*Forward*/
                {
                    pstItem = DLinkedList__pstGetHead(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList__pstGetItemNextNode(pstItem);
                        u32SizeOptimum--;
                    }
                }
                else /*Backward*/
                {
                    pstItem = DLinkedList__pstGetTail(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                }
            }
        }
    }
    return (pstItem);
}

DLinkedListItem_TypeDef*  DLinkedList__pstGetNodeEnd(const DLinkedList_TypeDef* pstList)
{
    DLinkedListItem_TypeDef* pstItem = (DLinkedListItem_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = DLinkedList__pstGetTail(pstList);
    }
    return (pstItem);
}

DLinkedListItem_TypeDef*  DLinkedList__pstGetNodeBegin(const DLinkedList_TypeDef* pstList)
{
    DLinkedListItem_TypeDef* pstItem = (DLinkedListItem_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstItem = DLinkedList__pstGetHead(pstList);
    }
    return (pstItem);
}

uint32_t DLinkedList__u32GetAllNode(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength)
{
    DLinkedListItem_TypeDef *pstMember = (DLinkedListItem_TypeDef*) 0UL;
    DLinkedListItem_TypeDef *pstMemberTemp = (DLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pvDataMember = DLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = DLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetAllNode_Value(const DLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength)
{
    DLinkedListItem_TypeDef *pstMember = (DLinkedListItem_TypeDef*) 0UL;
    DLinkedListItem_TypeDef *pstMemberTemp = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pu32ValueMember = DLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            pstMemberTemp = DLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}


uint32_t DLinkedList__u32GetAllNodeBackward(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength)
{
    DLinkedListItem_TypeDef *pstMember = (DLinkedListItem_TypeDef*) 0UL;
    DLinkedListItem_TypeDef *pstMemberTemp = (DLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pvDataMember = DLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = DLinkedList__pstGetItemPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetAllNodeBackward_Value(const DLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength)
{
    DLinkedListItem_TypeDef *pstMember = (DLinkedListItem_TypeDef*) 0UL;
    DLinkedListItem_TypeDef *pstMemberTemp = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pu32ValueMember = DLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            pstMemberTemp = DLinkedList__pstGetItemPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetNNode(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    DLinkedListItem_TypeDef *pstMember = (DLinkedListItem_TypeDef*) 0UL;
    DLinkedListItem_TypeDef *pstMemberTemp = (DLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pvDataMember = DLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = DLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetNNode_Value(const DLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    DLinkedListItem_TypeDef *pstMember = (DLinkedListItem_TypeDef*) 0UL;
    DLinkedListItem_TypeDef *pstMemberTemp = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pu32ValueMember = DLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = DLinkedList__pstGetItemNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetNNodeBackward(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    DLinkedListItem_TypeDef *pstMember = (DLinkedListItem_TypeDef*) 0UL;
    DLinkedListItem_TypeDef *pstMemberTemp = (DLinkedListItem_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pvDataMember = DLinkedList__pvGetItemData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = DLinkedList__pstGetItemPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetNNodeBackward_Value(const DLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    DLinkedListItem_TypeDef *pstMember = (DLinkedListItem_TypeDef*) 0UL;
    DLinkedListItem_TypeDef *pstMemberTemp = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t pu32ValueMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32Value ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pu32ValueMember = DLinkedList__u32GetItemValue(pstMember);
            *pu32Value = pu32ValueMember;
            u32SizeReg++;
            pu32Value += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = DLinkedList__pstGetItemPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

