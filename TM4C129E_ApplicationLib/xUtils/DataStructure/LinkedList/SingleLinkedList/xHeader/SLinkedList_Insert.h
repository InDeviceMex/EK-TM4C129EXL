/**
 *
 * @file SLinkedList_Insert.h
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INSERT_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INSERT_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

SLinkedList_nERROR SLinkedList__enInsertNext_WithData(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstPreviousItemArg,
                                            SLinkedListItem_t* pstNewItem,
                                            void* pvData);
SLinkedList_nERROR SLinkedList__enInsertNext(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstPreviousItemArg,
                                            SLinkedListItem_t* pstNewItem);
SLinkedListItem_t* SLinkedList__pstInsertNext_WithData(SLinkedList_t* pstList,
                                                    SLinkedListItem_t* pstPreviousItemArg,
                                                    void* pvData);
SLinkedListItem_t* SLinkedList__pstInsertNext(SLinkedList_t* pstList,
                                                    SLinkedListItem_t* pstPreviousItemArg);


SLinkedList_nERROR  SLinkedList__enInsertNextLastItemRead_WithData(SLinkedList_t* pstList,
                                           SLinkedListItem_t* pstNewItem,
                                           void* pvData);
SLinkedList_nERROR  SLinkedList__enInsertNextLastItemRead(SLinkedList_t* pstList,
                                           SLinkedListItem_t* pstNewItem);
SLinkedListItem_t*  SLinkedList__pstInsertNextLastItemRead_WithData(SLinkedList_t* pstList, void* pvData);
SLinkedListItem_t*  SLinkedList__pstInsertNextLastItemRead(SLinkedList_t* pstList);


SLinkedList_nERROR SLinkedList__enInsertAtTail_WithData(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstNewItem,
                                            void* pvData);
SLinkedList_nERROR  SLinkedList__enInsertAtTail(SLinkedList_t* pstList,
                                           SLinkedListItem_t* pstNewItem);
SLinkedListItem_t* SLinkedList__pstInsertAtTail_WithData(SLinkedList_t* pstList,
                                                   void* pvData);
SLinkedListItem_t* SLinkedList__pstInsertAtTail(SLinkedList_t* pstList);



SLinkedList_nERROR SLinkedList__enInsertAtHead_WithData(SLinkedList_t* pstList,
                                                SLinkedListItem_t* pstNewItem,
                                                void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAtHead(SLinkedList_t* pstList,
                                                SLinkedListItem_t* pstNewItem);
SLinkedListItem_t*  SLinkedList__pstInsertAtHead_WithData(SLinkedList_t* pstList,
                                                      void* pvData);
SLinkedListItem_t*  SLinkedList__pstInsertAtHead(SLinkedList_t* pstList);



SLinkedList_nERROR SLinkedList__enInsertPos_WithData(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition,
                                            void* pvData);
SLinkedList_nERROR SLinkedList__enInsertPos(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition);
SLinkedListItem_t*  SLinkedList__pstInsertPos_WithData(SLinkedList_t* pstList,
                                                    UBase_t uxPosition,
                                                    void* pvData);
SLinkedListItem_t*  SLinkedList__pstInsertPos(SLinkedList_t* pstList,
                                                    UBase_t uxPosition);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INSERT_H_ */
