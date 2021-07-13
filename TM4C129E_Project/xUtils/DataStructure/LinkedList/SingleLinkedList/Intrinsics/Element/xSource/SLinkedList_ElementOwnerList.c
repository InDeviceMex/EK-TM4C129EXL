/**
 *
 * @file SLinkedList_ElementOwnerList.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/xHeader/SLinkedList_ElementOwnerList.h>

void* SLinkedList__pvGetElementOwnerList(const SLinkedListElement_TypeDef* const pstElement)
{
    void* pvOwnerListReg = (void*)0UL;
    pvOwnerListReg = pstElement->pvOwnerList;
    return (pvOwnerListReg);
}

void SLinkedList__vSetElementOwnerList(SLinkedListElement_TypeDef* pstElement, void* pvOwnerListArg)
{
    pstElement->pvOwnerList = pvOwnerListArg;
}
