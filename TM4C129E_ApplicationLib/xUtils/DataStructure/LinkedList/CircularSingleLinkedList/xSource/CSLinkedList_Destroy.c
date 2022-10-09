/**
 *
 * @file CSLinkedList_Destroy.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Destroy.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Size.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Head.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Remove.h>

void CSLinkedList__vDestroy(CSLinkedList_t* pstList)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstHeadItem = (CSLinkedListItem_t*) 0UL;
    void * pvDataItem = (void*)0UL;
    UBase_t uxSizeReg = 0UL;
    void (*pvfListDestroy) (void* List) = (void (*) (void* List) )0UL;

    if((CSLinkedList_t*)0 != pstList)
    {
        enStatus = CSLinkedList_enERROR_OK;
        uxSizeReg = CSLinkedList__uxGetSize(pstList);
        pvfListDestroy = pstList->pvfDestroy;
        while (uxSizeReg> 0UL)
        {
            pstHeadItem = CSLinkedList__pstGetHead(pstList);
            enStatus = CSLinkedList__enRemoveNextInList_GetData(pstList, pstHeadItem, (void **) & pvDataItem);
            if((CSLinkedList_enERROR_OK == enStatus ) && ( (UBase_t) 0 != (UBase_t) pstList->pvfDestroyItemData))
            {
                pstList->pvfDestroyItemData(pvDataItem);
            }
            uxSizeReg = CSLinkedList__uxGetSize(pstList);
        }

        pstList->pfuxMatch = (UBase_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
        pstList->pvfDestroy = (void (*) (void* List)) 0UL;
        pstList->pvfDestroyItemData = (void (*) (void* DataContainer)) 0UL;
        pstList->pvfDestroyItem = (void (*) (void* Item)) 0UL;
        pstList->pstHead = (CSLinkedListItem_t *) 0UL;
        pstList->pstTail = (CSLinkedListItem_t *) 0UL;
        pstList->pstLastItemRead = (CSLinkedListItem_t*)  0UL;
        pstList->uxSize = 0UL;

        if((CSLinkedList_enERROR_OK == enStatus ) && ( (UBase_t) 0 != (UBase_t) pvfListDestroy))
        {
            pvfListDestroy(pstList);
            pstList = (CSLinkedList_t*)0UL;
        }
    }
}
