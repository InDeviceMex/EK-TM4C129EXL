/**
 *
 * @file CSLinkedList_Item.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ITEM_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ITEM_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

CSLinkedListItem_TypeDef*  CSLinkedList__pstGetItemPos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position);
CSLinkedListItem_TypeDef*  CSLinkedList__pstGetItemEnd(const CSLinkedList_TypeDef* pstList);
CSLinkedListItem_TypeDef*  CSLinkedList__pstGetItemBegin(const CSLinkedList_TypeDef* pstList);

uint32_t CSLinkedList__u32GetAllItem(const CSLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength);
uint32_t CSLinkedList__u32GetAllItem_Value(const CSLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32MaxLength);

uint32_t CSLinkedList__u32GetNItem(const CSLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Items, uint32_t u32MaxLength);
uint32_t CSLinkedList__u32GetNItem_Value(const CSLinkedList_TypeDef* pstList, uint32_t* pu32Value, uint32_t u32Items, uint32_t u32MaxLength);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ITEM_H_ */
