/**
 *
 * @file SLinkedList_Tail.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_SLINKEDLIST_TAIL_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_SLINKEDLIST_TAIL_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

SLinkedList_nERROR SLinkedList__enGetTail(const SLinkedList_t*  const pstList, SLinkedListItem_t** pstTailArg);
SLinkedList_nERROR SLinkedList__enSetTail(SLinkedList_t* pstList, SLinkedListItem_t* pstTailArg);
SLinkedList_nERROR SLinkedList__enIsTail(const SLinkedListItem_t* const pstItem, boolean_t* pboStatus);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_SLINKEDLIST_TAIL_H_ */
