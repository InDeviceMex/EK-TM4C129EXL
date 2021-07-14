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

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Size.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>

void SLinkedList__vDestroy(SLinkedList_TypeDef* pstList)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    void * pvDataItem = (void*)0UL;
    uint32_t u32SizeReg = 0UL;
    void (*pfvListDestroy) (void* List) = (void (*) (void* List) )0UL;

    if((SLinkedList_TypeDef*)0 != pstList)
    {
        enStatus = SLinkedList_enSTATUS_OK;
        u32SizeReg = SLinkedList__u32GetSize(pstList);
        pfvListDestroy = pstList->pfvDestroy;
        while (u32SizeReg > 0UL)
        {
            enStatus = SLinkedList__enRemoveNextInList_GetData(pstList, (SLinkedListItem_TypeDef*)0, (void **) & pvDataItem);
            if((SLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) pstList->pfvDestroyItemData))
            {
                pstList->pfvDestroyItemData(pvDataItem);
            }
            u32SizeReg = SLinkedList__u32GetSize(pstList);
        }

        pstList->pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
        pstList->pfvDestroy = (void (*) (void* List)) 0UL;
        pstList->pfvDestroyItemData = (void (*) (void* DataContainer)) 0UL;
        pstList->pfvDestroyItem = (void (*) (void* Item)) 0UL;
        pstList->pstHead = (SLinkedListItem_TypeDef *) 0UL;
        pstList->pstTail = (SLinkedListItem_TypeDef *) 0UL;
        pstList->u32Size = 0UL;

        if((SLinkedList_enSTATUS_OK == enStatus ) && (0UL != (uint32_t) pfvListDestroy))
        {
            pfvListDestroy(pstList);
            pstList = (SLinkedList_TypeDef*) 0UL;
        }
    }
}
