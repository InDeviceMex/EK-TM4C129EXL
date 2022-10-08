/**
 *
 * @file CSLinkedList_Data.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_DATA_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

void*  CSLinkedList__pvGetDataItemPos(const CSLinkedList_t* pstList, UBase_t uxPosition);
UBase_t CSLinkedList__uxGetValueItemPos(const CSLinkedList_t* pstList, UBase_t uxPosition);

void*  CSLinkedList__pvGetDataTail(const CSLinkedList_t* pstList);
UBase_t CSLinkedList__uxGetValueTail(const CSLinkedList_t* pstList);

void*  CSLinkedList__pvGetDataHead(const CSLinkedList_t* pstList);
UBase_t CSLinkedList__uxGetValueHead(const CSLinkedList_t* pstList);

void* CSLinkedList__pvGetDataNextItem(CSLinkedList_t* pstList);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_DATA_H_ */
