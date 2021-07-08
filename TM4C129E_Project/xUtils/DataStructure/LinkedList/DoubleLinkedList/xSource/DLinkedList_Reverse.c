/**
 *
 * @file DLinkedList_Reverse.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Reverse.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>

#include <stdlib.h>


 DLinkedList_nSTATUS DLinkedList__enReverse(DLinkedList_TypeDef* pstList)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* pstNextElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstNextNextElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstNextPreviousElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstElement = DLinkedList__pstGetHead(pstList);
         DLinkedList__vSetTail(pstList, pstElement);
         if((uint32_t) 0UL != (uint32_t) pstElement)
         {
             pstNextElement = DLinkedList__pstGetElementNextNode(pstElement);
             if((uint32_t) 0UL != (uint32_t) pstNextElement)
             {
                 enStatus = DLinkedList_enSTATUS_OK;
                 DLinkedList__vSetElementNextNode(pstElement, (DLinkedListElement_TypeDef*)0UL);
                 DLinkedList__vSetElementPreviousNode(pstElement, pstNextElement);

                 while((uint32_t) 0UL != (uint32_t) pstNextElement)
                 {
                     pstNextNextElement = DLinkedList__pstGetElementNextNode(pstNextElement);
                     DLinkedList__vSetElementPreviousNode(pstNextElement, pstNextNextElement);
                     DLinkedList__vSetElementNextNode(pstNextElement, pstElement);
                     pstNextPreviousElement = DLinkedList__pstGetElementPreviousNode(pstNextElement);

                     pstElement = pstNextElement;
                     pstNextElement = pstNextPreviousElement;
                 }
                 DLinkedList__vSetHead(pstList, pstElement);
             }
         }
     }
     return enStatus;
 }



