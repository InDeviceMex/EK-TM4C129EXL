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

SLinkedList_nERROR SLinkedList__enInsertAndCreateNext_WithData(SLinkedList_t* pstList,
                                                    SLinkedListItem_t* pstPreviousItemArg,
                                                    SLinkedListItem_t** pstNewItemArg,
                                                    void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAndCreateNext(SLinkedList_t* pstList,
                                                       SLinkedListItem_t* pstPreviousItemArg,
                                                       SLinkedListItem_t** pstNewItemArg);




SLinkedList_nERROR SLinkedList__enInsertNextOnLastItemRead_WithData(SLinkedList_t* pstList, SLinkedListItem_t* pstNewItem, void* pvData);
SLinkedList_nERROR SLinkedList__enInsertNextOnLastItemRead(SLinkedList_t* pstList, SLinkedListItem_t* pstNewItem);

SLinkedList_nERROR SLinkedList__enInsertAndCreateNextOnLastItemRead_WithData(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem, void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAndCreateNextOnLastItemRead(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem);



SLinkedList_nERROR SLinkedList__enInsertAtTail_WithData(SLinkedList_t* pstList, SLinkedListItem_t* pstNewItem, void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAtTail(SLinkedList_t* pstList, SLinkedListItem_t* pstNewItem);

SLinkedList_nERROR SLinkedList__enInsertAndCreateAtTail_WithData(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem, void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAndCreateAtTail(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem);



SLinkedList_nERROR SLinkedList__enInsertAtHead_WithData(SLinkedList_t* pstList, SLinkedListItem_t* pstNewItem, void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAtHead(SLinkedList_t* pstList, SLinkedListItem_t* pstNewItem);

SLinkedList_nERROR SLinkedList__enInsertAndCreateAtHead_WithData(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem, void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAndCreateAtHead(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem);



SLinkedList_nERROR SLinkedList__enInsertAtPosition_WithData(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition,
                                            void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAtPosition(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition);
SLinkedList_nERROR SLinkedList__enInsertAndCreateAtPosition_WithData(SLinkedList_t* pstList,
                                                       SLinkedListItem_t** pstNewItem,
                                                       UBase_t uxPosition,
                                                       void* pvData);
SLinkedList_nERROR SLinkedList__enInsertAndCreateAtPosition(SLinkedList_t* pstList,
                                                            SLinkedListItem_t** pstNewItem,
                                                            UBase_t uxPosition);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INSERT_H_ */
