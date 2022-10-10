/**
 *
 * @file DLinkedList_Init.c
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

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Init.h>
#include <stdlib.h>

DLinkedList_nERROR DLinkedList__enCreate(DLinkedList_t** pstList,
                                          DLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                          DLinkedList_pvfDestroyItem_t pvfDestroyItemArg)
{
    DLinkedList_t *pstListReg;
    DLinkedList_nERROR enErrorReg;

    pstListReg = (DLinkedList_t*) 0U;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstListReg = (DLinkedList_t*) memalign((size_t) 4, (size_t) sizeof(DLinkedList_t));
#elif defined (__GNUC__ )
        pstListReg = (DLinkedList_t*) malloc(sizeof(DLinkedList_t));
#endif
        if(0UL == (uintptr_t) pstListReg)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        pstListReg->uxSize = 0UL;
        pstListReg->pvfDestroy = &free;
        pstListReg->pvfDestroyItemData = pvfDestroyItemDataArg;
        pstListReg->pvfDestroyItem = pvfDestroyItemArg;
        pstListReg->pstHead = (DLinkedListItem_t*)  0UL;
        pstListReg->pstTail = (DLinkedListItem_t*)  0UL;
        pstListReg->pstLastItemRead = (DLinkedListItem_t*)  0UL;

        *pstList = pstListReg;
    }
    return (enErrorReg);
}


DLinkedList_nERROR DLinkedList__enInit(DLinkedList_t* pstList,
                                       DLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                       DLinkedList_pvfDestroyItem_t pvfDestroyItemArg,
                                       DLinkedList_pvfDestroy_t pvfDestroyArg)
{
    DLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    else
    {
        enErrorReg = DLinkedList_enERROR_OK;
        pstList->uxSize = 0UL;
        pstList->pvfDestroy = pvfDestroyArg;
        pstList->pvfDestroyItemData = pvfDestroyItemDataArg;
        pstList->pvfDestroyItem = pvfDestroyItemArg;
        pstList->pstHead = (DLinkedListItem_t*)  0UL;
        pstList->pstTail = (DLinkedListItem_t*)  0UL;
        pstList->pstLastItemRead = (DLinkedListItem_t*)  0UL;
    }
    return (enErrorReg);
}



