/**
 *
 * @file SLinkedList_Reverse.c
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Reverse.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

SLinkedList_nERROR SLinkedList__enReverse(SLinkedList_t* pstList)
{
    SLinkedListItem_t* pstHeadItem;
    SLinkedListItem_t* pstNextItemReg;
    SLinkedListItem_t* pstPreviousItem;
    SLinkedList_nERROR enErrorReg;


    pstPreviousItem = (SLinkedListItem_t*) 0UL;
    pstNextItemReg = (SLinkedListItem_t*) 0UL;
    pstHeadItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetHead(pstList, &pstHeadItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enSetTail(pstList, pstHeadItem);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstHeadItem) && (SLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = SLinkedList_Item__enGetNextItem(pstHeadItem, &pstNextItemReg);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList_Item__enSetNextItem(pstHeadItem, pstPreviousItem);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstPreviousItem = pstHeadItem;
                pstHeadItem = pstNextItemReg;
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        pstHeadItem = pstPreviousItem;
        enErrorReg = SLinkedList__enSetHead(pstList, pstHeadItem);
    }
    return (enErrorReg);
}
