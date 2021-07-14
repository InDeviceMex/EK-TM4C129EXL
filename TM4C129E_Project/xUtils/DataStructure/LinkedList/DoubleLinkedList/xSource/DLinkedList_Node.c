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

DLinkedListElement_TypeDef*  DLinkedList__pstGetNodePos(const DLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL;
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
                pstElement = DLinkedList__pstGetHead(pstList);
            }
            else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL))
            {
                pstElement = DLinkedList__pstGetTail(pstList);
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
                    pstElement = DLinkedList__pstGetHead(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                }
                else /*Backward*/
                {
                    pstElement = DLinkedList__pstGetTail(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                }
            }
        }
    }
    return (pstElement);
}

DLinkedListElement_TypeDef*  DLinkedList__pstGetNodeEnd(const DLinkedList_TypeDef* pstList)
{
    DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = DLinkedList__pstGetTail(pstList);
    }
    return (pstElement);
}

DLinkedListElement_TypeDef*  DLinkedList__pstGetNodeBegin(const DLinkedList_TypeDef* pstList)
{
    DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = DLinkedList__pstGetHead(pstList);
    }
    return (pstElement);
}

uint32_t DLinkedList__u32GetAllNode(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength)
{
    DLinkedListElement_TypeDef *pstMember = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef *pstMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pvDataMember = DLinkedList__pvGetElementData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = DLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetAllNode_DataAuxiliar(const DLinkedList_TypeDef* pstList, uint32_t* pu32DataAuxiliar, uint32_t u32MaxLength)
{
    DLinkedListElement_TypeDef *pstMember = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef *pstMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
    uint32_t pu32DataAuxiliarMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32DataAuxiliar ) && (0UL != u32MaxLength))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pu32DataAuxiliarMember = DLinkedList__u32GetElementDataAuxiliar(pstMember);
            *pu32DataAuxiliar = pu32DataAuxiliarMember;
            u32SizeReg++;
            pu32DataAuxiliar += 1U;
            u32MaxLength--;
            pstMemberTemp = DLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}


uint32_t DLinkedList__u32GetAllNodeBackward(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength)
{
    DLinkedListElement_TypeDef *pstMember = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef *pstMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pvDataMember = DLinkedList__pvGetElementData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = DLinkedList__pstGetElementPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetAllNodeBackward_DataAuxiliar(const DLinkedList_TypeDef* pstList, uint32_t* pu32DataAuxiliar, uint32_t u32MaxLength)
{
    DLinkedListElement_TypeDef *pstMember = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef *pstMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
    uint32_t pu32DataAuxiliarMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32DataAuxiliar ) && (0UL != u32MaxLength))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pu32DataAuxiliarMember = DLinkedList__u32GetElementDataAuxiliar(pstMember);
            *pu32DataAuxiliar = pu32DataAuxiliarMember;
            u32SizeReg++;
            pu32DataAuxiliar += 1U;
            u32MaxLength--;
            pstMemberTemp = DLinkedList__pstGetElementPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetNNode(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    DLinkedListElement_TypeDef *pstMember = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef *pstMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pvDataMember = DLinkedList__pvGetElementData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = DLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetNNode_DataAuxiliar(const DLinkedList_TypeDef* pstList, uint32_t* pu32DataAuxiliar, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    DLinkedListElement_TypeDef *pstMember = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef *pstMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
    uint32_t pu32DataAuxiliarMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32DataAuxiliar ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pu32DataAuxiliarMember = DLinkedList__u32GetElementDataAuxiliar(pstMember);
            *pu32DataAuxiliar = pu32DataAuxiliarMember;
            u32SizeReg++;
            pu32DataAuxiliar += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = DLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetNNodeBackward(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    DLinkedListElement_TypeDef *pstMember = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef *pstMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pvDataMember = DLinkedList__pvGetElementData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = DLinkedList__pstGetElementPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t DLinkedList__u32GetNNodeBackward_DataAuxiliar(const DLinkedList_TypeDef* pstList, uint32_t* pu32DataAuxiliar, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    DLinkedListElement_TypeDef *pstMember = (DLinkedListElement_TypeDef*) 0UL;
    DLinkedListElement_TypeDef *pstMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
    uint32_t pu32DataAuxiliarMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32DataAuxiliar ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pu32DataAuxiliarMember = DLinkedList__u32GetElementDataAuxiliar(pstMember);
            *pu32DataAuxiliar = pu32DataAuxiliarMember;
            u32SizeReg++;
            pu32DataAuxiliar += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = DLinkedList__pstGetElementPreviousNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

