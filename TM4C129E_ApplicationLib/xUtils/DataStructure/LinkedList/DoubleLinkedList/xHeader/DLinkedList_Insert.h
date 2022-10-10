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

DLinkedList_nERROR DLinkedList__enInsertNext_WithData(DLinkedList_t* pstList,
                                            DLinkedListItem_t* pstPreviousItemArg,
                                            DLinkedListItem_t* pstNewItem,
                                            void* pvData);
DLinkedList_nERROR DLinkedList__enInsertNext(DLinkedList_t* pstList,
                                            DLinkedListItem_t* pstPreviousItemArg,
                                            DLinkedListItem_t* pstNewItem);
DLinkedList_nERROR DLinkedList__enInsertAndCreateNext_WithData(DLinkedList_t* pstList,
                                                                DLinkedListItem_t* pstPreviousItemArg,
                                                                DLinkedListItem_t** pstNewItemArg,
                                                                void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAndCreateNext(DLinkedList_t* pstList,
                                             DLinkedListItem_t* pstPreviousItemArg,
                                             DLinkedListItem_t** pstNewItemArg);




DLinkedList_nERROR DLinkedList__enInsertPrevious_WithData(DLinkedList_t* pstList,
                                                          DLinkedListItem_t* pstNextItemArg,
                                                          DLinkedListItem_t* pstNewItem,
                                                          void* pvData);
DLinkedList_nERROR DLinkedList__enInsertPrevious(DLinkedList_t* pstList,
                                                 DLinkedListItem_t* pstNextItemArg,
                                                 DLinkedListItem_t* pstNewItem);
DLinkedList_nERROR DLinkedList__enInsertAndCreatePrevious_WithData(DLinkedList_t* pstList,
                                                                   DLinkedListItem_t* pstNextItemArg,
                                                                   DLinkedListItem_t** pstNewItemArg,
                                                                   void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAndCreatePrevious(DLinkedList_t* pstList,
                                                          DLinkedListItem_t* pstNextItemArg,
                                                          DLinkedListItem_t** pstNewItemArg);



DLinkedList_nERROR DLinkedList__enInsertPreviousOnLastItemRead_WithData(DLinkedList_t* pstList,
                                                                       DLinkedListItem_t* pstNewItem,
                                                                       void* pvData);
DLinkedList_nERROR DLinkedList__enInsertPreviousOnLastItemRead(DLinkedList_t* pstList,
                                                              DLinkedListItem_t* pstNewItem);
DLinkedList_nERROR DLinkedList__enInsertAndCreatePreviousOnLastItemRead_WithData(DLinkedList_t* pstList,
                                                                                DLinkedListItem_t** pstNewItemArg,
                                                                                void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAndCreatePreviousOnLastItemRead(DLinkedList_t* pstList,
                                                                       DLinkedListItem_t** pstNewItemArg);




DLinkedList_nERROR DLinkedList__enInsertNextOnLastItemRead_WithData(DLinkedList_t* pstList,
                                           DLinkedListItem_t* pstNewItem,
                                           void* pvData);
DLinkedList_nERROR DLinkedList__enInsertNextOnLastItemRead(DLinkedList_t* pstList,
                                           DLinkedListItem_t* pstNewItem);
DLinkedList_nERROR DLinkedList__enInsertAndCreateNextOnLastItemRead_WithData(DLinkedList_t* pstList,
                                                                            DLinkedListItem_t** pstNewItemArg,
                                                                            void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAndCreateNextOnLastItemRead(DLinkedList_t* pstList,
                                                                   DLinkedListItem_t** pstNewItemArg);





DLinkedList_nERROR DLinkedList__enInsertAtTail_WithData(DLinkedList_t* pstList,
                                           DLinkedListItem_t* pstNewItem,
                                           void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAtTail(DLinkedList_t* pstList,
                                           DLinkedListItem_t* pstNewItem);
DLinkedList_nERROR DLinkedList__enInsertAndCreateAtTail_WithData(DLinkedList_t* pstList,
                                                          DLinkedListItem_t** pstNewItem,
                                                          void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAndCreateAtTail(DLinkedList_t* pstList,
                                                        DLinkedListItem_t** pstNewItem);




DLinkedList_nERROR DLinkedList__enInsertAtHead_WithData(DLinkedList_t* pstList,
                                            DLinkedListItem_t* pstNewItem,
                                            void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAtHead(DLinkedList_t* pstList,
                                            DLinkedListItem_t* pstNewItem);
DLinkedList_nERROR DLinkedList__enInsertAndCreateAtHead_WithData(DLinkedList_t* pstList,
                                                                 DLinkedListItem_t** pstNewItem,
                                                                 void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAndCreateAtHead(DLinkedList_t* pstList,
                                                        DLinkedListItem_t** pstNewItem);



DLinkedList_nERROR DLinkedList__enInsertPosition_WithData(DLinkedList_t* pstList,
                                                           DLinkedListItem_t* pstNewItem,
                                                           UBase_t uxPosition,
                                                           void* pvData);
DLinkedList_nERROR DLinkedList__enInsertPosition(DLinkedList_t* pstList,
                                                  DLinkedListItem_t* pstNewItem,
                                                  UBase_t uxPosition);
DLinkedList_nERROR DLinkedList__enInsertAndCreatePosition_WithData(DLinkedList_t* pstList,
                                                                   DLinkedListItem_t** pstNewItem,
                                                                   UBase_t uxPosition,
                                                                   void* pvData);
DLinkedList_nERROR DLinkedList__enInsertAndCreatePosition(DLinkedList_t* pstList,
                                                          DLinkedListItem_t** pstNewItem,
                                                          UBase_t uxPosition);
#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_INSERT_H_ */
