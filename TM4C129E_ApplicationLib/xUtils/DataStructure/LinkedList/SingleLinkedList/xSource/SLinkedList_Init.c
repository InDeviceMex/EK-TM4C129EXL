/**
 *
 * @file SLinkedList_Init.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>
#include <stdlib.h>

SLinkedList_nERROR SLinkedList__enCreate(SLinkedList_t** pstList,
                                    SLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                    SLinkedList_pvfDestroyItem_t pvfDestroyItemArg)
{
    SLinkedList_t *pstListReg;
    SLinkedList_nERROR enErrorReg;

    pstListReg = (SLinkedList_t*) 0U;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstListReg = (SLinkedList_t*) memalign((size_t) 4U, (size_t) sizeof(SLinkedList_t));
#elif defined (__GNUC__ )
        pstListReg = (SLinkedList_t*) malloc(sizeof(SLinkedList_t));
#endif
        if(0UL == (uintptr_t) pstListReg)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        pstListReg->uxSize = 0UL;
        pstListReg->pvfDestroy = &free;
        pstListReg->pvfDestroyItemData = pvfDestroyItemDataArg;
        pstListReg->pvfDestroyItem = pvfDestroyItemArg;
        pstListReg->pstHead = (SLinkedListItem_t*)  0UL;
        pstListReg->pstTail = (SLinkedListItem_t*)  0UL;
        pstListReg->pstLastItemRead = (SLinkedListItem_t*)  0UL;

        *pstList = pstListReg;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInit(SLinkedList_t* pstList,
                                       SLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                       SLinkedList_pvfDestroyItem_t pvfDestroyItemArg,
                                       SLinkedList_pvfDestroy_t pvfDestroyArg)
{
    SLinkedList_nERROR enErrorReg;

    if(0UL == (uintptr_t) pstList)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    else
    {
        enErrorReg = SLinkedList_enERROR_OK;
        pstList->uxSize = 0UL;
        pstList->pvfDestroy = pvfDestroyArg;
        pstList->pvfDestroyItemData = pvfDestroyItemDataArg;
        pstList->pvfDestroyItem = pvfDestroyItemArg;
        pstList->pstHead = (SLinkedListItem_t*)  0UL;
        pstList->pstTail = (SLinkedListItem_t*)  0UL;
        pstList->pstLastItemRead = (SLinkedListItem_t*)  0UL;
    }
    return (enErrorReg);
}
