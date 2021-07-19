/**
 *
 * @file CSLinkedList_Insert.h
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_INSERT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_INSERT_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

CSLinkedList_nSTATUS CSLinkedList__enInsertNext_WithData(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstItem,
                                            CSLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
CSLinkedList_nSTATUS CSLinkedList__enInsertNext(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstItem,
                                            CSLinkedListItem_TypeDef* pstNewItem);
CSLinkedListItem_TypeDef* CSLinkedList__pstInsertNext_WithData(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem, void* pvData);
CSLinkedListItem_TypeDef* CSLinkedList__pstInsertNext(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstItem);


CSLinkedList_nSTATUS  CSLinkedList__enInsertNextLastItemRead_WithData(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData);
CSLinkedList_nSTATUS  CSLinkedList__enInsertNextLastItemRead(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListItem_TypeDef* pstNewItem);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertNextLastItemRead_WithData(CSLinkedList_TypeDef* pstList, void* pvData);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertNextLastItemRead(CSLinkedList_TypeDef* pstList);


CSLinkedList_nSTATUS CSLinkedList__enInsertAtTail_WithData(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
CSLinkedList_nSTATUS CSLinkedList__enInsertAtTail(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListItem_TypeDef* pstNewItem);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertAtTail_WithData(CSLinkedList_TypeDef* pstList, void* pvData);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertAtTail(CSLinkedList_TypeDef* pstList);



CSLinkedList_nSTATUS CSLinkedList__enInsertAtHead_WithData(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListItem_TypeDef* pstNewItem,
                                                void* pvData);
CSLinkedList_nSTATUS CSLinkedList__enInsertAtHead(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListItem_TypeDef* pstNewItem);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertAtHead_WithData(CSLinkedList_TypeDef* pstList, void* pvData);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertAtHead(CSLinkedList_TypeDef* pstList);



CSLinkedList_nSTATUS CSLinkedList__enInsertPos_WithData(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position,
                                            void* pvData);
CSLinkedList_nSTATUS CSLinkedList__enInsertPos(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertPos_WithData(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertPos(CSLinkedList_TypeDef* pstList, uint32_t u32Position);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_INSERT_H_ */
