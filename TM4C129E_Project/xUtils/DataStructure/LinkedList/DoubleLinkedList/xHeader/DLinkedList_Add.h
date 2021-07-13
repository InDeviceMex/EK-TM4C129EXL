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

DLinkedList_nSTATUS DLinkedList__enAddNext(DLinkedList_TypeDef* pstList,
                                                   DLinkedListElement_TypeDef* pstPreviousElement,
                                                   DLinkedListElement_TypeDef* pstNewElement,
                                                   void* pvData);
DLinkedList_nSTATUS* DLinkedList__pstAddNext(DLinkedList_TypeDef* pstList,
                                             DLinkedListElement_TypeDef* pstPreviousElement,
                                             void* pvData);

DLinkedList_nSTATUS DLinkedList__enAddPrevious(DLinkedList_TypeDef* pstList,
                                                       DLinkedListElement_TypeDef* pstNextElement,
                                                       DLinkedListElement_TypeDef* pstNewElement,
                                                       void* pvData);
DLinkedListElement_TypeDef* DLinkedList__pstAddPrevious(DLinkedList_TypeDef* pstList,
                                                        DLinkedListElement_TypeDef* pstNextElement,
                                                        void* pvData);

DLinkedList_nSTATUS  DLinkedList__enAddEnd(DLinkedList_TypeDef* pstList,
                                           DLinkedListElement_TypeDef* pstNewElement,
                                           void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__pstAddEnd(DLinkedList_TypeDef* pstList,
                                                     void* pvData);

 DLinkedList_nSTATUS DLinkedList__enAddBegin(DLinkedList_TypeDef* pstList,
                                             DLinkedListElement_TypeDef* pstNewElement,
                                             void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__pstAddBegin(DLinkedList_TypeDef* pstList,
                                                       void* pvData);

 DLinkedList_nSTATUS  DLinkedList__enAddPos(DLinkedList_TypeDef* pstList,
                                            DLinkedListElement_TypeDef* pstNewElement,
                                             uint32_t u32Position,
                                             void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__pstAddPos(DLinkedList_TypeDef* pstList,
                                                     uint32_t u32Position,
                                                     void* pvData);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ADD_H_ */
