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

DLinkedList_nERROR DLinkedList__enGetDataItemPosition(const DLinkedList_t* pstList, UBase_t uxPosition, void** pvItemDataArg);
DLinkedList_nERROR DLinkedList__enGetDataTail(const DLinkedList_t* pstList, void** pvItemDataArg);
DLinkedList_nERROR DLinkedList__enGetDataHead(const DLinkedList_t* pstList, void** pvItemDataArg);

DLinkedList_nERROR DLinkedList__uxGetValueItemPosition(const DLinkedList_t* pstList, UBase_t uxPosition, UBase_t* uxItemValueArg);
DLinkedList_nERROR DLinkedList__enGetValueTail(const DLinkedList_t* pstList, UBase_t* uxItemValueArg);
DLinkedList_nERROR DLinkedList__enGetValueHead(const DLinkedList_t* pstList, UBase_t* uxItemValueArg);

DLinkedList_nERROR DLinkedList__enGetDataNextItem(DLinkedList_t* pstList, void** pvItemDataArg);
DLinkedList_nERROR DLinkedList__enGetDataPreviousItem(DLinkedList_t* pstList, void** pvItemDataArg);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_DATA_H_ */
