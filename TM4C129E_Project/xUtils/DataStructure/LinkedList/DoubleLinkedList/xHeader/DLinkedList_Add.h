/**
 *
 * @file DLinkedList_Add.h
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ADD_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

 DLinkedListElement_TypeDef* DLinkedList__pstAddNext(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstElement, void* pvData);
 DLinkedListElement_TypeDef* DLinkedList__pstAddPrevious(DLinkedList_TypeDef* pstList, DLinkedListElement_TypeDef* pstElement, void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__pstAddEnd(DLinkedList_TypeDef* pstList, void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__pstAddBegin(DLinkedList_TypeDef* pstList, void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__pstAddPos(DLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData);



#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ADD_H_ */
