/**
 *
 * @file CSLinkedList_Data.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_DATA_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

void*  CSLinkedList__pvGetItemDataPos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position);
uint32_t CSLinkedList__u32GetItemValuePos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position);

void*  CSLinkedList__pvGetItemDataEnd(const CSLinkedList_TypeDef* pstList);
uint32_t CSLinkedList__u32GetItemValueEnd(const CSLinkedList_TypeDef* pstList);

void*  CSLinkedList__pvGetItemDataBegin(const CSLinkedList_TypeDef* pstList);
uint32_t CSLinkedList__u32GetItemValueBegin(const CSLinkedList_TypeDef* pstList);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_DATA_H_ */
