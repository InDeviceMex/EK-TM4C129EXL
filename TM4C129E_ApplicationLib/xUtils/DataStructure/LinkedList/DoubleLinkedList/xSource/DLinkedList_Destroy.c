/**
 *
 * @file DLinkedList_Destroy.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Destroy.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Size.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Tail.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Remove.h>

DLinkedList_nERROR DLinkedList__enDestroy(DLinkedList_t* pstList)
{
    void * pvDataItem;
    DLinkedListItem_t* pstTailItem;
    DLinkedList_pvfDestroy_t pvfListDestroy;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    uxSizeReg = 0UL;
    pvDataItem = (void*) 0UL;
    pstTailItem = (DLinkedListItem_t*) 0UL;
    pvfListDestroy = (DLinkedList_pvfDestroy_t) 0UL;
    enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeReg);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        pvfListDestroy = pstList->pvfDestroy;
        while ((0UL < uxSizeReg) && (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList__enGetTail(pstList, &pstTailItem);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList__enRemoveInList_GetData(pstList, pstTailItem, (void **) & pvDataItem);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                /*Item is destroyed inside Remove function*/
                if(0UL != (uintptr_t) pstList->pvfDestroyItemData)
                {
                    pstList->pvfDestroyItemData(pvDataItem);
                }
                enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeReg);
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        pstList->pfuxMatch = (DLinkedList_pfuxMatch_t) 0UL;
        pstList->pvfDestroy = (DLinkedList_pvfDestroy_t) 0UL;
        pstList->pvfDestroyItemData = (DLinkedList_pvfDestroyItemData_t) 0UL;
        pstList->pvfDestroyItem = (DLinkedList_pvfDestroyItem_t) 0UL;
        pstList->pstHead = (DLinkedListItem_t *) 0UL;
        pstList->pstTail = (DLinkedListItem_t *) 0UL;
        pstList->pstLastItemRead = (DLinkedListItem_t*)  0UL;
        pstList->uxSize = 0UL;

        if(0UL != (uintptr_t) pvfListDestroy)
        {
            pvfListDestroy(pstList);
            pstList = (DLinkedList_t*) 0UL;
        }
    }
    return (enErrorReg);
}
