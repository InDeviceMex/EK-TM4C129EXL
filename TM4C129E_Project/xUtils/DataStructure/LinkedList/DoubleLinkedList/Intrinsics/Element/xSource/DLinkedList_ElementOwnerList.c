/**
 *
 * @file DLinkedList_ElementOwnerList.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 13 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/xHeader/DLinkedList_ElementOwnerList.h>

void* DLinkedList__pvGetElementOwnerList(const DLinkedListElement_TypeDef* const pstElement)
{
    void* pvOwnerListReg = (void*)0UL;
    pvOwnerListReg = pstElement->pvOwnerList;
    return (pvOwnerListReg);
}

void DLinkedList__vSetElementOwnerList(DLinkedListElement_TypeDef* pstElement, void* pvOwnerListArg)
{
    pstElement->pvOwnerList = pvOwnerListArg;
}
