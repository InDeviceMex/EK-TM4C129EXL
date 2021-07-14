/**
 *
 * @file CSLinkedList_ElementDataAuxiliar.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/xHeader/CSLinkedList_ElementDataAuxiliar.h>

uint32_t CSLinkedList__u32GetElementDataAuxiliar(const CSLinkedListElement_TypeDef* const pstElement)
{
    uint32_t u32DataAuxiliarReg = 0UL;
    u32DataAuxiliarReg = pstElement->u32DataAuxiliar;
    return (u32DataAuxiliarReg);
}

void CSLinkedList__vSetElementDataAuxiliar(CSLinkedListElement_TypeDef* pstElement, uint32_t u32DataAuxiliarArg)
{
    pstElement->u32DataAuxiliar = u32DataAuxiliarArg;
}
