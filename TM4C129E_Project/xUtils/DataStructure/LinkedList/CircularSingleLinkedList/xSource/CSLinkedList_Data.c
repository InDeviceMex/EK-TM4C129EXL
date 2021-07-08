/**
 *
 * @file CSLinkedList_Data.c
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Data.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/CSLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/CSLinkedList_Element.h>



 void* CSLinkedList__pvGetNodeDataPos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position)
 {
     CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = CSLinkedList__pstGetNodePos(pstList, u32Position);
         if((uint32_t) 0UL != (uint32_t) pstElement)
         {
             pvElementData = CSLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }


 void* CSLinkedList__pvGetNodeDataEnd(const CSLinkedList_TypeDef* pstList)
 {
     CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = CSLinkedList__pstGetNodeEnd(pstList);
         if((uint32_t) 0UL != (uint32_t) pstElement)
         {
             pvElementData = CSLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }

 void* CSLinkedList__pvGetNodeDataBegin(const CSLinkedList_TypeDef* pstList)
 {
     CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) pstList)
     {
         pstElement = CSLinkedList__pstGetNodeBegin(pstList);
         if((uint32_t) 0UL != (uint32_t) pstElement)
         {
             pvElementData = CSLinkedList__pvGetElementData(pstElement);
         }
     }
     return pvElementData;
 }



