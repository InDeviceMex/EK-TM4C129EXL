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

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Size.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Tail.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Remove.h>

CDLinkedList_nERROR CDLinkedList__enDestroy(CDLinkedList_t* pstList)
{
    void * pvDataItem;
    CDLinkedListItem_t* pstTailItem;
    CDLinkedList_pvfDestroy_t pvfListDestroy;
    UBase_t uxSizeReg;
    CDLinkedList_nERROR enErrorReg;

    uxSizeReg = 0UL;
    pvDataItem = (void*) 0UL;
    pstTailItem = (CDLinkedListItem_t*) 0UL;
    pvfListDestroy = (CDLinkedList_pvfDestroy_t) 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeReg);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        pvfListDestroy = pstList->pvfDestroy;
        while ((0UL < uxSizeReg) && (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList__enGetTail(pstList, &pstTailItem);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enRemoveInList_GetData(pstList, pstTailItem, (void **) & pvDataItem);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                /*Item is destroyed inside Remove function*/
                if(0UL != (uintptr_t) pstList->pvfDestroyItemData)
                {
                    pstList->pvfDestroyItemData(pvDataItem);
                }
                enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeReg);
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        pstList->pfuxMatch = (CDLinkedList_pfuxMatch_t) 0UL;
        pstList->pvfDestroy = (CDLinkedList_pvfDestroy_t) 0UL;
        pstList->pvfDestroyItemData = (CDLinkedList_pvfDestroyItemData_t) 0UL;
        pstList->pvfDestroyItem = (CDLinkedList_pvfDestroyItem_t) 0UL;
        pstList->pstHead = (CDLinkedListItem_t *) 0UL;
        pstList->pstTail = (CDLinkedListItem_t *) 0UL;
        pstList->pstLastItemRead = (CDLinkedListItem_t*)  0UL;
        pstList->uxSize = 0UL;

        if(0UL != (uintptr_t) pvfListDestroy)
        {
            pvfListDestroy(pstList);
            pstList = (CDLinkedList_t*) 0UL;
        }
    }
    return (enErrorReg);
}
