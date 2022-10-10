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

SLinkedList_nERROR SLinkedList__enDestroy(SLinkedList_t* pstList)
{
    void * pvDataItem;
    SLinkedList_pvfDestroy_t pvfListDestroy;
    UBase_t uxSizeReg;
    SLinkedList_nERROR enErrorReg;

    uxSizeReg = 0UL;
    pvDataItem = (void*) 0UL;
    pvfListDestroy = (SLinkedList_pvfDestroy_t) 0UL;
    enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeReg);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        pvfListDestroy = pstList->pvfDestroy;
        while ((0UL < uxSizeReg) && (SLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = SLinkedList__enRemoveNextInList_GetData(pstList, (SLinkedListItem_t*)0, (void **) & pvDataItem);

            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                /*Item is destroyed inside Remove function*/
                if(0UL != (uintptr_t) pstList->pvfDestroyItemData)
                {
                    pstList->pvfDestroyItemData(pvDataItem);
                }
                enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeReg);
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        pstList->pfuxMatch = (SLinkedList_pfuxMatch_t) 0UL;
        pstList->pvfDestroy = (SLinkedList_pvfDestroy_t) 0UL;
        pstList->pvfDestroyItemData = (SLinkedList_pvfDestroyItemData_t) 0UL;
        pstList->pvfDestroyItem = (SLinkedList_pvfDestroyItem_t) 0UL;
        pstList->pstHead = (SLinkedListItem_t *) 0UL;
        pstList->pstTail = (SLinkedListItem_t *) 0UL;
        pstList->pstLastItemRead = (SLinkedListItem_t*)  0UL;
        pstList->uxSize = 0UL;

        if(0UL != (uintptr_t) pvfListDestroy)
        {
            pvfListDestroy(pstList);
            pstList = (SLinkedList_t*) 0UL;
        }
    }
    return (enErrorReg);
}
