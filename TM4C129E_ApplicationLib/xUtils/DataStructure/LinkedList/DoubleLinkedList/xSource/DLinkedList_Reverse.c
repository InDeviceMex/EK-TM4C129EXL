/**
 *
 * @file DLinkedList_Reverse.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Reverse.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

DLinkedList_nERROR DLinkedList__enReverse(DLinkedList_t* pstList)
{
    DLinkedListItem_t* pstNextItemReg;
    DLinkedListItem_t* pstNextNextNode;
    DLinkedListItem_t* pstNextPreviousNode;
    DLinkedListItem_t* pstItem;
    DLinkedList_nERROR enErrorReg;
    boolean_t boTerminate;

    pstNextItemReg = (DLinkedListItem_t*) 0UL ;
    pstNextNextNode = (DLinkedListItem_t*) 0UL ;
    pstNextPreviousNode = (DLinkedListItem_t*) 0UL ;
    pstItem = (DLinkedListItem_t*) 0UL ;
    boTerminate = FALSE;
    enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        /*List empty*/
        if(0UL == (uintptr_t) pstItem)
        {
            enErrorReg = DLinkedList_enERROR_EMPTY;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enSetTail(pstList, pstItem);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstNextItemReg);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        /*List only has one element*/
        if(0UL == (uintptr_t) pstNextItemReg)
        {
            boTerminate = TRUE;
        }
    }
    if((DLinkedList_enERROR_OK == enErrorReg) && (boTerminate == FALSE))
    {
        enErrorReg = DLinkedList_Item__enSetNextItem(pstItem, (DLinkedListItem_t*)0UL);
    }

    if((DLinkedList_enERROR_OK == enErrorReg) && (boTerminate == FALSE))
    {
        enErrorReg = DLinkedList_Item__enSetPreviousItem(pstItem, pstNextItemReg);
    }
    if((DLinkedList_enERROR_OK == enErrorReg) && (boTerminate == FALSE))
    {
        while((0UL == (uintptr_t) pstNextItemReg) && (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg  = DLinkedList_Item__enGetNextItem(pstNextItemReg, &pstNextNextNode);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg  = DLinkedList_Item__enSetPreviousItem(pstNextItemReg, pstNextNextNode);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg  = DLinkedList_Item__enSetNextItem(pstNextItemReg, pstItem);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg  = DLinkedList_Item__enGetPreviousItem(pstNextItemReg, &pstNextPreviousNode);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstItem = pstNextItemReg;
                pstNextItemReg = pstNextPreviousNode;
            }
        }
    }
    if((DLinkedList_enERROR_OK == enErrorReg) && (boTerminate == FALSE))
    {
        enErrorReg = DLinkedList__enSetHead(pstList, pstItem);
    }
    return (enErrorReg);
}



