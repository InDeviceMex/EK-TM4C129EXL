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

void*  DLinkedList__pvGetDataItemPos(const DLinkedList_t* pstList, UBase_t uxPosition);
void*  DLinkedList__pvGetDataTail(const DLinkedList_t* pstList);
void*  DLinkedList__pvGetDataHead(const DLinkedList_t* pstList);

UBase_t  DLinkedList__uxGetValueItemPos(const DLinkedList_t* pstList, UBase_t uxPosition);
UBase_t  DLinkedList__uxGetValueTail(const DLinkedList_t* pstList);
UBase_t  DLinkedList__uxGetValueHead(const DLinkedList_t* pstList);

void* DLinkedList__pvGetDataNextItem(DLinkedList_t* pstList);
void* DLinkedList__pvGetDataPreviousItem(DLinkedList_t* pstList);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_DATA_H_ */
