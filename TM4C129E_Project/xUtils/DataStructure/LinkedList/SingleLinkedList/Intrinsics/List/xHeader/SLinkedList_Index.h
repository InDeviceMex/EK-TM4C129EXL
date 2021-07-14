/**
 *
 * @file SLinkedList_Index.h
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

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_SLINKEDLIST_INDEX_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_SLINKEDLIST_INDEX_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

SLinkedListItem_TypeDef* SLinkedList__pstGetLastItemRead(const SLinkedList_TypeDef*  const pstList);
void SLinkedList__vSetLastItemRead(SLinkedList_TypeDef* pstList, SLinkedListItem_TypeDef* pstLastItemReadArg);
SLinkedList_nSTATUS SLinkedList__enIsLastItemRead(const SLinkedList_TypeDef* const pstList, const SLinkedListItem_TypeDef* const pstItem);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_SLINKEDLIST_INDEX_H_ */
