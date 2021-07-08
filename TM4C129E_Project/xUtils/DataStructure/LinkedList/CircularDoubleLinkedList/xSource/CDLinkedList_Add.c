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

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/CDLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/CDLinkedList_Element.h>

#include <stdlib.h>


 CDLinkedListElement_TypeDef* CDLinkedList__pstAddNext(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void* pvData)
{
     CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* pstElementTemp = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* pstElementNextNode = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* pstHeadNode = (CDLinkedListElement_TypeDef*) 0UL ;
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

            if((uint32_t) 0UL != (uint32_t) pstNewElement)
            {
                CDLinkedList__vSetElementData(pstNewElement, pvData);

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

                u32SizeReg++;
                CDLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return pstNewElement;
}

 CDLinkedListElement_TypeDef* CDLinkedList__pstAddPrevious(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void* pvData)
 {
      CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
      CDLinkedListElement_TypeDef* pstElementTemp = (CDLinkedListElement_TypeDef*) 0UL ;
      CDLinkedListElement_TypeDef* pstElementPreviousNode = (CDLinkedListElement_TypeDef*) 0UL ;
      CDLinkedListElement_TypeDef* pstTailNode = (CDLinkedListElement_TypeDef*) 0UL ;
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

             if((uint32_t) 0UL != (uint32_t) pstNewElement)
             {
                 CDLinkedList__vSetElementData(pstNewElement, pvData);

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
     return pstNewElement;
 }

 CDLinkedListElement_TypeDef*  CDLinkedList__pstAddEnd(CDLinkedList_TypeDef* pstList, void* pvData)
 {
     CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* pstEndElement = (CDLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstEndElement = CDLinkedList__pstGetTail(pstList);
         pstNewElement = CDLinkedList__pstAddNext(pstList, pstEndElement, pvData);
     }
     return pstNewElement;
 }

 CDLinkedListElement_TypeDef*  CDLinkedList__pstAddBegin(CDLinkedList_TypeDef* pstList, void* pvData)
 {
     CDLinkedListElement_TypeDef* pstNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* pstBeginElement = (CDLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstBeginElement = CDLinkedList__pstGetHead(pstList);
         pstNewElement = CDLinkedList__pstAddPrevious(pstList, pstBeginElement, pvData);
     }
     return pstNewElement;
 }

 CDLinkedListElement_TypeDef*  CDLinkedList__pstAddPos(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
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
                 pstNewElement = CDLinkedList__pstAddBegin(pstList, pvData);
             }
             else if(u32Position == u32SizeList) /*Add Tail*/
             {
                 pstNewElement = CDLinkedList__pstAddEnd(pstList, pvData);
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
                     pstNewElement = CDLinkedList__pstAddNext(pstList, pstElement, pvData);
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
                     pstNewElement = CDLinkedList__pstAddPrevious(pstList, pstElement, pvData);
                 }
             }
         }
     }
     return pstNewElement;
 }

