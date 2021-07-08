/**
 *
 * @file SLinkedList_Reverse.c
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Reverse.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>

#include <stdlib.h>


 SLinkedList_nSTATUS SLinkedList__enReverse(SLinkedList_TypeDef* pstList)
 {
     SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* pstPreviousElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* pstNextElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* pstHeadElement = (SLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstHeadElement = SLinkedList__pstGetHead(pstList);
         SLinkedList__vSetTail(pstList, pstHeadElement);
         while((uint32_t) 0UL != (uint32_t) pstHeadElement)
         {
             pstNextElement = SLinkedList__pstGetElementNextNode(pstHeadElement);
             SLinkedList__vSetElementNextNode(pstHeadElement, pstPreviousElement);
             pstPreviousElement = pstHeadElement;
             pstHeadElement = pstNextElement;
         }
         pstHeadElement = pstPreviousElement;
         SLinkedList__vSetHead(pstList, pstHeadElement);
     }
     return enStatus;
 }


