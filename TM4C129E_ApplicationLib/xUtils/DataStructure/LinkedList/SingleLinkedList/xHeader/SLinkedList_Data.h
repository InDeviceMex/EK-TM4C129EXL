/**
 *
 * @file SLinkedList_Data.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_DATA_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

SLinkedList_nERROR SLinkedList__enGetDataItemPosition(const SLinkedList_t* pstList, UBase_t uxPosition, void** pvItemDataArg);
SLinkedList_nERROR SLinkedList__enGetDataTail(const SLinkedList_t* pstList, void** pvItemDataArg);
SLinkedList_nERROR SLinkedList__enGetDataHead(const SLinkedList_t* pstList, void** pvItemDataArg);

SLinkedList_nERROR SLinkedList__enGetValueItemPosition(const SLinkedList_t* pstList, UBase_t uxPosition, UBase_t* uxItemValueArg);
SLinkedList_nERROR SLinkedList__enGetValueTail(const SLinkedList_t* pstList, UBase_t* uxItemValueArg);
SLinkedList_nERROR SLinkedList__enGetValueHead(const SLinkedList_t* pstList, UBase_t* uxItemValueArg);

SLinkedList_nERROR SLinkedList__enGetDataNextItem(SLinkedList_t* pstList, void** pvItemDataArg);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_DATA_H_ */
