/**
 *
 * @file DLinkedList_Insert.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_INSERT_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_INSERT_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

DLinkedList_nSTATUS DLinkedList__enInsertNext_WithData(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstPreviousItemArg,
                                            DLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
DLinkedList_nSTATUS DLinkedList__enInsertNext(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstPreviousItemArg,
                                            DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef* DLinkedList__pstInsertNext_WithData(DLinkedList_TypeDef* pstList,
                                             DLinkedListItem_TypeDef* pstPreviousItemArg,
                                             void* pvData);
DLinkedListItem_TypeDef* DLinkedList__pstInsertNext(DLinkedList_TypeDef* pstList,
                                             DLinkedListItem_TypeDef* pstPreviousItemArg);




DLinkedList_nSTATUS DLinkedList__enInsertPrevious_WithData(DLinkedList_TypeDef* pstList,
                                                       DLinkedListItem_TypeDef* pstNextItemArg,
                                                       DLinkedListItem_TypeDef* pstNewItem,
                                                       void* pvData);
DLinkedList_nSTATUS DLinkedList__enInsertPrevious(DLinkedList_TypeDef* pstList,
                                                       DLinkedListItem_TypeDef* pstNextItemArg,
                                                       DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef* DLinkedList__pstInsertPrevious_WithData(DLinkedList_TypeDef* pstList,
                                                        DLinkedListItem_TypeDef* pstNextItemArg,
                                                        void* pvData);
DLinkedListItem_TypeDef* DLinkedList__pstInsertPrevious(DLinkedList_TypeDef* pstList,
                                                        DLinkedListItem_TypeDef* pstNextItemArg);



DLinkedList_nSTATUS  DLinkedList__enInsertPreviousLastItemRead_WithData(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData);
DLinkedList_nSTATUS  DLinkedList__enInsertPreviousLastItemRead(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertPreviousLastItemRead_WithData(DLinkedList_TypeDef* pstList, void* pvData);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertPreviousLastItemRead(DLinkedList_TypeDef* pstList);




DLinkedList_nSTATUS  DLinkedList__enInsertNextLastItemRead_WithData(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData);
DLinkedList_nSTATUS  DLinkedList__enInsertNextLastItemRead(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertNextLastItemRead_WithData(DLinkedList_TypeDef* pstList, void* pvData);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertNextLastItemRead(DLinkedList_TypeDef* pstList);





DLinkedList_nSTATUS  DLinkedList__enInsertAtTail_WithData(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData);
DLinkedList_nSTATUS  DLinkedList__enInsertAtTail(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertAtTail_WithData(DLinkedList_TypeDef* pstList,
                                                    void* pvData);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertAtTail(DLinkedList_TypeDef* pstList);




DLinkedList_nSTATUS DLinkedList__enInsertAtHead_WithData(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
DLinkedList_nSTATUS DLinkedList__enInsertAtHead(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef* DLinkedList__pstInsertAtHead_WithData(DLinkedList_TypeDef* pstList, void* pvData);
DLinkedListItem_TypeDef* DLinkedList__pstInsertAtHead(DLinkedList_TypeDef* pstList);



DLinkedList_nSTATUS  DLinkedList__enInsertPos_WithData(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstNewItem,
                                             uint32_t u32Position,
                                             void* pvData);
DLinkedList_nSTATUS  DLinkedList__enInsertPos(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstNewItem,
                                             uint32_t u32Position);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertPos_WithData(DLinkedList_TypeDef* pstList,
                                                     uint32_t u32Position, void* pvData);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertPos(DLinkedList_TypeDef* pstList,
                                                     uint32_t u32Position);
#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_INSERT_H_ */
