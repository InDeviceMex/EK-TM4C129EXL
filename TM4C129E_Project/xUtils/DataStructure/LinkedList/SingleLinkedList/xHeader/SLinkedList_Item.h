/**
 *
 * @file SLinkedList_Item.h
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ITEM_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ITEM_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

uint32_t SLinkedList__u32GetNItem(const SLinkedList_TypeDef* pstList, void** pvData, uint32_t u32Items, uint32_t u32MaxLength);
uint32_t SLinkedList__u32GetAllItem(const SLinkedList_TypeDef* pstList, void** pvData, uint32_t u32MaxLength);

uint32_t SLinkedList__u32GetAllItem_Value(const SLinkedList_TypeDef* pstList, uint32_t* pu32ValueItem, uint32_t u32MaxLength);
uint32_t SLinkedList__u32GetNItem_Value(const SLinkedList_TypeDef* pstList, uint32_t* pu32ValueItem, uint32_t u32Items, uint32_t u32MaxLength);

SLinkedListItem_TypeDef*  SLinkedList__pstGetItemPos(const SLinkedList_TypeDef* pstList, uint32_t u32Position);
SLinkedListItem_TypeDef*  SLinkedList__pstGetTailItem(const SLinkedList_TypeDef* pstList);
SLinkedListItem_TypeDef*  SLinkedList__pstGetHeadItem(const SLinkedList_TypeDef* pstList);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ITEM_H_ */
