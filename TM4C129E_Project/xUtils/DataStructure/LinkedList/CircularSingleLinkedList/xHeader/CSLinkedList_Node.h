/**
 *
 * @file CSLinkedList_Node.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_NODE_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

 CSLinkedListElement_TypeDef*  CSLinkedList__pstGetNodePos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position);
 CSLinkedListElement_TypeDef*  CSLinkedList__pstGetNodeEnd(const CSLinkedList_TypeDef* pstList);
 CSLinkedListElement_TypeDef*  CSLinkedList__pstGetNodeBegin(const CSLinkedList_TypeDef* pstList);

 uint32_t CSLinkedList__u32GetNNode(const CSLinkedList_TypeDef* pstList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength);
 uint32_t CSLinkedList__u32GetAllNode(const CSLinkedList_TypeDef* pstList, const void** pvData, uint32_t u32MaxLength);




#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_NODE_H_ */
