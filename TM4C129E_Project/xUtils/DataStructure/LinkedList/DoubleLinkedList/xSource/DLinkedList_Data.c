/**
 *
 * @file DLinkedList_Data.c
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

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Data.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>



 void* DLinkedList__pvGetNodeDataPos(const DLinkedList_TypeDef* pstList, uint32_t u32Position)
 {
     DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = DLinkedList__pstGetNodePos(pstList, u32Position);
         if((uint32_t) 0UL != (uint32_t) pstElement)
         {
             pvElementData = DLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }


 void* DLinkedList__pvGetNodeDataEnd(const DLinkedList_TypeDef* pstList)
 {
     DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = DLinkedList__pstGetNodeEnd(pstList);
         if((uint32_t) 0UL != (uint32_t) pstElement)
         {
             pvElementData = DLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }

 void* DLinkedList__pvGetNodeDataBegin(const DLinkedList_TypeDef* pstList)
 {
     DLinkedListElement_TypeDef* pstElement = (DLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = DLinkedList__pstGetNodeBegin(pstList);
         if((uint32_t) 0UL != (uint32_t) pstElement)
         {
             pvElementData = DLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }


