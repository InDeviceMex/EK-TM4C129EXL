/**
 *
 * @file CDLinkedList_Remove.c
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

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/CDLinkedList_Intrinsics.h>

CDLinkedList_nSTATUS CDLinkedList__enRemove(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstElementNextNode = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstElementPreviousNode = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstHeadNode = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstTailNode = (CDLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL != u32SizeReg))
        {
            enStatus = CDLinkedList_enSTATUS_OK;
            *pvData = CDLinkedList__pvGetElementData(pstElement);

            pstHeadNode = CDLinkedList__pstGetHead(pstList);
            pstTailNode = CDLinkedList__pstGetTail(pstList);

            pstElementNextNode = CDLinkedList__pstGetElementNextNode(pstElement);
            pstElementPreviousNode = CDLinkedList__pstGetElementPreviousNode(pstElement);

            if((uint32_t) pstHeadNode == (uint32_t) pstTailNode)/*Last Element*/
            {
                CDLinkedList__vSetTail(pstList, (CDLinkedListElement_TypeDef*) 0UL);
                CDLinkedList__vSetHead(pstList, (CDLinkedListElement_TypeDef*) 0UL);
            }
            else
            {
                if((uint32_t) pstHeadNode == (uint32_t) pstElement)
                {
                    CDLinkedList__vSetHead(pstList, pstElementNextNode);
                }
                if((uint32_t) pstTailNode == (uint32_t) pstElement)
                {
                    CDLinkedList__vSetTail(pstList, pstElementPreviousNode);
                }
                CDLinkedList__vSetElementNextNode(pstElementPreviousNode, pstElementNextNode);
                CDLinkedList__vSetElementPreviousNode(pstElementNextNode, pstElementPreviousNode);
            }

            CDLinkedList__vSetElementNextNode(pstElement,  (CDLinkedListElement_TypeDef *) 0UL);
            CDLinkedList__vSetElementPreviousNode(pstElement,  (CDLinkedListElement_TypeDef *) 0UL);
            CDLinkedList__vSetElementData(pstElement,  (void *) 0UL);
            if(0UL !=  (uint32_t)  pstList->pfvDestroyElement)
            {
                pstList->pfvDestroyElement(pstElement);
                pstElement = (CDLinkedListElement_TypeDef*) 0UL;
            }

            u32SizeReg--;
            CDLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemoveNext(CDLinkedList_TypeDef* pstList, const CDLinkedListElement_TypeDef* pstElement, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstElementNextNode = (CDLinkedListElement_TypeDef*) 0UL ;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pstElement) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        pstElementNextNode = CDLinkedList__pstGetElementNextNode(pstElement);
        enStatus = CDLinkedList__enRemove(pstList, pstElementNextNode, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enRemovePrevious(CDLinkedList_TypeDef* pstList, const CDLinkedListElement_TypeDef* pstElement, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstElementPreviousNode = (CDLinkedListElement_TypeDef*) 0UL ;

    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pstElement) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        pstElementPreviousNode = CDLinkedList__pstGetElementPreviousNode(pstElement);
        enStatus = CDLinkedList__enRemove(pstList, pstElementPreviousNode, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enRemoveEnd(CDLinkedList_TypeDef* pstList, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstEndElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        pstEndElement = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enRemove(pstList, pstEndElement, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enRemoveBegin(CDLinkedList_TypeDef* pstList, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstEndElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
    {
        pstEndElement = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enRemove(pstList, pstEndElement, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enRemovePos(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstElement = (CDLinkedListElement_TypeDef*) 0UL;
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
            if(0UL == u32Position) /*Remove Head*/
            {
                enStatus = CDLinkedList__enRemoveBegin(pstList, pvData);
            }
            else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL)) /*Remove Tail*/
            {
                enStatus = CDLinkedList__enRemoveEnd(pstList, pvData);
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
                    pstElement = CDLinkedList__pstGetHead(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemove(pstList, pstElement, pvData);
                }
                else /*Backward*/
                {
                    pstElement = CDLinkedList__pstGetTail(pstList);
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enRemove(pstList, pstElement, pvData);
                }
            }
        }
    }
    return (enStatus);
}
