/**
 *
 * @file CDLinkedList_Insert.h
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_INSERT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_INSERT_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nERROR CDLinkedList__enInsertNext_WithData(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem,
                                                      void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertNext(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreateNext_WithData(CDLinkedList_t* pstList,
                                                                  CDLinkedListItem_t* pstItem,
                                                                  CDLinkedListItem_t** pstNewItemArg,
                                                                  void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreateNext(CDLinkedList_t* pstList,
                                                        CDLinkedListItem_t* pstItem,
                                                        CDLinkedListItem_t** pstNewItemArg);




CDLinkedList_nERROR CDLinkedList__enInsertPrevious_WithData(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem,
                                                      void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertPrevious(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePrevious_WithData(CDLinkedList_t* pstList,
                                                                     CDLinkedListItem_t* pstItem,
                                                                     CDLinkedListItem_t** pstNewItemArg,
                                                                     void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePrevious(CDLinkedList_t* pstList,
                                                            CDLinkedListItem_t* pstItem,
                                                            CDLinkedListItem_t** pstNewItemArg);




CDLinkedList_nERROR  CDLinkedList__enInsertPreviousOnLastItemRead_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                           void* pvData);
CDLinkedList_nERROR  CDLinkedList__enInsertPreviousOnLastItemRead(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePreviousOnLastItemRead_WithData(CDLinkedList_t* pstList,
                                                                                   CDLinkedListItem_t** pstNewItem,
                                                                                   void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePreviousOnLastItemRead(CDLinkedList_t* pstList,
                                                                          CDLinkedListItem_t** pstNewItem);


CDLinkedList_nERROR  CDLinkedList__enInsertNextOnLastItemRead_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                           void* pvData);
CDLinkedList_nERROR  CDLinkedList__enInsertNextOnLastItemRead(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreateNextOnLastItemRead_WithData(CDLinkedList_t* pstList,
                                                                               CDLinkedListItem_t** pstNewItem,
                                                                               void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreateNextOnLastItemRead(CDLinkedList_t* pstList,
                                                                      CDLinkedListItem_t** pstNewItem);


CDLinkedList_nERROR  CDLinkedList__enInsertAtTail_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                           void* pvData);
CDLinkedList_nERROR  CDLinkedList__enInsertAtTail(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreateAtTail_WithData(CDLinkedList_t* pstList,
                                                                   CDLinkedListItem_t** pstNewItem,
                                                                   void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreateAtTail(CDLinkedList_t* pstList,
                                                          CDLinkedListItem_t** pstNewItem);

CDLinkedList_nERROR CDLinkedList__enInsertAtHead_WithData(CDLinkedList_t* pstList,
                                            CDLinkedListItem_t* pstNewItem,
                                            void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertAtHead(CDLinkedList_t* pstList,
                                            CDLinkedListItem_t* pstNewItem);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreateAtHead_WithData(CDLinkedList_t* pstList,
                                                            CDLinkedListItem_t** pstNewItem,
                                                            void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreateAtHead(CDLinkedList_t* pstList,
                                                          CDLinkedListItem_t** pstNewItem);


CDLinkedList_nERROR  CDLinkedList__enInsertPosition_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition,
                                            void* pvData);
CDLinkedList_nERROR  CDLinkedList__enInsertPosition(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePosition_WithData(CDLinkedList_t* pstList,
                                                              CDLinkedListItem_t** pstNewItem,
                                                              UBase_t uxPosition,
                                                              void* pvData);
CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePosition(CDLinkedList_t* pstList,
                                                            CDLinkedListItem_t** pstNewItem,
                                                            UBase_t uxPosition);

CDLinkedList_nERROR  CDLinkedList__enInsertInDescendingOrderByValue(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem);

CDLinkedList_nERROR  CDLinkedList__enInsertInAscendingOrderByValue(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem);
#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_INSERT_H_ */
