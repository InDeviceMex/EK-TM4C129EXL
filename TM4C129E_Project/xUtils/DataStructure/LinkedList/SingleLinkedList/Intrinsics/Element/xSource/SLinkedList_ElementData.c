/**
 *
 * @file SLinkedList_ElementData.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/xHeader/SLinkedList_ElementData.h>
#include <stdlib.h>

void* SLinkedList__pvGetElementData(const SLinkedListElement_TypeDef* const pstElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = pstElement->pvDataContainer;

    return pvDataReg;
}

void SLinkedList__vSetElementData(SLinkedListElement_TypeDef* pstElement, void* pvDataArg)
{
    pstElement->pvDataContainer = pvDataArg;
}


