/**
 *
 * @file DLinkedList_ElementData.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/xHeader/DLinkedList_ElementData.h>
#include <stdlib.h>

void* DLinkedList__pvGetElementData(const DLinkedListElement_TypeDef* const pstElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = pstElement->pvDataContainer;

    return pvDataReg;
}

void DLinkedList__vSetElementData(DLinkedListElement_TypeDef* pstElement, void* pvDataArg)
{
    pstElement->pvDataContainer = pvDataArg;
}


