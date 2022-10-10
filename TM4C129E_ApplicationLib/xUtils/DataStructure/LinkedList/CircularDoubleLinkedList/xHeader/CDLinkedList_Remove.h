/**
 *
 * @file CDLinkedList_Remove.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_REMOVE_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nERROR CDLinkedList__enRemoveInList_GetData(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem, void** pvData);
CDLinkedList_nERROR CDLinkedList__enRemoveInList(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem);
CDLinkedList_nERROR CDLinkedList__enRemove_GetData(CDLinkedListItem_t* pstItem, void** pvData);
CDLinkedList_nERROR CDLinkedList__enRemove(CDLinkedListItem_t* pstItem);

CDLinkedList_nERROR CDLinkedList__enRemoveNextInList_GetData(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem, void** pvData);
CDLinkedList_nERROR CDLinkedList__enRemoveNextInList(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem);
CDLinkedList_nERROR CDLinkedList__enRemoveNext_GetData(const CDLinkedListItem_t* pstItem, void** pvData);
CDLinkedList_nERROR CDLinkedList__enRemoveNext(const CDLinkedListItem_t* pstItem);

CDLinkedList_nERROR CDLinkedList__enRemovePreviousInList_GetData(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem, void** pvData);
CDLinkedList_nERROR CDLinkedList__enRemovePreviousInList(CDLinkedList_t* pstList, const CDLinkedListItem_t* pstItem);
CDLinkedList_nERROR CDLinkedList__enRemovePrevious_GetData(const CDLinkedListItem_t* pstItem, void** pvData);
CDLinkedList_nERROR CDLinkedList__enRemovePrevious(const CDLinkedListItem_t* pstItem);

CDLinkedList_nERROR  CDLinkedList__enRemoveTail_GetData(CDLinkedList_t* pstList, void** pvData);
CDLinkedList_nERROR  CDLinkedList__enRemoveTail(CDLinkedList_t* pstList);

CDLinkedList_nERROR  CDLinkedList__enRemoveHead_GetData(CDLinkedList_t* pstList, void** pvData);
CDLinkedList_nERROR  CDLinkedList__enRemoveHead(CDLinkedList_t* pstList);

CDLinkedList_nERROR  CDLinkedList__enRemovePosition_GetData(CDLinkedList_t* pstList, UBase_t uxPosition, void** pvData);
CDLinkedList_nERROR  CDLinkedList__enRemovePosition(CDLinkedList_t* pstList, UBase_t uxPosition);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_REMOVE_H_ */
