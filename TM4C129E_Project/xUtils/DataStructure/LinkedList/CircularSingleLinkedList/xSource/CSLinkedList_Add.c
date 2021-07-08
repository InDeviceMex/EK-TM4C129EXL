/**
 *
 * @file CSLinkedList_Add.c
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
/**
 *
 * @file CSLinkedList_Add.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Add.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/CSLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/CSLinkedList_Element.h>

#include <stdlib.h>


 CSLinkedListElement_TypeDef* CSLinkedList__pstAddNext(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstElement, void* pvData)
{
     CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
     CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* pstNextElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* pstNewElement1 = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* pstListHeadNode = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* pstListTailNode = (CSLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
        #if defined (__TI_ARM__ )
         pstNewElement = (CSLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListElement_TypeDef));
        #elif defined (__GNUC__ )
         pstNewElement = (CSLinkedListElement_TypeDef*) malloc(sizeof(CSLinkedListElement_TypeDef));
        #endif

        if((uint32_t) 0UL != (uint32_t) pstNewElement)
        {
            CSLinkedList__vSetElementData(pstNewElement, pvData);

            u32SizeReg = CSLinkedList__u32GetSize(pstList);
            if(0UL == u32SizeReg) /*Empty List*/
            {
                pstNewElement1 = pstNewElement;
                CSLinkedList__vSetElementNextNode(pstNewElement, pstNewElement1);
                CSLinkedList__vSetHead(pstList, pstNewElement);
                CSLinkedList__vSetTail(pstList, pstNewElement);
            }
            else if((uint32_t) 0UL == (uint32_t) pstElement) /*Insert to head*/
            {
                    pstListTailNode = CSLinkedList__pstGetTail(pstList);
                    pstListHeadNode = CSLinkedList__pstGetHead(pstList);
                    CSLinkedList__vSetElementNextNode(pstNewElement, pstListHeadNode);
                    CSLinkedList__vSetElementNextNode(pstListTailNode, pstNewElement);
                    CSLinkedList__vSetHead(pstList, pstNewElement);
            }
            else /*Insert beetween nodes*/
            {
                enStatus = CSLinkedList__enIsTail(pstList, pstElement);
                if((uint32_t) CSLinkedList_enSTATUS_OK == (uint32_t) enStatus)
                {
                    CSLinkedList__vSetTail(pstList, pstNewElement);
                }
                pstNextElement = CSLinkedList__pstGetElementNextNode(pstElement);
                CSLinkedList__vSetElementNextNode(pstNewElement, pstNextElement);
                CSLinkedList__vSetElementNextNode(pstElement, pstNewElement);
            }
            u32SizeReg++;
            CSLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return pstNewElement;
}



 CSLinkedListElement_TypeDef*  CSLinkedList__pstAddEnd(CSLinkedList_TypeDef* pstList, void* pvData)
 {
     CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* pstEndElement = (CSLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstEndElement = CSLinkedList__pstGetTail(pstList);
         pstNewElement = CSLinkedList__pstAddNext(pstList, pstEndElement, pvData);
     }
     return pstNewElement;
 }

 CSLinkedListElement_TypeDef*  CSLinkedList__pstAddBegin(CSLinkedList_TypeDef* pstList, void* pvData)
 {
     CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         pstNewElement = CSLinkedList__pstAddNext(pstList, (CSLinkedListElement_TypeDef*) 0UL, pvData);
     }
     return pstNewElement;
 }

 CSLinkedListElement_TypeDef*  CSLinkedList__pstAddPos(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
 {
     CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
         u32SizeList = CSLinkedList__u32GetSize(pstList);
         if(u32Position <= u32SizeList)
         {
             if(0UL == u32Position)
             {
                 pstNewElement = CSLinkedList__pstAddBegin(pstList, pvData);
             }
             else if (u32Position == u32SizeList)
             {
                 pstNewElement = CSLinkedList__pstAddEnd(pstList, pvData);
             }
             else
             {
                 pstElement = CSLinkedList__pstGetHead(pstList);
                 u32Position--;
                 while(0UL != u32Position)
                 {
                     pstElement = CSLinkedList__pstGetElementNextNode(pstElement);
                     u32Position--;
                 }
                 pstNewElement = CSLinkedList__pstAddNext(pstList, pstElement, pvData);
             }
         }
     }
     return pstNewElement;
 }



