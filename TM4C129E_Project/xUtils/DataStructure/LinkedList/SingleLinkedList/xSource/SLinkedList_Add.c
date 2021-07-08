/**
 *
 * @file SLinkedList_Add.c
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>

#include <stdlib.h>


 SLinkedListElement_TypeDef* SLinkedList__pstAddNext(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstElement, void* pvData)
{
     SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* pstListHeadNode = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* pstElementNextNode = (SLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
        #if defined (__TI_ARM__ )
         pstNewElement = (SLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(SLinkedListElement_TypeDef));
        #elif defined (__GNUC__ )
         pstNewElement = (SLinkedListElement_TypeDef*) malloc(sizeof(SLinkedListElement_TypeDef));
        #endif

        if((uint32_t) 0UL != (uint32_t) pstNewElement)
        {
            SLinkedList__vSetElementData(pstNewElement, pvData);

            u32SizeReg = SLinkedList__u32GetSize(pstList);
            if((uint32_t) 0UL == (uint32_t) pstElement)
            {
                if(0UL == u32SizeReg)
                {
                    SLinkedList__vSetTail(pstList, pstNewElement);
                }
                pstListHeadNode = SLinkedList__pstGetHead(pstList);
                SLinkedList__vSetElementNextNode(pstNewElement, pstListHeadNode);
                SLinkedList__vSetHead(pstList, pstNewElement);
            }
            else
            {
                pstElementNextNode = SLinkedList__pstGetElementNextNode(pstElement);
                if((uint32_t) 0UL == (uint32_t) pstElementNextNode)
                {
                    SLinkedList__vSetTail(pstList, pstNewElement);
                }
                SLinkedList__vSetElementNextNode(pstNewElement, pstElementNextNode);
                SLinkedList__vSetElementNextNode(pstElement, pstNewElement);
            }
            u32SizeReg++;
            SLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return pstNewElement;
}



 SLinkedListElement_TypeDef*  SLinkedList__pstAddEnd(SLinkedList_TypeDef* pstList, void* pvData)
 {
     SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* pstEndElement = (SLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstEndElement = SLinkedList__pstGetTail(pstList);
         pstNewElement = SLinkedList__pstAddNext(pstList, pstEndElement, pvData);
     }
     return pstNewElement;
 }

 SLinkedListElement_TypeDef*  SLinkedList__pstAddBegin(SLinkedList_TypeDef* pstList, void* pvData)
 {
     SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstNewElement = SLinkedList__pstAddNext(pstList, (SLinkedListElement_TypeDef*) 0UL, pvData);
     }
     return pstNewElement;
 }

 SLinkedListElement_TypeDef*  SLinkedList__pstAddPos(SLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
 {
     SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         u32SizeList = SLinkedList__u32GetSize(pstList);
         if(u32Position <= u32SizeList)
         {
             if(0UL == u32Position)
             {
                 pstElement = (SLinkedListElement_TypeDef*) 0UL;
             }
             else if((u32SizeList) == u32Position)
             {
                 pstElement = SLinkedList__pstGetTail(pstList);
             }
             else
             {
                 pstElement = SLinkedList__pstGetHead(pstList);
                 u32Position--;
                 while(0UL != u32Position)
                 {
                     pstElement = SLinkedList__pstGetElementNextNode(pstElement);
                     u32Position--;
                 }
             }
             pstNewElement = SLinkedList__pstAddNext(pstList, pstElement, pvData);
         }
     }
     return pstNewElement;
 }
