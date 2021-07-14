/**
 *
 * @file CSLinkedList_Node.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>

CSLinkedListElement_TypeDef*  CSLinkedList__pstGetNodePos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstElement = CSLinkedList__pstGetHead(pstList);
            }
            else if((uint32_t) (u32SizeList -1UL) == (uint32_t) u32Position)
            {
                pstElement = CSLinkedList__pstGetTail(pstList);
            }
            else
            {
                pstElement = CSLinkedList__pstGetHead(pstList);
                while(0UL != u32Position)
                {
                    pstElement = CSLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
            }
        }
    }
    return (pstElement);
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstGetNodeEnd(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = CSLinkedList__pstGetTail(pstList);
    }
    return pstElement;
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstGetNodeBegin(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = CSLinkedList__pstGetHead(pstList);
    }
    return (pstElement);
}

uint32_t CSLinkedList__u32GetAllNode(const CSLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength)
{
    CSLinkedListElement_TypeDef *pstMember = (CSLinkedListElement_TypeDef*) 0UL;
    CSLinkedListElement_TypeDef *pstMemberTemp = (CSLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
        {
            pvDataMember = CSLinkedList__pvGetElementData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = CSLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CSLinkedList__u32GetAllNode_DataAuxiliar(const CSLinkedList_TypeDef* pstList, uint32_t* pu32DataAuxiliar, uint32_t u32MaxLength)
{
    CSLinkedListElement_TypeDef *pstMember = (CSLinkedListElement_TypeDef*) 0UL;
    CSLinkedListElement_TypeDef *pstMemberTemp = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t pu32DataAuxiliarMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32DataAuxiliar ) && (0UL != u32MaxLength))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
        {
            pu32DataAuxiliarMember = CSLinkedList__u32GetElementDataAuxiliar(pstMember);
            *pu32DataAuxiliar = pu32DataAuxiliarMember;
            u32SizeReg++;
            pu32DataAuxiliar += 1U;
            u32MaxLength--;
            pstMemberTemp = CSLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CSLinkedList__u32GetNNode(const CSLinkedList_TypeDef* pstList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    CSLinkedListElement_TypeDef *pstMember = (CSLinkedListElement_TypeDef*) 0UL;
    CSLinkedListElement_TypeDef *pstMemberTemp = (CSLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Nodes))
        {
            pvDataMember = CSLinkedList__pvGetElementData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = CSLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}

uint32_t CSLinkedList__u32GetNNode(const CSLinkedList_TypeDef* pstList, const uint32_t* pu32DataAuxiliar, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    CSLinkedListElement_TypeDef *pstMember = (CSLinkedListElement_TypeDef*) 0UL;
    CSLinkedListElement_TypeDef *pstMemberTemp = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t pu32DataAuxiliarMember = (uint32_t)0UL;
    uint32_t u32SizeReg = 0UL;
    uint32_t u32SizeList = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pu32DataAuxiliar ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Nodes))
        {
            pu32DataAuxiliarMember = CSLinkedList__u32GetElementDataAuxiliar(pstMember);
            *pu32DataAuxiliar = pu32DataAuxiliarMember;
            u32SizeReg++;
            pu32DataAuxiliar += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = CSLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (u32SizeReg);
}
