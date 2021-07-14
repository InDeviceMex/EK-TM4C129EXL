/**
 *
 * @file CDLinkedList_Data.h
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_DATA_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

void*  CDLinkedList__pvGetDataItem(const CDLinkedList_TypeDef* pstList, uint32_t u32Position);
uint32_t CDLinkedList__u32GetValueItem(const CDLinkedList_TypeDef* pstList, uint32_t u32Position);

void*  CDLinkedList__pvGetDataTail(const CDLinkedList_TypeDef* pstList);
uint32_t CDLinkedList__u32GetValueTail(const CDLinkedList_TypeDef* pstList);

void*  CDLinkedList__pvGetDataHead(const CDLinkedList_TypeDef* pstList);
uint32_t CDLinkedList__u32GetValueHead(const CDLinkedList_TypeDef* pstList);

void* CDLinkedList__pvGetDataNextItem(CDLinkedList_TypeDef* pstList);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_DATA_H_ */
