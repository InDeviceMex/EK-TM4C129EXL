/**
 *
 * @file DLinkedList_Data.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_DATA_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

void*  DLinkedList__pvGetNodeDataPos(const DLinkedList_TypeDef* pstList, uint32_t u32Position);
void*  DLinkedList__pvGetNodeDataEnd(const DLinkedList_TypeDef* pstList);
void*  DLinkedList__pvGetNodeDataBegin(const DLinkedList_TypeDef* pstList);

uint32_t  DLinkedList__u32GetNodeDataAuxiliarPos(const DLinkedList_TypeDef* pstList, uint32_t u32Position);
uint32_t  DLinkedList__u32GetNodeDataAuxiliarEnd(const DLinkedList_TypeDef* pstList);
uint32_t  DLinkedList__u32GetNodeDataAuxiliarBegin(const DLinkedList_TypeDef* pstList);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_DATA_H_ */
