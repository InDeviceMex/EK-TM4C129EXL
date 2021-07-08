/**
 *
 * @file CSLinkedList_Remove.h
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_REMOVE_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

 CSLinkedList_nSTATUS CSLinkedList__enRemoveNext(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstElement, void** pvData);
 CSLinkedList_nSTATUS CSLinkedList__enRemove(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstElement, void** pvData);
 CSLinkedList_nSTATUS CSLinkedList__enRemoveBegin(CSLinkedList_TypeDef* pstList, void** pvData);
 CSLinkedList_nSTATUS CSLinkedList__enRemoveEnd(CSLinkedList_TypeDef* pstList, void** pvData);
 CSLinkedList_nSTATUS  CSLinkedList__enRemovePos(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_REMOVE_H_ */
