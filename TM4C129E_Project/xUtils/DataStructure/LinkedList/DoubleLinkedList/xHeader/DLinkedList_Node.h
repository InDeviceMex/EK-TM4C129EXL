/**
 *
 * @file DLinkedList_Node.h
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_NODE_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

uint32_t DLinkedList__u32GetAllNode(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength);
uint32_t DLinkedList__u32GetAllNode_Value(const DLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength);

uint32_t DLinkedList__u32GetAllNodeBackward(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength);
uint32_t DLinkedList__u32GetAllNodeBackward_Value(const DLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength);

uint32_t DLinkedList__u32GetNNode(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength);
uint32_t DLinkedList__u32GetNNode_Value(const DLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Nodes, uint32_t u32MaxLength);

uint32_t DLinkedList__u32GetNNodeBackward(const DLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength);
uint32_t DLinkedList__u32GetNNodeBackward_Value(const DLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Nodes, uint32_t u32MaxLength);

DLinkedListItem_TypeDef*  DLinkedList__pstGetNodePos(const DLinkedList_TypeDef* pstList, uint32_t u32Position);
DLinkedListItem_TypeDef*  DLinkedList__pstGetNodeEnd(const DLinkedList_TypeDef* pstList);
DLinkedListItem_TypeDef*  DLinkedList__pstGetNodeBegin(const DLinkedList_TypeDef* pstList);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_NODE_H_ */
