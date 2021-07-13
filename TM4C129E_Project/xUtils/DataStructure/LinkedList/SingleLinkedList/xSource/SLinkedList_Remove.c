/**
 *
 * @file SLinkedList_Remove.c
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

#define REMOVE_NEXT (1UL)
#define REMOVE_CURRENT (0UL)

static SLinkedList_nSTATUS SLinkedList__enRemoveGeneric(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstElement, void** pvData, uint32_t u32Remove);

static SLinkedList_nSTATUS SLinkedList__enRemoveGeneric(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstElement, void** pvData, uint32_t u32Remove)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstOldElement = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstHeadNextNode = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstHeadData = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstElementNextNode = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstElementNextNextNode = (SLinkedListElement_TypeDef*) 0UL ;
    void* pstElementNextNodeData = (void*) 0UL ;
    void* pstElementNodeData = (void*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        u32SizeReg = SLinkedList__u32GetSize(pstList);
        if(0UL != u32SizeReg)
        {
            if((uint32_t) 0UL == (uint32_t) pstElement)
            {
                enStatus = SLinkedList_enSTATUS_OK;
                pstHeadData = SLinkedList__pstGetHead(pstList);
                *pvData = SLinkedList__pvGetElementData(pstHeadData);
                pstOldElement = pstHeadData;
                pstHeadNextNode = SLinkedList__pstGetElementNextNode(pstHeadData);
                SLinkedList__vSetHead(pstList, pstHeadNextNode);
                if(1UL == u32SizeReg)
                {
                    SLinkedList__vSetTail(pstList, (SLinkedListElement_TypeDef*)0UL);
                }
            }
            else
            {
                if((uint32_t) 0UL != (uint32_t) pstElement->pstNextNode)
                {
                    enStatus = SLinkedList_enSTATUS_OK;

                    pstElementNextNode = SLinkedList__pstGetElementNextNode(pstElement);
                    pstElementNextNodeData = SLinkedList__pvGetElementData(pstElementNextNode);
                    if(REMOVE_CURRENT == u32Remove)
                    {
                        pstElementNodeData = SLinkedList__pvGetElementData(pstElement);
                        *pvData = pstElementNodeData;
                    }
                    else
                    {
                        *pvData = pstElementNextNodeData;
                    }

                    pstOldElement = pstElementNextNode;
                    pstElementNextNextNode = SLinkedList__pstGetElementNextNode(pstElementNextNode);
                    if(REMOVE_CURRENT == u32Remove)
                    {
                        SLinkedList__vSetElementData(pstElement, pstElementNextNodeData);
                    }

                    SLinkedList__vSetElementNextNode(pstElement, pstElementNextNextNode);


                    pstElementNextNode = SLinkedList__pstGetElementNextNode(pstElement);
                    if((uint32_t) 0UL == (uint32_t) pstElementNextNode)
                    {
                        SLinkedList__vSetTail(pstList, (SLinkedListElement_TypeDef*)pstElement);
                    }
                }
            }

            if(SLinkedList_enSTATUS_OK == enStatus)
            {
                SLinkedList__vSetElementNextNode(pstOldElement,  (SLinkedListElement_TypeDef *) 0UL);
                SLinkedList__vSetElementData(pstOldElement,  (void *) 0UL);
                if(0UL !=  (uint32_t)  pstList->pfvDestroyElement)
                {
                    pstList->pfvDestroyElement(pstOldElement);
                    pstOldElement = (SLinkedListElement_TypeDef*) 0UL;
                }

                u32SizeReg--;
                SLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return enStatus;
}

SLinkedList_nSTATUS SLinkedList__enRemoveNext(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstElement, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveGeneric(pstList, pstElement, pvData, REMOVE_NEXT);
    return enStatus;
}

SLinkedList_nSTATUS SLinkedList__enRemove(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstElement, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enRemoveGeneric(pstList, pstElement, pvData, REMOVE_CURRENT);
    return enStatus;
}

SLinkedList_nSTATUS  SLinkedList__enRemoveEnd(SLinkedList_TypeDef* pstList, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstEndElement = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(1UL <  u32SizeList)
        {
            u32SizeList--;
            pstEndElement = SLinkedList__pstGetHead(pstList);
            u32SizeList--;
            while(0UL != u32SizeList)
            {
                pstEndElement = SLinkedList__pstGetElementNextNode(pstEndElement);
                u32SizeList--;
            }
        }
        enStatus = SLinkedList__enRemoveNext(pstList, pstEndElement, pvData);
    }
    return enStatus;
}

SLinkedList_nSTATUS  SLinkedList__enRemoveBegin(SLinkedList_TypeDef* pstList, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        enStatus = SLinkedList__enRemoveNext(pstList, (SLinkedListElement_TypeDef*) 0UL, pvData);
    }
    return enStatus;
}

SLinkedList_nSTATUS  SLinkedList__enRemovePos(SLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL != u32Position)
            {
                pstElement = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = SLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
            }
            enStatus = SLinkedList__enRemoveNext(pstList, pstElement, pvData);
        }
    }
    return enStatus;
}
