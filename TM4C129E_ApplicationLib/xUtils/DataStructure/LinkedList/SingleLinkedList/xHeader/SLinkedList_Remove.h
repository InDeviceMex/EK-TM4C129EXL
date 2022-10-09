/**
 *
 * @file SLinkedList_Remove.h
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_REMOVE_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

SLinkedList_nERROR SLinkedList__enRemoveNextInList_GetData(SLinkedList_t* pstList, SLinkedListItem_t* pstItem, void** pvData);
SLinkedList_nERROR SLinkedList__enRemoveNextInList(SLinkedList_t* pstList, SLinkedListItem_t* pstItem);
SLinkedList_nERROR SLinkedList__enRemoveNext_GetData(SLinkedListItem_t* pstItem, void** pvData);
SLinkedList_nERROR SLinkedList__enRemoveNext(SLinkedListItem_t* pstItem);

SLinkedList_nERROR SLinkedList__enRemoveInList_GetData(SLinkedList_t* pstList, SLinkedListItem_t* pstItem, void** pvData);
SLinkedList_nERROR SLinkedList__enRemoveInList(SLinkedList_t* pstList, SLinkedListItem_t* pstItem);
SLinkedList_nERROR SLinkedList__enRemove_GetData(SLinkedListItem_t* pstItem, void** pvData);
SLinkedList_nERROR SLinkedList__enRemove(SLinkedListItem_t* pstItem);

SLinkedList_nERROR  SLinkedList__enRemoveTail_GetData(SLinkedList_t* pstList, void** pvData);
SLinkedList_nERROR  SLinkedList__enRemoveTail(SLinkedList_t* pstList);

SLinkedList_nERROR  SLinkedList__enRemoveHead_GetData(SLinkedList_t* pstList, void** pvData);
SLinkedList_nERROR  SLinkedList__enRemoveHead(SLinkedList_t* pstList);

SLinkedList_nERROR  SLinkedList__enRemovePosition_GetData(SLinkedList_t* pstList, UBase_t uxPosition, void** pvData);
SLinkedList_nERROR  SLinkedList__enRemovePosition(SLinkedList_t* pstList, UBase_t uxPosition);


#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_REMOVE_H_ */
