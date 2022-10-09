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

SLinkedList_nERROR SLinkedList__enGetNItem(const SLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);
SLinkedList_nERROR SLinkedList__enGetAllItem(const SLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg);

SLinkedList_nERROR SLinkedList__enGetAllItem_Value(const SLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg);
SLinkedList_nERROR SLinkedList__enGetNItem_Value(const SLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);

SLinkedList_nERROR  SLinkedList__enGetItemPosition(const SLinkedList_t* pstList, UBase_t uxPosition, SLinkedListItem_t** pstItemArg);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ITEM_H_ */
