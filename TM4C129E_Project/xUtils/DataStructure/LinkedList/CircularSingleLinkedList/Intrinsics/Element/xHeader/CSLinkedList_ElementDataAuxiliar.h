/**
 *
 * @file CSLinkedList_ElementDataAuxiliar.h
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

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CSLINKEDLIST_ELEMENTDATAAUXILIAR_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CSLINKEDLIST_ELEMENTDATAAUXILIAR_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

uint32_t CSLinkedList__u32GetElementDataAuxiliar(const CSLinkedListElement_TypeDef* const pstElement);
void CSLinkedList__vSetElementDataAuxiliar(CSLinkedListElement_TypeDef* pstElement, uint32_t u32DataAuxiliarArg);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CSLINKEDLIST_ELEMENTDATAAUXILIAR_H_ */
