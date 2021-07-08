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

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>

#include <stdlib.h>


 DLinkedListElement_TypeDef* DLinkedList__pstAddNext(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstElement, void* pvData)
{
     DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstElementNextNode = (DLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;

     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         u32SizeReg = DLinkedList__u32GetSize(pstList);
         if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL == u32SizeReg))
         {
            #if defined (__TI_ARM__ )
             pstNewElement = (DLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
             pstNewElement = (DLinkedListElement_TypeDef*) malloc(sizeof(DLinkedListElement_TypeDef));
            #endif

            if((uint32_t) 0UL != (uint32_t) pstNewElement)
            {
                DLinkedList__vSetElementData(pstNewElement, pvData);

                if(0UL == u32SizeReg)
                {
                    DLinkedList__vSetHead(pstList, pstNewElement);

                    DLinkedList__vSetElementNextNode(pstNewElement, (DLinkedListElement_TypeDef*) 0UL );
                    DLinkedList__vSetElementPreviousNode(pstNewElement, (DLinkedListElement_TypeDef*) 0UL );

                    DLinkedList__vSetTail(pstList, pstNewElement);
                }
                else
                {
                    pstElementNextNode = DLinkedList__pstGetElementNextNode(pstElement);

                    DLinkedList__vSetElementNextNode(pstNewElement, pstElementNextNode );
                    DLinkedList__vSetElementPreviousNode(pstNewElement, pstElement);

                    if((uint32_t) 0UL == (uint32_t) pstElementNextNode)
                    {
                        DLinkedList__vSetTail(pstList, pstNewElement);
                    }
                    else
                    {
                        DLinkedList__vSetElementPreviousNode(pstElementNextNode, pstNewElement);
                    }
                    DLinkedList__vSetElementNextNode(pstElement, pstNewElement);
                }

                u32SizeReg++;
                DLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return pstNewElement;
}

 DLinkedListElement_TypeDef* DLinkedList__pstAddPrevious(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstElement, void* pvData)
{
     DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstElementPreviousNode = (DLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         u32SizeReg = DLinkedList__u32GetSize(pstList);
         if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL == u32SizeReg))
         {
            #if defined (__TI_ARM__ )
             pstNewElement = (DLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
             pstNewElement = (DLinkedListElement_TypeDef*) malloc(sizeof(DLinkedListElement_TypeDef));
            #endif

            if((uint32_t) 0UL != (uint32_t) pstNewElement)
            {
                DLinkedList__vSetElementData(pstNewElement, pvData);

                if(0UL == u32SizeReg)
                {
                    DLinkedList__vSetHead(pstList, pstNewElement);

                    DLinkedList__vSetElementNextNode(pstNewElement, (DLinkedListElement_TypeDef*) 0UL );
                    DLinkedList__vSetElementPreviousNode(pstNewElement, (DLinkedListElement_TypeDef*) 0UL );

                    DLinkedList__vSetTail(pstList, pstNewElement);
                }
                else
                {
                    pstElementPreviousNode = DLinkedList__pstGetElementPreviousNode(pstElement);

                    DLinkedList__vSetElementNextNode(pstNewElement, pstElement );
                    DLinkedList__vSetElementPreviousNode(pstNewElement, pstElementPreviousNode);

                    if((uint32_t) 0UL == (uint32_t) pstElementPreviousNode)
                    {
                        DLinkedList__vSetHead(pstList, pstNewElement);
                    }
                    else
                    {
                        DLinkedList__vSetElementNextNode(pstElementPreviousNode, pstNewElement);
                    }
                    DLinkedList__vSetElementPreviousNode(pstElement, pstNewElement);
                }
                u32SizeReg++;
                DLinkedList__vSetSize(pstList, u32SizeReg);

                }
        }
    }
    return pstNewElement;
}

 DLinkedListElement_TypeDef*  DLinkedList__pstAddEnd(DLinkedList_TypeDef* pstList, void* pvData)
 {
     DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstEndElement = DLinkedList__pstGetTail(pstList);
         pstNewElement = DLinkedList__pstAddNext(pstList, pstEndElement, pvData);
     }
     return pstNewElement;
 }

 DLinkedListElement_TypeDef*  DLinkedList__pstAddBegin(DLinkedList_TypeDef* pstList, void* pvData)
 {
     DLinkedListElement_TypeDef* pstNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstBeginElement = (DLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstBeginElement = DLinkedList__pstGetHead(pstList);
         pstNewElement = DLinkedList__pstAddPrevious(pstList, pstBeginElement, pvData);
     }
     return pstNewElement;
 }

 DLinkedListElement_TypeDef*  DLinkedList__pstAddPos(DLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
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

                 if(u32Direction == 0UL) /*Forward*/
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
     return pstNewElement;
 }



