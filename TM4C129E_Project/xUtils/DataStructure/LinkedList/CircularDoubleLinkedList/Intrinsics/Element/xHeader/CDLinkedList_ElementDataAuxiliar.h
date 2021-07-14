/**
 *
 * @file CDLinkedList_ElementDataAuxiliar.h
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

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CDLINKEDLIST_ELEMENTDATAAUXILIAR_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CDLINKEDLIST_ELEMENTDATAAUXILIAR_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

uint32_t CDLinkedList__u32GetElementDataAuxiliar(const CDLinkedListElement_TypeDef* const pstElement);
void CDLinkedList__vSetElementDataAuxiliar(CDLinkedListElement_TypeDef* pstElement, uint32_t u32DataAuxiliarArg);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CDLINKEDLIST_ELEMENTDATAAUXILIAR_H_ */
