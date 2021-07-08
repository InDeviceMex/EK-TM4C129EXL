/**
 *
 * @file SLinkedList_Remove.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_REMOVE_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

 SLinkedList_nSTATUS SLinkedList__enRemoveNext(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstElement, void** pvData);
 SLinkedList_nSTATUS SLinkedList__enRemove(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstElement, void** pvData);
 SLinkedList_nSTATUS SLinkedList__enRemoveBegin(SLinkedList_TypeDef* pstList, void** pvData);
 SLinkedList_nSTATUS SLinkedList__enRemoveEnd(SLinkedList_TypeDef* pstList, void** pvData);
 SLinkedList_nSTATUS  SLinkedList__enRemovePos(SLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData);




#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_REMOVE_H_ */
