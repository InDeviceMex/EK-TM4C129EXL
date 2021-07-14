/**
 *
 * @file CircularCDLinkedList_Add.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Add.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/CDLinkedList_Intrinsics.h>

#define ADD_NEXT (0UL)
#define ADD_PREVIOUS (1UL)

#define DATA_UPDATE (0UL)
#define DATA_STATIC (1UL)


static CDLinkedList_nSTATUS CDLinkedList__enAddGeneric(CDLinkedList_TypeDef* pstList,
                                                        CDLinkedListElement_TypeDef* pstElement,
                                                        CDLinkedListElement_TypeDef* pstNewElement,
                                                        void* pvData,
                                                        uint32_t u32Add,
                                                        uint32_t u32DataUpdate);

static CDLinkedList_nSTATUS CDLinkedList__enAddGeneric(CDLinkedList_TypeDef* pstList,
                                                        CDLinkedListElement_TypeDef* pstElement,
                                                        CDLinkedListElement_TypeDef* pstNewElement,
                                                        void* pvData,
                                                        uint32_t u32Add,
                                                        uint32_t u32DataUpdate)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstElementTemp = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstElementNextNode = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstElementPreviousNode = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstHeadNode = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstTailNode = (CDLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL == u32SizeReg))
        {
            if((uint32_t) 0UL != (uint32_t) pstNewElement)
            {
                enStatus = CDLinkedList_enSTATUS_OK;
                if(DATA_UPDATE == u32DataUpdate)
                {
                    CDLinkedList__vSetElementData(pstNewElement, pvData);
                }
                CDLinkedList__vSetElementOwnerList(pstNewElement, (void*) pstList);

                if(0UL == u32SizeReg)
                {
                    CDLinkedList__vSetHead(pstList, pstNewElement);
                    pstElementTemp = pstNewElement;
                    CDLinkedList__vSetElementNextNode(pstNewElement, pstElementTemp );
                    CDLinkedList__vSetElementPreviousNode(pstNewElement, pstElementTemp );

                    CDLinkedList__vSetTail(pstList, pstNewElement);
                }
                else
                {
                    if(ADD_NEXT == u32Add)
                    {
                        pstHeadNode = CDLinkedList__pstGetHead(pstList);
                        pstElementNextNode = CDLinkedList__pstGetElementNextNode(pstElement);

                        CDLinkedList__vSetElementNextNode(pstNewElement, pstElementNextNode );
                        CDLinkedList__vSetElementPreviousNode(pstNewElement, pstElement);
                        if((uint32_t) pstHeadNode == (uint32_t) pstElementNextNode)
                        {
                            CDLinkedList__vSetTail(pstList, pstNewElement);
                        }

                        CDLinkedList__vSetElementPreviousNode(pstElementNextNode, pstNewElement);
                        CDLinkedList__vSetElementNextNode(pstElement, pstNewElement);
                    }
                    else
                    {
                        pstTailNode = CDLinkedList__pstGetTail(pstList);
                        pstElementPreviousNode = CDLinkedList__pstGetElementPreviousNode(pstElement);

                        CDLinkedList__vSetElementNextNode(pstNewElement, pstElement );
                        CDLinkedList__vSetElementPreviousNode(pstNewElement, pstElementPreviousNode);

                        if((uint32_t) pstTailNode == (uint32_t) pstElementPreviousNode)
                        {
                            CDLinkedList__vSetHead(pstList, pstNewElement);
                        }

                        CDLinkedList__vSetElementNextNode(pstElementPreviousNode, pstNewElement);
                        CDLinkedList__vSetElementPreviousNode(pstElement, pstNewElement);
                    }
                }
                u32SizeReg++;
                CDLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enAddNext_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement,
                                                      void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enAddGeneric(pstList, pstElement, pstNewElement, pvData, ADD_NEXT, DATA_UPDATE);
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enAddNext(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enAddGeneric(pstList, pstElement, pstNewElement, (void*) 0UL, ADD_NEXT, DATA_STATIC);
    return (enStatus);
}

CDLinkedListElement_TypeDef* CDLinkedList__pstAddNext_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void* pvData)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewElement = (CDLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
            pstNewElement = (CDLinkedListElement_TypeDef*) malloc(sizeof(CDLinkedListElement_TypeDef));
            #endif

            CDLinkedList__enAddNext_WithData(pstList, pstElement, pstNewElement, pvData);
        }
    }
    return (pstNewElement);
}

CDLinkedListElement_TypeDef* CDLinkedList__pstAddNext(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewElement = (CDLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
            pstNewElement = (CDLinkedListElement_TypeDef*) malloc(sizeof(CDLinkedListElement_TypeDef));
            #endif

            CDLinkedList__enAddNext(pstList, pstElement, pstNewElement);
        }
    }
    return (pstNewElement);
}

CDLinkedList_nSTATUS CDLinkedList__enAddPrevious_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement,
                                                      void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enAddGeneric(pstList, pstElement, pstNewElement, pvData, ADD_PREVIOUS, DATA_UPDATE);
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enAddPrevious(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enAddGeneric(pstList, pstElement, pstNewElement, (void*) 0UL, ADD_PREVIOUS, DATA_STATIC);
    return (enStatus);
}


CDLinkedListElement_TypeDef* CDLinkedList__pstAddPrevious_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void* pvData)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewElement = (CDLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
            pstNewElement = (CDLinkedListElement_TypeDef*) malloc(sizeof(CDLinkedListElement_TypeDef));
            #endif

            CDLinkedList__enAddPrevious_WithData(pstList, pstElement, pstNewElement, pvData);
        }
    }
    return (pstNewElement);
}


CDLinkedListElement_TypeDef* CDLinkedList__pstAddPrevious(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewElement = (CDLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
            pstNewElement = (CDLinkedListElement_TypeDef*) malloc(sizeof(CDLinkedListElement_TypeDef));
            #endif

            CDLinkedList__enAddPrevious(pstList, pstElement, pstNewElement);
        }
    }
    return (pstNewElement);
}


CDLinkedList_nSTATUS  CDLinkedList__enAddEnd_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                           void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstEndElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enAddNext_WithData(pstList, pstEndElement, pstNewElement, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enAddEnd(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstEndElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enAddNext(pstList, pstEndElement, pstNewElement);
    }
    return (enStatus);
}

CDLinkedListElement_TypeDef*  CDLinkedList__pstAddEnd_WithData(CDLinkedList_TypeDef* pstList, void* pvData)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstEndElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CDLinkedList__pstGetTail(pstList);
        pstNewElement = CDLinkedList__pstAddNext_WithData(pstList, pstEndElement, pvData);
    }
    return (pstNewElement);
}

CDLinkedListElement_TypeDef*  CDLinkedList__pstAddEnd(CDLinkedList_TypeDef* pstList)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstEndElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CDLinkedList__pstGetTail(pstList);
        pstNewElement = CDLinkedList__pstAddNext(pstList, pstEndElement);
    }
    return (pstNewElement);
}

CDLinkedList_nSTATUS CDLinkedList__enAddBegin_WithData(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstBeginElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enAddPrevious_WithData(pstList, pstBeginElement, pstNewElement, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enAddBegin(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListElement_TypeDef* pstNewElement)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstBeginElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enAddPrevious(pstList, pstBeginElement, pstNewElement);
    }
    return (enStatus);
}

CDLinkedListElement_TypeDef*  CDLinkedList__pstAddBegin_WithData(CDLinkedList_TypeDef* pstList, void* pvData)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstBeginElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = CDLinkedList__pstGetHead(pstList);
        pstNewElement = CDLinkedList__pstAddPrevious_WithData(pstList, pstBeginElement, pvData);
    }
    return (pstNewElement);
}

CDLinkedListElement_TypeDef*  CDLinkedList__pstAddBegin(CDLinkedList_TypeDef* pstList)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstBeginElement = (CDLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = CDLinkedList__pstGetHead(pstList);
        pstNewElement = CDLinkedList__pstAddPrevious(pstList, pstBeginElement);
    }
    return (pstNewElement);
}

CDLinkedList_nSTATUS  CDLinkedList__enAddPos_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position,
                                            void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstElement = (CDLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Add Head*/
            {
                enStatus = CDLinkedList__enAddBegin_WithData(pstList, pstNewElement, pvData);
            }
            else if(u32Position == u32SizeList) /*Add Tail*/
            {
                enStatus = CDLinkedList__enAddEnd_WithData(pstList, pstNewElement, pvData);
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
                    pstElement = CDLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enAddNext_WithData(pstList, pstElement, pstNewElement, pvData);
                }
                else /*Backward*/
                {
                    pstElement = CDLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enAddPrevious_WithData(pstList, pstElement, pstNewElement, pvData);
                }
            }
        }
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enAddPos(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* pstElement = (CDLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Add Head*/
            {
                enStatus = CDLinkedList__enAddBegin(pstList, pstNewElement);
            }
            else if(u32Position == u32SizeList) /*Add Tail*/
            {
                enStatus = CDLinkedList__enAddEnd(pstList, pstNewElement);
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
                    pstElement = CDLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enAddNext(pstList, pstElement, pstNewElement);
                }
                else /*Backward*/
                {
                    pstElement = CDLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enAddPrevious(pstList, pstElement, pstNewElement);
                }
            }
        }
    }
    return (enStatus);
}


CDLinkedListElement_TypeDef*  CDLinkedList__pstAddPos_WithData(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstElement = (CDLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Add Head*/
            {
                pstNewElement = CDLinkedList__pstAddBegin_WithData(pstList, pvData);
            }
            else if(u32Position == u32SizeList) /*Add Tail*/
            {
                pstNewElement = CDLinkedList__pstAddEnd_WithData(pstList, pvData);
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
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    pstNewElement = CDLinkedList__pstAddNext_WithData(pstList, pstElement, pvData);
                }
                else /*Backward*/
                {
                    pstElement = CDLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    pstNewElement = CDLinkedList__pstAddPrevious_WithData(pstList, pstElement, pvData);
                }
            }
        }
    }
    return (pstNewElement);
}


CDLinkedListElement_TypeDef*  CDLinkedList__pstAddPos(CDLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
    CDLinkedListElement_TypeDef* pstElement = (CDLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Add Head*/
            {
                pstNewElement = CDLinkedList__pstAddBegin(pstList);
            }
            else if(u32Position == u32SizeList) /*Add Tail*/
            {
                pstNewElement = CDLinkedList__pstAddEnd(pstList);
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
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    pstNewElement = CDLinkedList__pstAddNext(pstList, pstElement);
                }
                else /*Backward*/
                {
                    pstElement = CDLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = CDLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    pstNewElement = CDLinkedList__pstAddPrevious(pstList, pstElement);
                }
            }
        }
    }
    return (pstNewElement);
}
