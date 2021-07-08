/**
 *
 * @file SLinkedList_Destroy.c
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

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Destroy.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Size.h>
#include <stdlib.h>


#include <stdlib.h>

void SLinkedList__vDestroy(SLinkedList_TypeDef* pstList)
 {
     SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void (*pfvListDestroy) (void* List) = (void (*) (void* List) )0UL;

     if((SLinkedList_TypeDef*)0 != pstList)
     {
         enStatus = SLinkedList_enSTATUS_OK;
         u32SizeReg = SLinkedList__u32GetSize(pstList);
         pfvListDestroy = pstList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             enStatus = SLinkedList__enRemoveNext(pstList, (SLinkedListElement_TypeDef*)0, (void **) & pvDataElement);
             if((SLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) pstList->pfvDestroyElementData))
             {
                 pstList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = SLinkedList__u32GetSize(pstList);
         }

         pstList->pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
         pstList->pfvDestroy = (void (*) (void* List)) 0UL;
         pstList->pfvDestroyElementData = (void (*) (void* DataContainer)) 0UL;
         pstList->pstHead = (SLinkedListElement_TypeDef *) 0UL;
         pstList->pstTail = (SLinkedListElement_TypeDef *) 0UL;
         pstList->u32Size = 0UL;

         if((SLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) pfvListDestroy))
         {
             pfvListDestroy(pstList);
             pstList = (SLinkedList_TypeDef*)0UL;
         }

     }
 }

