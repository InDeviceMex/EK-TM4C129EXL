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
                                            DLinkedListItem_TypeDef* pstPreviousItem,
                                            DLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
DLinkedList_nSTATUS DLinkedList__enInsertNext(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstPreviousItem,
                                            DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef* DLinkedList__pstInsertNext_WithData(DLinkedList_TypeDef* pstList,
                                             DLinkedListItem_TypeDef* pstPreviousItem,
                                             void* pvData);
DLinkedListItem_TypeDef* DLinkedList__pstInsertNext(DLinkedList_TypeDef* pstList,
                                             DLinkedListItem_TypeDef* pstPreviousItem);




DLinkedList_nSTATUS DLinkedList__enInsertPrevious_WithData(DLinkedList_TypeDef* pstList,
                                                       DLinkedListItem_TypeDef* pstNextItem,
                                                       DLinkedListItem_TypeDef* pstNewItem,
                                                       void* pvData);
DLinkedList_nSTATUS DLinkedList__enInsertPrevious(DLinkedList_TypeDef* pstList,
                                                       DLinkedListItem_TypeDef* pstNextItem,
                                                       DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef* DLinkedList__pstInsertPrevious_WithData(DLinkedList_TypeDef* pstList,
                                                        DLinkedListItem_TypeDef* pstNextItem,
                                                        void* pvData);
DLinkedListItem_TypeDef* DLinkedList__pstInsertPrevious(DLinkedList_TypeDef* pstList,
                                                        DLinkedListItem_TypeDef* pstNextItem);




DLinkedList_nSTATUS  DLinkedList__enInsertEnd_WithData(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData);
DLinkedList_nSTATUS  DLinkedList__enInsertEnd(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertEnd_WithData(DLinkedList_TypeDef* pstList,
                                                    void* pvData);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertEnd(DLinkedList_TypeDef* pstList);





DLinkedList_nSTATUS  DLinkedList__enInsertEnd_WithData(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData);
DLinkedList_nSTATUS  DLinkedList__enInsertEnd(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertEnd_WithData(DLinkedList_TypeDef* pstList,
                                                    void* pvData);
DLinkedListItem_TypeDef*  DLinkedList__pstInsertEnd(DLinkedList_TypeDef* pstList);




DLinkedList_nSTATUS DLinkedList__enInsertBegin_WithData(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
DLinkedList_nSTATUS DLinkedList__enInsertBegin(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstNewItem);
DLinkedListItem_TypeDef* DLinkedList__pstInsertBegin_WithData(DLinkedList_TypeDef* pstList, void* pvData);
DLinkedListItem_TypeDef* DLinkedList__pstInsertBegin(DLinkedList_TypeDef* pstList);



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
