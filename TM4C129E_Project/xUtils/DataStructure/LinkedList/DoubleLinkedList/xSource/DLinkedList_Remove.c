/**
 *
 * @file DLinkedList_Remove.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

DLinkedList_nSTATUS DLinkedList__enRemoveInList_GetData(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstElement, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstHeadElement = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstElementNextNode = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstElementPreviousNode = (DLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if(0UL != (uint32_t) pstList)
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL != u32SizeReg))
        {
            enStatus = DLinkedList_enSTATUS_OK;
            if(0UL != (uint32_t) pvData)
            {
                *pvData = DLinkedList__pvGetElementData(pstElement);
            }
            pstHeadElement = DLinkedList__pstGetHead(pstList);
            if((uint32_t) pstElement == (uint32_t) pstHeadElement)
            {
                pstElementNextNode = DLinkedList__pstGetElementNextNode(pstElement);
                DLinkedList__vSetHead(pstList, pstElementNextNode);

                if((uint32_t) 0UL == (uint32_t) pstElementNextNode)
                {
                    DLinkedList__vSetTail(pstList, (DLinkedListElement_TypeDef*) 0UL);
                }
                else
                {
                    DLinkedList__vSetElementPreviousNode(pstElementNextNode, (DLinkedListElement_TypeDef*) 0UL);
                }
            }
            else
            {
                pstElementNextNode = DLinkedList__pstGetElementNextNode(pstElement);
                pstElementPreviousNode = DLinkedList__pstGetElementPreviousNode(pstElement);

                DLinkedList__vSetElementNextNode(pstElementPreviousNode, pstElementNextNode);

                if((uint32_t) 0UL == (uint32_t) pstElementNextNode)
                {
                    DLinkedList__vSetTail(pstList, pstElementPreviousNode);
                }
                else
                {
                    DLinkedList__vSetElementPreviousNode(pstElementNextNode, pstElementPreviousNode);
                }
            }

            DLinkedList__vSetElementOwnerList(pstElement,  (void *) 0UL);
            DLinkedList__vSetElementNextNode(pstElement,  (DLinkedListElement_TypeDef *) 0UL);
            DLinkedList__vSetElementPreviousNode(pstElement,  (DLinkedListElement_TypeDef *) 0UL);
            if(0UL !=  (uint32_t)  pstList->pfvDestroyElement)
            {
                DLinkedList__vSetElementData(pstElement,  (void *) 0UL);
                pstList->pfvDestroyElement(pstElement);
                pstElement = (DLinkedListElement_TypeDef*) 0UL;
            }

            u32SizeReg--;
            DLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return (enStatus);
}


DLinkedList_nSTATUS DLinkedList__enRemoveInList(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstElement, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemove_GetData(DLinkedListElement_TypeDef* pstElement, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedList_TypeDef* pstListReg = (DLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstElement)
    {
        enStatus = DLinkedList_enSTATUS_OK;
        pstListReg = (DLinkedList_TypeDef*) DLinkedList__pvGetElementOwnerList(pstElement);
        enStatus = DLinkedList__enRemoveInList_GetData(pstListReg, pstElement, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemove(DLinkedListElement_TypeDef* pstElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemove_GetData(pstElement, (void**) 0UL);
    return (enStatus);
}




DLinkedList_nSTATUS DLinkedList__enRemoveNextInList_GetData(DLinkedList_TypeDef* pstList, const DLinkedListElement_TypeDef* pstElement, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstElementNextNode = (DLinkedListElement_TypeDef*) 0UL ;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pstElement))
    {
        pstElementNextNode = DLinkedList__pstGetElementNextNode(pstElement);
        enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstElementNextNode, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemoveNextInList(DLinkedList_TypeDef* pstList, const DLinkedListElement_TypeDef* pstElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveNextInList_GetData(pstList, pstElement, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemoveNext_GetData(const DLinkedListElement_TypeDef* pstElement, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedList_TypeDef* pstListReg = (DLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstElement)
    {
        enStatus = DLinkedList_enSTATUS_OK;
        pstListReg = (DLinkedList_TypeDef*) DLinkedList__pvGetElementOwnerList(pstElement);
        enStatus = DLinkedList__enRemoveNextInList_GetData(pstListReg, pstElement, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemoveNext(const DLinkedListElement_TypeDef* pstElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveNext_GetData(pstElement, (void**) 0UL);
    return (enStatus);
}



DLinkedList_nSTATUS DLinkedList__enRemovePreviousInList_GetData(DLinkedList_TypeDef* pstList, const DLinkedListElement_TypeDef* pstElement, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstElementPreviousNode = (DLinkedListElement_TypeDef*) 0UL ;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pstElement))
    {
        pstElementPreviousNode = DLinkedList__pstGetElementPreviousNode(pstElement);
        enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstElementPreviousNode, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemovePreviousInList(DLinkedList_TypeDef* pstList, const DLinkedListElement_TypeDef* pstElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemovePreviousInList_GetData(pstList, pstElement, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemovePrevious_GetData(const DLinkedListElement_TypeDef* pstElement, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedList_TypeDef* pstListReg = (DLinkedList_TypeDef*) 0UL;

    if(0UL != (uint32_t) pstElement)
    {
        enStatus = DLinkedList_enSTATUS_OK;
        pstListReg = (DLinkedList_TypeDef*) DLinkedList__pvGetElementOwnerList(pstElement);
        enStatus = DLinkedList__enRemovePreviousInList_GetData(pstListReg, pstElement, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enRemovePrevious(const DLinkedListElement_TypeDef* pstElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemovePrevious_GetData(pstElement, (void**) 0UL);
    return (enStatus);
}



DLinkedList_nSTATUS  DLinkedList__enRemoveEnd_GetData(DLinkedList_TypeDef* pstList, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = DLinkedList__pstGetTail(pstList);
        enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstEndElement, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemoveEnd(DLinkedList_TypeDef* pstList)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveEnd_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemoveBegin_GetData(DLinkedList_TypeDef* pstList, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstBeginElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = DLinkedList__pstGetHead(pstList);
        enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstBeginElement, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemoveBegin(DLinkedList_TypeDef* pstList)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enRemoveBegin_GetData(pstList, (void**) 0UL);
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemovePos_GetData(DLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
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
            if(0UL == u32Position) /*Remove Head*/
            {
                enStatus = DLinkedList__enRemoveBegin_GetData(pstList, pvData);
            }
            else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = DLinkedList__enRemoveEnd_GetData(pstList, pvData);
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
                    pstElement = DLinkedList__pstGetHead(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstElement, pvData);
                }
                else /*Backward*/
                {
                    pstElement = DLinkedList__pstGetTail(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enRemoveInList_GetData(pstList, pstElement, pvData);
                }
            }
        }
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enRemovePos(DLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
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
            if(0UL == u32Position) /*Remove Head*/
            {
                enStatus = DLinkedList__enRemoveBegin(pstList);
            }
            else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = DLinkedList__enRemoveEnd(pstList);
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
                    pstElement = DLinkedList__pstGetHead(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enRemoveInList(pstList, pstElement);
                }
                else /*Backward*/
                {
                    pstElement = DLinkedList__pstGetTail(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enRemoveInList(pstList, pstElement);
                }
            }
        }
    }
    return (enStatus);
}
