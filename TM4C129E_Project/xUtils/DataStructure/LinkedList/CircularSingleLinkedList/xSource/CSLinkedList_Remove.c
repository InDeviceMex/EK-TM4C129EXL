/**
 *
 * @file CSLinkedList_Remove.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>

CSLinkedList_nSTATUS CSLinkedList__enRemoveNextInList_GetData(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstElement, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstOldElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstTailNode = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstHeadElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstElementNextNode = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstElementNextNextNode = (CSLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeReg = CSLinkedList__u32GetSize(pstList);
        if(0UL != u32SizeReg)
        {
            enStatus = CSLinkedList_enSTATUS_OK;
            if((uint32_t) 0UL == (uint32_t) pstElement) /* Remove Head*/
            {
                pstElement = CSLinkedList__pstGetTail(pstList);
            }

            pstElementNextNode = CSLinkedList__pstGetElementNextNode(pstElement);
            if(0UL != (uint32_t) pvData)
            {
                *pvData = CSLinkedList__pvGetElementData(pstElementNextNode);
            }
            pstOldElement = pstElementNextNode;

            if((uint32_t) pstElement == (uint32_t) pstElementNextNode) /*Remove Last element*/
            {
                CSLinkedList__vSetTail(pstList, (CSLinkedListElement_TypeDef*)0UL);
                CSLinkedList__vSetHead(pstList, (CSLinkedListElement_TypeDef*)0UL);
            }
            else
            {
                pstElementNextNextNode = CSLinkedList__pstGetElementNextNode(pstElementNextNode);
                CSLinkedList__vSetElementNextNode(pstElement, pstElementNextNextNode);

                pstHeadElement = CSLinkedList__pstGetHead(pstList);
                pstTailNode = CSLinkedList__pstGetTail(pstList);
                if((uint32_t) pstElementNextNode == (uint32_t) pstHeadElement)
                {
                    CSLinkedList__vSetHead(pstList, pstElementNextNextNode);
                }
                if((uint32_t) pstElementNextNode == (uint32_t) pstTailNode)
                {
                    CSLinkedList__vSetTail(pstList, pstElement);
                }
            }

            CSLinkedList__vSetElementDataAuxiliar(pstOldElement, 0UL);
            CSLinkedList__vSetElementOwnerList(pstOldElement,  (void *) 0UL);
            CSLinkedList__vSetElementNextNode(pstOldElement,  (CSLinkedListElement_TypeDef *) 0UL);
            if(0UL !=  (uint32_t)  pstList->pfvDestroyElement)
            {
                CSLinkedList__vSetElementData(pstOldElement,  (void *) 0UL);
                pstList->pfvDestroyElement(pstOldElement);
                pstOldElement = (CSLinkedListElement_TypeDef*) 0UL;
            }

            u32SizeReg--;
            CSLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveNextInList(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstElement, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveNext_GetData(CSLinkedListElement_TypeDef* pstElement, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedList_TypeDef* pstListReg = (CSLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstElement)
    {
        enStatus = CSLinkedList_enSTATUS_OK;
        pstListReg = (CSLinkedList_TypeDef*) CSLinkedList__pvGetElementOwnerList(pstElement);
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstListReg, pstElement, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveNext(CSLinkedListElement_TypeDef* pstElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveNext_GetData(pstElement, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveInList_GetData(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstElement, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstOldElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstHeadNextNode = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstHeadElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstTailElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstElementNextNode = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstElementNextNextNode = (CSLinkedListElement_TypeDef*) 0UL ;
    void* pstElementNextNodeData = (void*) 0UL ;
    void* pstElementNodeData = (void*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeReg = CSLinkedList__u32GetSize(pstList);
        if(0UL != u32SizeReg)
        {
            if((uint32_t) 0UL == (uint32_t) pstElement)
            {
                enStatus = CSLinkedList_enSTATUS_OK;
                pstHeadElement = CSLinkedList__pstGetHead(pstList);

                pstHeadNextNode = CSLinkedList__pstGetElementNextNode(pstHeadElement);
                if(0UL != (uint32_t) pvData)
                {
                    *pvData = CSLinkedList__pvGetElementData(pstHeadElement);
                }
                pstOldElement = pstHeadElement;

                if((uint32_t) pstHeadElement == (uint32_t) pstHeadNextNode) /*Remove Last element*/
                {
                    CSLinkedList__vSetHead(pstList, (CSLinkedListElement_TypeDef*) 0UL);
                    CSLinkedList__vSetTail(pstList, (CSLinkedListElement_TypeDef*) 0UL);
                }
                else
                {
                    pstTailElement = CSLinkedList__pstGetTail(pstList);
                    CSLinkedList__vSetHead(pstList, pstHeadNextNode);
                    CSLinkedList__vSetElementNextNode(pstTailElement, pstHeadNextNode);
                }

            }
            else
            {
                pstTailElement = CSLinkedList__pstGetTail(pstList);
                if(((uint32_t) pstElement != (uint32_t) pstTailElement) || (1UL == u32SizeReg))
                {
                    enStatus = CSLinkedList_enSTATUS_OK;

                    pstElementNextNode = CSLinkedList__pstGetElementNextNode(pstElement);
                    pstElementNextNodeData = CSLinkedList__pvGetElementData(pstElementNextNode);
                    pstElementNodeData = CSLinkedList__pvGetElementData(pstElement);
                    if(0UL != (uint32_t) pvData)
                    {
                        *pvData = pstElementNodeData;
                    }
                    pstOldElement = pstElementNextNode;

                    pstElementNextNextNode = CSLinkedList__pstGetElementNextNode(pstElementNextNode);
                    if((uint32_t) pstElementNextNode == (uint32_t) pstElementNextNextNode) /*Last node*/
                    {
                        CSLinkedList__vSetHead(pstList, (CSLinkedListElement_TypeDef*) 0UL);
                        CSLinkedList__vSetTail(pstList, (CSLinkedListElement_TypeDef*) 0UL);
                    }
                    else
                    {
                        CSLinkedList__vSetElementNextNode(pstElement, pstElementNextNextNode);
                        CSLinkedList__vSetElementData(pstElement, pstElementNextNodeData);

                        if((uint32_t) pstTailElement == (uint32_t) pstElementNextNode)
                        {
                            CSLinkedList__vSetTail(pstList, pstElement);
                        }
                    }
                }
            }

            if(CSLinkedList_enSTATUS_OK == enStatus)
            {
                CSLinkedList__vSetElementDataAuxiliar(pstOldElement, 0UL);
                CSLinkedList__vSetElementOwnerList(pstOldElement,  (void *) 0UL);
                CSLinkedList__vSetElementNextNode(pstOldElement,  (CSLinkedListElement_TypeDef *) 0UL);
                if(0UL !=  (uint32_t)  pstList->pfvDestroyElement)
                {
                    CSLinkedList__vSetElementData(pstOldElement,  (void *) 0UL);
                    pstList->pfvDestroyElement(pstOldElement);
                    pstOldElement = (CSLinkedListElement_TypeDef*) 0UL;
                }

                u32SizeReg--;
                CSLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemoveInList(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveInList_GetData(pstList, pstElement, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemove_GetData(CSLinkedListElement_TypeDef* pstElement, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedList_TypeDef* pstListReg = (CSLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstElement)
    {
        enStatus = CSLinkedList_enSTATUS_OK;
        pstListReg = (CSLinkedList_TypeDef*) CSLinkedList__pvGetElementOwnerList(pstElement);
        enStatus = CSLinkedList__enRemoveInList_GetData(pstListReg, pstElement, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enRemove(CSLinkedListElement_TypeDef* pstElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemove_GetData(pstElement, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemoveEnd_GetData(CSLinkedList_TypeDef* pstList, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstEndElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(1UL <  u32SizeList)
        {
            u32SizeList--;
            pstEndElement = CSLinkedList__pstGetHead(pstList);
            u32SizeList--;
            while(0UL != u32SizeList)
            {
                pstEndElement = CSLinkedList__pstGetElementNextNode(pstEndElement);
                u32SizeList--;
            }
        }
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstEndElement, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemoveEnd(CSLinkedList_TypeDef* pstList)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveEnd_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemoveBegin_GetData(CSLinkedList_TypeDef* pstList, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, (CSLinkedListElement_TypeDef*) 0UL, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemoveBegin(CSLinkedList_TypeDef* pstList)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemoveBegin_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemovePos_GetData(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position < u32SizeList)
        {
            if(0UL != u32Position)
            {
                pstElement = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = CSLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
            }
            enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstElement, pvData);
        }
    }
    return (enStatus);
}

CSLinkedList_nSTATUS  CSLinkedList__enRemovePos(CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enRemovePos_GetData(pstList, u32Position, (void**) 0UL);
    return (enStatus);
}
