/**
 *
 * @file CSLinkedList_Remove.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_REMOVE_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

CSLinkedList_nERROR CSLinkedList__enRemoveNextInList_GetData(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem, void** pvData);
CSLinkedList_nERROR CSLinkedList__enRemoveNextInList(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem);
CSLinkedList_nERROR CSLinkedList__enRemoveNext_GetData(CSLinkedListItem_t* pstItem, void** pvData);
CSLinkedList_nERROR CSLinkedList__enRemoveNext(CSLinkedListItem_t* pstItem);

CSLinkedList_nERROR CSLinkedList__enRemoveInList_GetData(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem, void** pvData);
CSLinkedList_nERROR CSLinkedList__enRemoveInList(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem);
CSLinkedList_nERROR CSLinkedList__enRemove_GetData(CSLinkedListItem_t* pstItem, void** pvData);
CSLinkedList_nERROR CSLinkedList__enRemove(CSLinkedListItem_t* pstItem);

CSLinkedList_nERROR  CSLinkedList__enRemoveTail_GetData(CSLinkedList_t* pstList, void** pvData);
CSLinkedList_nERROR  CSLinkedList__enRemoveTail(CSLinkedList_t* pstList);

CSLinkedList_nERROR  CSLinkedList__enRemoveHead_GetData(CSLinkedList_t* pstList, void** pvData);
CSLinkedList_nERROR  CSLinkedList__enRemoveHead(CSLinkedList_t* pstList);

CSLinkedList_nERROR  CSLinkedList__enRemovePos_GetData(CSLinkedList_t* pstList, UBase_t uxPosition, void** pvData);
CSLinkedList_nERROR  CSLinkedList__enRemovePos(CSLinkedList_t* pstList, UBase_t uxPosition);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_REMOVE_H_ */
