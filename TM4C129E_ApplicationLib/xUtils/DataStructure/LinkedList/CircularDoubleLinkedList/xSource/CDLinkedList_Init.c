/**
 *
 * @file CDLinkedList_Init.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Init.h>
#include <stdlib.h>

CDLinkedList_nERROR CDLinkedList__enCreate(CDLinkedList_t** pstList,
                                          CDLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                          CDLinkedList_pvfDestroyItem_t pvfDestroyItemArg)
{
    CDLinkedList_t *pstListReg;
    CDLinkedList_nERROR enErrorReg;

    pstListReg = (CDLinkedList_t*) 0U;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstListReg = (CDLinkedList_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedList_t));
#elif defined (__GNUC__ )
        pstListReg = (CDLinkedList_t*) malloc(sizeof(CDLinkedList_t));
#endif
        if(0UL == (uintptr_t) pstListReg)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        pstListReg->uxSize = 0UL;
        pstListReg->pvfDestroy = &free;
        pstListReg->pvfDestroyItemData = pvfDestroyItemDataArg;
        pstListReg->pvfDestroyItem = pvfDestroyItemArg;
        pstListReg->pstHead = (CDLinkedListItem_t*)  0UL;
        pstListReg->pstTail = (CDLinkedListItem_t*)  0UL;
        pstListReg->pstLastItemRead = (CDLinkedListItem_t*)  0UL;

        *pstList = pstListReg;
    }
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enInit(CDLinkedList_t* pstList,
                                       CDLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                       CDLinkedList_pvfDestroyItem_t pvfDestroyItemArg,
                                       CDLinkedList_pvfDestroy_t pvfDestroyArg)
{
    CDLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    else
    {
        enErrorReg = CDLinkedList_enERROR_OK;
        pstList->uxSize = 0UL;
        pstList->pvfDestroy = pvfDestroyArg;
        pstList->pvfDestroyItemData = pvfDestroyItemDataArg;
        pstList->pvfDestroyItem = pvfDestroyItemArg;
        pstList->pstHead = (CDLinkedListItem_t*)  0UL;
        pstList->pstTail = (CDLinkedListItem_t*)  0UL;
        pstList->pstLastItemRead = (CDLinkedListItem_t*)  0UL;
    }
    return (enErrorReg);
}





