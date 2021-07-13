/**
 *
 * @file SLinkedList_Node.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

SLinkedListElement_TypeDef*  SLinkedList__pstGetNodePos(const SLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstElement = SLinkedList__pstGetHead(pstList);
            }
            else if((uint32_t) (u32SizeList -1UL) == (uint32_t) u32Position)
            {
                pstElement = SLinkedList__pstGetTail(pstList);
            }
            else
            {
                pstElement = SLinkedList__pstGetHead(pstList);
                while(0UL != u32Position)
                {
                    pstElement = SLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
            }
        }
    }
    return pstElement;
}


SLinkedListElement_TypeDef*  SLinkedList__pstGetNodeEnd(const SLinkedList_TypeDef* pstList)
{
    SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = SLinkedList__pstGetTail(pstList);
    }
    return pstElement;
}

SLinkedListElement_TypeDef*  SLinkedList__pstGetNodeBegin(const SLinkedList_TypeDef* pstList)
{
    SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL ;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = SLinkedList__pstGetHead(pstList);
    }
    return pstElement;
}

uint32_t SLinkedList__u32GetAllNode(const SLinkedList_TypeDef* pstList, const void** pvData, uint32_t u32MaxLength)
{
    SLinkedListElement_TypeDef *pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength))
        {
            pvDataMember = SLinkedList__pvGetElementData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            pstMemberTemp = SLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return u32SizeReg;
}

uint32_t SLinkedList__u32GetNNode(const SLinkedList_TypeDef* pstList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
{
    SLinkedListElement_TypeDef *pstMember = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
    void* pvDataMember = (void*)0UL;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((uint32_t) 0UL != (uint32_t) pstMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
        {
            pvDataMember = SLinkedList__pvGetElementData(pstMember);
            *pvData = pvDataMember;
            u32SizeReg++;
            pvData += 1U;
            u32MaxLength--;
            u32Nodes--;
            pstMemberTemp = SLinkedList__pstGetElementNextNode(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return u32SizeReg;
}
