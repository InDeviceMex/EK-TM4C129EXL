/**
 *
 * @file DLinkedList_Remove.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_REMOVE_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

DLinkedList_nERROR DLinkedList__enRemoveInList_GetData(DLinkedList_t* pstList, DLinkedListItem_t* pstItem, void** pvData);
DLinkedList_nERROR DLinkedList__enRemoveInList(DLinkedList_t* pstList, DLinkedListItem_t* pstItem);
DLinkedList_nERROR DLinkedList__enRemove_GetData(DLinkedListItem_t* pstItem, void** pvData);
DLinkedList_nERROR DLinkedList__enRemove(DLinkedListItem_t* pstItem);

DLinkedList_nERROR DLinkedList__enRemoveNextInList_GetData(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem, void** pvData);
DLinkedList_nERROR DLinkedList__enRemoveNextInList(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem);
DLinkedList_nERROR DLinkedList__enRemoveNext_GetData(const DLinkedListItem_t* pstItem, void** pvData);
DLinkedList_nERROR DLinkedList__enRemoveNext(const DLinkedListItem_t* pstItem);

DLinkedList_nERROR DLinkedList__enRemovePreviousInList_GetData(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem, void** pvData);
DLinkedList_nERROR DLinkedList__enRemovePreviousInList(DLinkedList_t* pstList, const DLinkedListItem_t* pstItem);
DLinkedList_nERROR DLinkedList__enRemovePrevious_GetData(const DLinkedListItem_t* pstItem, void** pvData);
DLinkedList_nERROR DLinkedList__enRemovePrevious(const DLinkedListItem_t* pstItem);

DLinkedList_nERROR  DLinkedList__enRemoveHead_GetData(DLinkedList_t* pstList, void** pvData);
DLinkedList_nERROR  DLinkedList__enRemoveHead(DLinkedList_t* pstList);

DLinkedList_nERROR  DLinkedList__enRemoveTail_GetData(DLinkedList_t* pstList, void** pvData);
DLinkedList_nERROR  DLinkedList__enRemoveTail(DLinkedList_t* pstList);

 DLinkedList_nERROR  DLinkedList__enRemovePosition_GetData(DLinkedList_t* pstList, UBase_t uxPosition, void** pvData);
 DLinkedList_nERROR  DLinkedList__enRemovePosition(DLinkedList_t* pstList, UBase_t uxPosition);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_REMOVE_H_ */
