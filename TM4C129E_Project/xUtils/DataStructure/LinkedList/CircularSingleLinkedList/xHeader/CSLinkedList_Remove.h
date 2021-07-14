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

CSLinkedList_nSTATUS CSLinkedList__enRemoveNextInList_GetData(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem, void** pvData);
CSLinkedList_nSTATUS CSLinkedList__enRemoveNextInList(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem);
CSLinkedList_nSTATUS CSLinkedList__enRemoveNext_GetData(CSLinkedListItem_TypeDef* pstItem, void** pvData);
CSLinkedList_nSTATUS CSLinkedList__enRemoveNext(CSLinkedListItem_TypeDef* pstItem);

CSLinkedList_nSTATUS CSLinkedList__enRemoveInList_GetData(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem, void** pvData);
CSLinkedList_nSTATUS CSLinkedList__enRemoveInList(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem);
CSLinkedList_nSTATUS CSLinkedList__enRemove_GetData(CSLinkedListItem_TypeDef* pstItem, void** pvData);
CSLinkedList_nSTATUS CSLinkedList__enRemove(CSLinkedListItem_TypeDef* pstItem);

CSLinkedList_nSTATUS  CSLinkedList__enRemoveEnd_GetData(CSLinkedList_TypeDef* pstList, void** pvData);
CSLinkedList_nSTATUS  CSLinkedList__enRemoveEnd(CSLinkedList_TypeDef* pstList);

CSLinkedList_nSTATUS  CSLinkedList__enRemoveBegin_GetData(CSLinkedList_TypeDef* pstList, void** pvData);
CSLinkedList_nSTATUS  CSLinkedList__enRemoveBegin(CSLinkedList_TypeDef* pstList);

CSLinkedList_nSTATUS  CSLinkedList__enRemovePos_GetData(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData);
CSLinkedList_nSTATUS  CSLinkedList__enRemovePos(CSLinkedList_TypeDef* pstList, uint32_t u32Position);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_REMOVE_H_ */
