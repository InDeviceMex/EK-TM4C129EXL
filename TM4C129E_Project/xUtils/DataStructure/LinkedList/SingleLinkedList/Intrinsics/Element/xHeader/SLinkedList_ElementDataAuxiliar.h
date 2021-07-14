/**
 *
 * @file SLinkedList_ElementDataAuxiliar.h
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
 * @verbatim 14 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTDATAAUXILIAR_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTDATAAUXILIAR_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

uint32_t SLinkedList__u32GetElementDataAuxiliar(const SLinkedListElement_TypeDef* const pstElement);
void SLinkedList__vSetElementDataAuxiliar(SLinkedListElement_TypeDef* pstElement, uint32_t u32DataAuxiliarArg);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_SLINKEDLIST_ELEMENTDATAAUXILIAR_H_ */
