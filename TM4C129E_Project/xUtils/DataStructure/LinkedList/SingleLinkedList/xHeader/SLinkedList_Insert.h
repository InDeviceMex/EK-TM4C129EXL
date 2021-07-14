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

SLinkedList_nSTATUS SLinkedList__enInsertNext_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstPreviousItemArg,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
SLinkedList_nSTATUS SLinkedList__enInsertNext(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstPreviousItemArg,
                                            SLinkedListItem_TypeDef* pstNewItem);
SLinkedListItem_TypeDef* SLinkedList__pstInsertNext_WithData(SLinkedList_TypeDef* pstList,
                                                    SLinkedListItem_TypeDef* pstPreviousItemArg,
                                                    void* pvData);
SLinkedListItem_TypeDef* SLinkedList__pstInsertNext(SLinkedList_TypeDef* pstList,
                                                    SLinkedListItem_TypeDef* pstPreviousItemArg);


SLinkedList_nSTATUS  SLinkedList__enInsertNextLastItemRead_WithData(SLinkedList_TypeDef* pstList,
                                           SLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData);
SLinkedList_nSTATUS  SLinkedList__enInsertNextLastItemRead(SLinkedList_TypeDef* pstList,
                                           SLinkedListItem_TypeDef* pstNewItem);
SLinkedListItem_TypeDef*  SLinkedList__pstInsertNextLastItemRead_WithData(SLinkedList_TypeDef* pstList, void* pvData);
SLinkedListItem_TypeDef*  SLinkedList__pstInsertNextLastItemRead(SLinkedList_TypeDef* pstList);


SLinkedList_nSTATUS SLinkedList__enInsertAtTail_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
SLinkedList_nSTATUS  SLinkedList__enInsertAtTail(SLinkedList_TypeDef* pstList,
                                           SLinkedListItem_TypeDef* pstNewItem);
SLinkedListItem_TypeDef* SLinkedList__pstInsertAtTail_WithData(SLinkedList_TypeDef* pstList,
                                                   void* pvData);
SLinkedListItem_TypeDef* SLinkedList__pstInsertAtTail(SLinkedList_TypeDef* pstList);



SLinkedList_nSTATUS SLinkedList__enInsertAtHead_WithData(SLinkedList_TypeDef* pstList,
                                                SLinkedListItem_TypeDef* pstNewItem,
                                                void* pvData);
SLinkedList_nSTATUS SLinkedList__enInsertAtHead(SLinkedList_TypeDef* pstList,
                                                SLinkedListItem_TypeDef* pstNewItem);
SLinkedListItem_TypeDef*  SLinkedList__pstInsertAtHead_WithData(SLinkedList_TypeDef* pstList,
                                                      void* pvData);
SLinkedListItem_TypeDef*  SLinkedList__pstInsertAtHead(SLinkedList_TypeDef* pstList);



SLinkedList_nSTATUS SLinkedList__enInsertPos_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position,
                                            void* pvData);
SLinkedList_nSTATUS SLinkedList__enInsertPos(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position);
SLinkedListItem_TypeDef*  SLinkedList__pstInsertPos_WithData(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position,
                                                    void* pvData);
SLinkedListItem_TypeDef*  SLinkedList__pstInsertPos(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INSERT_H_ */
