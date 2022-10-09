/**
 *
 * @file SLinkedList_ItemValue.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 14 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ITEM_XHEADER_SLINKEDLIST_ITEMVALUE_H_
#define XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ITEM_XHEADER_SLINKEDLIST_ITEMVALUE_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

SLinkedList_nERROR SLinkedList_Item__enGetValue(const SLinkedListItem_t* const pstItem, UBase_t* puxValueItemArg);
SLinkedList_nERROR SLinkedList_Item__enSetValue(SLinkedListItem_t* pstItem, UBase_t uxValueItemArg);

#endif /* XUTILS_DATASTRUCTURE_LINKEDLIST_SINGLELINKEDLIST_INTRINSICS_ITEM_XHEADER_SLINKEDLIST_ITEMVALUE_H_ */
