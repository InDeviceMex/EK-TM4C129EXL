/**
 *
 * @file CDLinkedList_Data.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Data.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/CDLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/CDLinkedList_Element.h>



 void* CDLinkedList__pvGetNodeDataPos(const CDLinkedList_TypeDef* pstList, uint32_t u32Position)
 {
     CDLinkedListElement_TypeDef* pstElement = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = CDLinkedList__pstGetNodePos(pstList, u32Position);
         if((uint32_t) 0UL != (uint32_t) pstElement)
         {
             pvElementData = CDLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }


 void* CDLinkedList__pvGetNodeDataEnd(const CDLinkedList_TypeDef* pstList)
 {
     CDLinkedListElement_TypeDef* pstElement = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = CDLinkedList__pstGetNodeEnd(pstList);
         if((uint32_t) pstElement != (uint32_t) 0UL)
         {
             pvElementData = CDLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }

 void* CDLinkedList__pvGetNodeDataBegin(const CDLinkedList_TypeDef* pstList)
 {
     CDLinkedListElement_TypeDef* pstElement = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = CDLinkedList__pstGetNodeBegin(pstList);
         if((uint32_t) pstElement != (uint32_t) 0UL)
         {
             pvElementData = CDLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }



