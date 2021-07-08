/**
 *
 * @file CSLinkedList_ElementData.c
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/xHeader/CSLinkedList_ElementData.h>
#include <stdlib.h>

void* CSLinkedList__pvGetElementData(const CSLinkedListElement_TypeDef* const pstElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = pstElement->pvDataContainer;

    return pvDataReg;
}

void CSLinkedList__vSetElementData(CSLinkedListElement_TypeDef* pstElement, void* pvDataArg)
{
    pstElement->pvDataContainer = pvDataArg;
}


