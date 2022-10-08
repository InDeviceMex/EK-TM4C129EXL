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

void*  SLinkedList__pvGetDataItemPos(const SLinkedList_t* pstList, UBase_t uxPosition);
void*  SLinkedList__pvGetDataTail(const SLinkedList_t* pstList);
void*  SLinkedList__pvGetDataHead(const SLinkedList_t* pstList);

UBase_t  SLinkedList__uxGetValueItemPos(const SLinkedList_t* pstList, UBase_t uxPosition);
UBase_t  SLinkedList__uxGetValueTail(const SLinkedList_t* pstList);
UBase_t  SLinkedList__uxGetValueHead(const SLinkedList_t* pstList);

void* SLinkedList__pvGetDataNextItem(SLinkedList_t* pstList);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_DATA_H_ */
