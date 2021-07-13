/**
 *
 * @file DLinkedList_Add.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Add.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

DLinkedList_nSTATUS DLinkedList__enAddNext(DLinkedList_TypeDef* pstList,
                                                   DLinkedListElement_TypeDef* pstPreviousElement,
                                                   DLinkedListElement_TypeDef* pstNewElement,
                                                   void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstElementNextNode = (DLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstPreviousElement) || (0UL == u32SizeReg))
        {
            if((uint32_t) 0UL != (uint32_t) pstNewElement)
            {
                enStatus = DLinkedList_enSTATUS_OK;
                DLinkedList__vSetElementData(pstNewElement, pvData);
                DLinkedList__vSetElementOwnerList(pstNewElement, (void*) pstList);

                if(0UL == u32SizeReg)
                    {
                    DLinkedList__vSetHead(pstList, pstNewElement);

                    DLinkedList__vSetElementNextNode(pstNewElement, (DLinkedListElement_TypeDef*) 0UL );
                    DLinkedList__vSetElementPreviousNode(pstNewElement, (DLinkedListElement_TypeDef*) 0UL );

                    DLinkedList__vSetTail(pstList, pstNewElement);
                }
                else
                {
                    pstElementNextNode = DLinkedList__pstGetElementNextNode(pstPreviousElement);

                    DLinkedList__vSetElementNextNode(pstNewElement, pstElementNextNode );
                    DLinkedList__vSetElementPreviousNode(pstNewElement, pstPreviousElement);

                    if((uint32_t) 0UL == (uint32_t) pstElementNextNode)
                    {
                        DLinkedList__vSetTail(pstList, pstNewElement);
                    }
                    else
                    {
                        DLinkedList__vSetElementPreviousNode(pstElementNextNode, pstNewElement);
                    }
                    DLinkedList__vSetElementNextNode(pstPreviousElement, pstNewElement);
                }

                u32SizeReg++;
                DLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return (enStatus);
}


DLinkedListElement_TypeDef* DLinkedList__pstAddNext(DLinkedList_TypeDef* pstList,
                                             DLinkedListElement_TypeDef* pstPreviousElement,
                                             void* pvData)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstPreviousElement) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewElement = (DLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
            pstNewElement = (DLinkedListElement_TypeDef*) malloc(sizeof(DLinkedListElement_TypeDef));
            #endif

            DLinkedList__enAddNext(pstList, pstPreviousElement, pstNewElement, pvData);
        }
    }
    return (pstNewElement);
}

DLinkedList_nSTATUS DLinkedList__enAddPrevious(DLinkedList_TypeDef* pstList,
                                                       DLinkedListElement_TypeDef* pstNextElement,
                                                       DLinkedListElement_TypeDef* pstNewElement,
                                                       void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstElementPreviousNode = (DLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstNextElement) || (0UL == u32SizeReg))
        {
           if((uint32_t) 0UL != (uint32_t) pstNewElement)
           {
               enStatus = DLinkedList_enSTATUS_OK;
               DLinkedList__vSetElementData(pstNewElement, pvData);
               DLinkedList__vSetElementOwnerList(pstNewElement, (void*) pstList);

               if(0UL == u32SizeReg)
               {
                   DLinkedList__vSetHead(pstList, pstNewElement);

                   DLinkedList__vSetElementNextNode(pstNewElement, (DLinkedListElement_TypeDef*) 0UL );
                   DLinkedList__vSetElementPreviousNode(pstNewElement, (DLinkedListElement_TypeDef*) 0UL );

                   DLinkedList__vSetTail(pstList, pstNewElement);
               }
               else
               {
                   pstElementPreviousNode = DLinkedList__pstGetElementPreviousNode(pstNextElement);

                   DLinkedList__vSetElementNextNode(pstNewElement, pstNextElement );
                   DLinkedList__vSetElementPreviousNode(pstNewElement, pstElementPreviousNode);

                   if((uint32_t) 0UL == (uint32_t) pstElementPreviousNode)
                   {
                       DLinkedList__vSetHead(pstList, pstNewElement);
                   }
                   else
                   {
                       DLinkedList__vSetElementNextNode(pstElementPreviousNode, pstNewElement);
                   }
                   DLinkedList__vSetElementPreviousNode(pstNextElement, pstNewElement);
               }
               u32SizeReg++;
               DLinkedList__vSetSize(pstList, u32SizeReg);

               }
       }
   }
   return (enStatus);
}

DLinkedListElement_TypeDef* DLinkedList__pstAddPrevious(DLinkedList_TypeDef* pstList,
                                                        DLinkedListElement_TypeDef* pstNextElement,
                                                        void* pvData)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstNextElement) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewElement = (DLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
            pstNewElement = (DLinkedListElement_TypeDef*) malloc(sizeof(DLinkedListElement_TypeDef));
            #endif

            DLinkedList__enAddPrevious(pstList, pstNextElement, pstNewElement, pvData);
        }
    }
    return pstNewElement;
}

DLinkedList_nSTATUS  DLinkedList__enAddEnd(DLinkedList_TypeDef* pstList,
                                           DLinkedListElement_TypeDef* pstNewElement,
                                           void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = DLinkedList__pstGetTail(pstList);
        enStatus = DLinkedList__enAddNext(pstList, pstEndElement, pstNewElement, pvData);
    }
    return (enStatus);
}

DLinkedListElement_TypeDef*  DLinkedList__pstAddEnd(DLinkedList_TypeDef* pstList,
                                                    void* pvData)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = DLinkedList__pstGetTail(pstList);
        pstNewElement = DLinkedList__pstAddNext(pstList, pstEndElement, pvData);
    }
    return (pstNewElement);
}

DLinkedList_nSTATUS DLinkedList__enAddBegin(DLinkedList_TypeDef* pstList,
                                            DLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstBeginElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = DLinkedList__pstGetHead(pstList);
        enStatus = DLinkedList__enAddPrevious(pstList, pstBeginElement, pstNewElement, pvData);
    }
    return (enStatus);
}

DLinkedListElement_TypeDef* DLinkedList__pstAddBegin(DLinkedList_TypeDef* pstList, void* pvData)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstBeginElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = DLinkedList__pstGetHead(pstList);
        pstNewElement = DLinkedList__pstAddPrevious(pstList, pstBeginElement, pvData);
    }
    return (pstNewElement);
}

DLinkedList_nSTATUS  DLinkedList__enAddPos(DLinkedList_TypeDef* pstList,
                                           DLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position,
                                            void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = DLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Add Head*/
            {
                enStatus = DLinkedList__enAddBegin(pstList, pstNewElement, pvData);
            }
            else if(u32Position == u32SizeList) /*Add Tail*/
            {
                enStatus = DLinkedList__enAddEnd(pstList, pstNewElement, pvData);
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
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enAddNext(pstList, pstElement, pstNewElement, pvData);
                }
                else /*Backward*/
                {
                    pstElement = DLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enAddPrevious(pstList, pstElement, pstNewElement, pvData);
                }
            }
        }
    }
    return (enStatus);
}

DLinkedListElement_TypeDef*  DLinkedList__pstAddPos(DLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position, void* pvData)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = DLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Add Head*/
            {
                pstNewElement = DLinkedList__pstAddBegin(pstList, pvData);
            }
            else if(u32Position == u32SizeList) /*Add Tail*/
            {
                pstNewElement = DLinkedList__pstAddEnd(pstList, pvData);
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
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementNextNode(pstElement);
                        u32SizeOptimum--;
                    }
                    pstNewElement = DLinkedList__pstAddNext(pstList, pstElement, pvData);
                }
                else /*Backward*/
                {
                    pstElement = DLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstElement = DLinkedList__pstGetElementPreviousNode(pstElement);
                        u32SizeOptimum--;
                    }
                    pstNewElement = DLinkedList__pstAddPrevious(pstList, pstElement, pvData);
                }
            }
        }
    }
    return (pstNewElement);
}



