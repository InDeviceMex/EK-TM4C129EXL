/**
 *
 * @file CSLinkedList_Index.h
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

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CSLINKEDLIST_INDEX_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CSLINKEDLIST_INDEX_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

CSLinkedListItem_TypeDef* CSLinkedList__pstGetLastItemRead(const CSLinkedList_TypeDef*  const pstList);
void CSLinkedList__vSetLastItemRead(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstLastItemReadArg);
CSLinkedList_nSTATUS CSLinkedList__enIsLastItemRead(const CSLinkedList_TypeDef* const pstList, const CSLinkedListItem_TypeDef* const pstItem);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CSLINKEDLIST_INDEX_H_ */
