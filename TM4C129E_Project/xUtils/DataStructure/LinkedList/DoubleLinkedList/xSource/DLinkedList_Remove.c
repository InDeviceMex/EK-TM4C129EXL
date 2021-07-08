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

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>

#include <stdlib.h>


 DLinkedList_nSTATUS DLinkedList__enRemove(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstElement, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* pstHeadElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstElementNextNode = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstElementPreviousNode = (DLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         u32SizeReg = DLinkedList__u32GetSize(pstList);
         if(((uint32_t) 0UL != (uint32_t) pstElement) || (0UL != u32SizeReg))
         {
             enStatus = DLinkedList_enSTATUS_OK;
             *pvData = DLinkedList__pvGetElementData(pstElement);
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

             DLinkedList__vSetElementNextNode(pstElement,  (DLinkedListElement_TypeDef *) 0UL);
             DLinkedList__vSetElementPreviousNode(pstElement,  (DLinkedListElement_TypeDef *) 0UL);
             DLinkedList__vSetElementData(pstElement,  (void *) 0UL);
             free(pstElement);
             pstElement = (DLinkedListElement_TypeDef*) 0UL;

             u32SizeReg--;
             DLinkedList__vSetSize(pstList, u32SizeReg);
         }
     }
     return enStatus;
 }


 DLinkedList_nSTATUS DLinkedList__enRemoveNext(DLinkedList_TypeDef* pstList, const DLinkedListElement_TypeDef* pstElement, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* pstElementNextNode = (DLinkedListElement_TypeDef*) 0UL ;

     if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pstElement) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         pstElementNextNode = DLinkedList__pstGetElementNextNode(pstElement);
         enStatus = DLinkedList__enRemove(pstList, pstElementNextNode, pvData);
     }
     return enStatus;
 }

 DLinkedList_nSTATUS DLinkedList__enRemovePrevious(DLinkedList_TypeDef* pstList, const DLinkedListElement_TypeDef* pstElement, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* pstElementPreviousNode = (DLinkedListElement_TypeDef*) 0UL ;

     if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pstElement) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         pstElementPreviousNode = DLinkedList__pstGetElementPreviousNode(pstElement);
         enStatus = DLinkedList__enRemove(pstList, pstElementPreviousNode, pvData);
     }
     return enStatus;
 }

 DLinkedList_nSTATUS  DLinkedList__enRemoveEnd(DLinkedList_TypeDef* pstList, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         pstEndElement = DLinkedList__pstGetTail(pstList);
         enStatus = DLinkedList__enRemove(pstList, pstEndElement, pvData);
     }
     return enStatus;
 }

 DLinkedList_nSTATUS  DLinkedList__enRemoveBegin(DLinkedList_TypeDef* pstList, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* pstEndElement = (DLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         pstEndElement = DLinkedList__pstGetHead(pstList);
         enStatus = DLinkedList__enRemove(pstList, pstEndElement, pvData);
     }
     return enStatus;
 }

 DLinkedList_nSTATUS  DLinkedList__enRemovePos(DLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData)
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
                  enStatus = DLinkedList__enRemoveBegin(pstList, pvData);
              }
              else if((uint32_t) u32Position == (uint32_t) (u32SizeList - 1UL)) /*Remove Tail*/
              {
                  enStatus = DLinkedList__enRemoveEnd(pstList, pvData);
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
                      enStatus = DLinkedList__enRemove(pstList, pstElement, pvData);
                  }
                  else /*Backward*/
                  {
                      pstElement = DLinkedList__pstGetTail(pstList);
                      while(0UL != u32SizeOptimum)
                      {
                          pstElement = DLinkedList__pstGetElementPreviousNode(pstElement);
                          u32SizeOptimum--;
                      }
                      enStatus = DLinkedList__enRemove(pstList, pstElement, pvData);
                  }
              }
          }
     }
     return enStatus;
 }


