/**
 *
 * @file CCDLinkedList_ElementOwnerList.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/xHeader/CDLinkedList_ElementOwnerList.h>

void* CDLinkedList__pvGetElementOwnerList(const CDLinkedListElement_TypeDef* const pstElement)
{
    void* pvOwnerListReg = (void*)0UL;
    pvOwnerListReg = pstElement->pvOwnerList;
    return (pvOwnerListReg);
}

void CDLinkedList__vSetElementOwnerList(CDLinkedListElement_TypeDef* pstElement, void* pvOwnerListArg)
{
    pstElement->pvOwnerList = pvOwnerListArg;
}
