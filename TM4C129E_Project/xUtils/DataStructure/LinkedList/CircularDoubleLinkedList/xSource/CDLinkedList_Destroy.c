/**
 *
 * @file CDLinkedList_Destroy.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Destroy.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Remove.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Size.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Tail.h>
#include <stdlib.h>


#include <stdlib.h>

void CDLinkedList__vDestroy(CDLinkedList_TypeDef* pstList)
 {
     CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
     CDLinkedListElement_TypeDef* pstTailElement = (CDLinkedListElement_TypeDef*) 0UL;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void (*pfvListDestroy) (void* List) = (void (*) (void* List) )0UL;

     if((CDLinkedList_TypeDef*)0 != pstList)
     {
         enStatus = CDLinkedList_enSTATUS_OK;
         u32SizeReg = CDLinkedList__u32GetSize(pstList);
         pfvListDestroy = pstList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             pstTailElement = CDLinkedList__pstGetTail(pstList);
             enStatus = CDLinkedList__enRemove(pstList, pstTailElement, (void **) & pvDataElement);
             if((CDLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) pstList->pfvDestroyElementData))
             {
                 pstList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = CDLinkedList__u32GetSize(pstList);
         }

         pstList->pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
         pstList->pfvDestroy = (void (*) (void* List)) 0UL;
         pstList->pfvDestroyElementData = (void (*) (void* DataContainer)) 0UL;
         pstList->pstHead = (CDLinkedListElement_TypeDef *) 0UL;
         pstList->pstTail = (CDLinkedListElement_TypeDef *) 0UL;
         pstList->u32Size = 0UL;

         if((CDLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) pfvListDestroy))
         {
             pfvListDestroy(pstList);
             pstList = (CDLinkedList_TypeDef*)0UL;
         }

     }
 }





