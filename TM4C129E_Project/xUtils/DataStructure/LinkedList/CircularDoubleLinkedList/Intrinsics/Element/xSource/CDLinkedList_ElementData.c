/**
 *
 * @file CDLinkedList_ElementData.c
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

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/xHeader/CDLinkedList_ElementData.h>
#include <stdlib.h>

void* CDLinkedList__pvGetElementData(const CDLinkedListElement_TypeDef* const pstElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = pstElement->pvDataContainer;

    return pvDataReg;
}

void CDLinkedList__vSetElementData(CDLinkedListElement_TypeDef* pstElement, void* pvDataArg)
{
    pstElement->pvDataContainer = pvDataArg;
}


