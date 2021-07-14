/**
 *
 * @file DLinkedList_Insert.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Insert.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

#define DATA_UPDATE (0UL)
#define DATA_STATIC (1UL)

static DLinkedList_nSTATUS DLinkedList__enInsertNextGeneric(DLinkedList_TypeDef* pstList,
                                                   DLinkedListElement_TypeDef* pstPreviousElement,
                                                   DLinkedListElement_TypeDef* pstNewElement,
                                                   void* pvData,
                                                   uint32_t u32DataUpdate);

DLinkedList_nSTATUS DLinkedList__enInsertPreviousGeneric(DLinkedList_TypeDef* pstList,
                                                       DLinkedListElement_TypeDef* pstNextElement,
                                                       DLinkedListElement_TypeDef* pstNewElement,
                                                       void* pvData,
                                                       uint32_t u32DataUpdate);

static DLinkedList_nSTATUS DLinkedList__enInsertNextGeneric(DLinkedList_TypeDef* pstList,
                                                   DLinkedListElement_TypeDef* pstPreviousElement,
                                                   DLinkedListElement_TypeDef* pstNewElement,
                                                   void* pvData,
                                                   uint32_t u32DataUpdate)
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
                if(DATA_UPDATE == u32DataUpdate)
                {
                    DLinkedList__vSetElementData(pstNewElement, pvData);
                }
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


DLinkedList_nSTATUS DLinkedList__enInsertPreviousGeneric(DLinkedList_TypeDef* pstList,
                                                       DLinkedListElement_TypeDef* pstNextElement,
                                                       DLinkedListElement_TypeDef* pstNewElement,
                                                       void* pvData,
                                                       uint32_t u32DataUpdate)
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
               if(DATA_UPDATE == u32DataUpdate)
               {
                   DLinkedList__vSetElementData(pstNewElement, pvData);
               }
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

DLinkedList_nSTATUS DLinkedList__enInsertNext_WithData(DLinkedList_TypeDef* pstList,
                                            DLinkedListElement_TypeDef* pstPreviousElement,
                                            DLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enInsertNextGeneric(pstList, pstPreviousElement, pstNewElement, pvData, DATA_UPDATE);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enInsertNext(DLinkedList_TypeDef* pstList,
                                            DLinkedListElement_TypeDef* pstPreviousElement,
                                            DLinkedListElement_TypeDef* pstNewElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enInsertNextGeneric(pstList, pstPreviousElement, pstNewElement, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}

DLinkedListElement_TypeDef* DLinkedList__pstInsertNext_WithData(DLinkedList_TypeDef* pstList,
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

            DLinkedList__enInsertNext_WithData(pstList, pstPreviousElement, pstNewElement, pvData);
        }
    }
    return (pstNewElement);
}

DLinkedListElement_TypeDef* DLinkedList__pstInsertNext(DLinkedList_TypeDef* pstList,
                                             DLinkedListElement_TypeDef* pstPreviousElement)
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

            DLinkedList__enInsertNext(pstList, pstPreviousElement, pstNewElement);
        }
    }
    return (pstNewElement);
}



DLinkedList_nSTATUS DLinkedList__enInsertPrevious_WithData(DLinkedList_TypeDef* pstList,
                                                       DLinkedListElement_TypeDef* pstNextElement,
                                                       DLinkedListElement_TypeDef* pstNewElement,
                                                       void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enInsertPreviousGeneric(pstList, pstNextElement, pstNewElement, pvData, DATA_UPDATE);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enInsertPrevious(DLinkedList_TypeDef* pstList,
                                                       DLinkedListElement_TypeDef* pstNextElement,
                                                       DLinkedListElement_TypeDef* pstNewElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enInsertPreviousGeneric(pstList, pstNextElement, pstNewElement, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}

DLinkedListElement_TypeDef* DLinkedList__pstInsertPrevious_WithData(DLinkedList_TypeDef* pstList,
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

            DLinkedList__enInsertPrevious_WithData(pstList, pstNextElement, pstNewElement, pvData);
        }
    }
    return pstNewElement;
}

DLinkedListElement_TypeDef* DLinkedList__pstInsertPrevious(DLinkedList_TypeDef* pstList,
                                                        DLinkedListElement_TypeDef* pstNextElement)
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

            DLinkedList__enInsertPrevious(pstList, pstNextElement, pstNewElement);
        }
    }
    return pstNewElement;
}

DLinkedList_nSTATUS  DLinkedList__enInsertEnd_WithData(DLinkedList_TypeDef* pstList,
                                           DLinkedListElement_TypeDef* pstNewElement,
                                           void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = DLinkedList__pstGetTail(pstList);
        enStatus = DLinkedList__enInsertNext_WithData(pstList, pstEndElement, pstNewElement, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enInsertEnd(DLinkedList_TypeDef* pstList,
                                           DLinkedListElement_TypeDef* pstNewElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = DLinkedList__pstGetTail(pstList);
        enStatus = DLinkedList__enInsertNext(pstList, pstEndElement, pstNewElement);
    }
    return (enStatus);
}

DLinkedListElement_TypeDef*  DLinkedList__pstInsertEnd_WithData(DLinkedList_TypeDef* pstList,
                                                    void* pvData)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = DLinkedList__pstGetTail(pstList);
        pstNewElement = DLinkedList__pstInsertNext_WithData(pstList, pstEndElement, pvData);
    }
    return (pstNewElement);
}

DLinkedListElement_TypeDef*  DLinkedList__pstInsertEnd(DLinkedList_TypeDef* pstList)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = DLinkedList__pstGetTail(pstList);
        pstNewElement = DLinkedList__pstInsertNext(pstList, pstEndElement);
    }
    return (pstNewElement);
}

DLinkedList_nSTATUS DLinkedList__enInsertBegin_WithData(DLinkedList_TypeDef* pstList,
                                            DLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstBeginElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = DLinkedList__pstGetHead(pstList);
        enStatus = DLinkedList__enInsertPrevious_WithData(pstList, pstBeginElement, pstNewElement, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enInsertBegin(DLinkedList_TypeDef* pstList,
                                            DLinkedListElement_TypeDef* pstNewElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* pstBeginElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = DLinkedList__pstGetHead(pstList);
        enStatus = DLinkedList__enInsertPrevious(pstList, pstBeginElement, pstNewElement);
    }
    return (enStatus);
}

DLinkedListElement_TypeDef* DLinkedList__pstInsertBegin_WithData(DLinkedList_TypeDef* pstList, void* pvData)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstBeginElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = DLinkedList__pstGetHead(pstList);
        pstNewElement = DLinkedList__pstInsertPrevious_WithData(pstList, pstBeginElement, pvData);
    }
    return (pstNewElement);
}

DLinkedListElement_TypeDef* DLinkedList__pstInsertBegin(DLinkedList_TypeDef* pstList)
{
    DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
    DLinkedListElement_TypeDef* pstBeginElement = (DLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginElement = DLinkedList__pstGetHead(pstList);
        pstNewElement = DLinkedList__pstInsertPrevious(pstList, pstBeginElement);
    }
    return (pstNewElement);
}

DLinkedList_nSTATUS  DLinkedList__enInsertPos_WithData(DLinkedList_TypeDef* pstList,
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
            if(0UL == u32Position) /*Insert Head*/
            {
                enStatus = DLinkedList__enInsertBegin_WithData(pstList, pstNewElement, pvData);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                enStatus = DLinkedList__enInsertEnd_WithData(pstList, pstNewElement, pvData);
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
                    enStatus = DLinkedList__enInsertNext_WithData(pstList, pstElement, pstNewElement, pvData);
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
                    enStatus = DLinkedList__enInsertPrevious_WithData(pstList, pstElement, pstNewElement, pvData);
                }
            }
        }
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enInsertPos(DLinkedList_TypeDef* pstList,
                                           DLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position)
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
            if(0UL == u32Position) /*Insert Head*/
            {
                enStatus = DLinkedList__enInsertBegin(pstList, pstNewElement);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                enStatus = DLinkedList__enInsertEnd(pstList, pstNewElement);
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
                    enStatus = DLinkedList__enInsertNext(pstList, pstElement, pstNewElement);
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
                    enStatus = DLinkedList__enInsertPrevious(pstList, pstElement, pstNewElement);
                }
            }
        }
    }
    return (enStatus);
}

DLinkedListElement_TypeDef*  DLinkedList__pstInsertPos_WithData(DLinkedList_TypeDef* pstList,
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
            if(0UL == u32Position) /*Insert Head*/
            {
                pstNewElement = DLinkedList__pstInsertBegin_WithData(pstList, pvData);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                pstNewElement = DLinkedList__pstInsertEnd_WithData(pstList, pvData);
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
                    pstNewElement = DLinkedList__pstInsertNext_WithData(pstList, pstElement, pvData);
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
                    pstNewElement = DLinkedList__pstInsertPrevious_WithData(pstList, pstElement, pvData);
                }
            }
        }
    }
    return (pstNewElement);
}


DLinkedListElement_TypeDef*  DLinkedList__pstInsertPos(DLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position)
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
            if(0UL == u32Position) /*Insert Head*/
            {
                pstNewElement = DLinkedList__pstInsertBegin(pstList);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                pstNewElement = DLinkedList__pstInsertEnd(pstList);
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
                    pstNewElement = DLinkedList__pstInsertNext(pstList, pstElement);
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
                    pstNewElement = DLinkedList__pstInsertPrevious(pstList, pstElement);
                }
            }
        }
    }
    return (pstNewElement);
}

