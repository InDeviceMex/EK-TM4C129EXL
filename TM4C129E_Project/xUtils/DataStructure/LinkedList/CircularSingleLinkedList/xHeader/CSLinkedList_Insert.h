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
                                            CSLinkedListItem_TypeDef* pstPreviousNode,
                                            CSLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
CSLinkedList_nSTATUS CSLinkedList__enInsertNext(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstPreviousNode,
                                            CSLinkedListItem_TypeDef* pstNewItem);
CSLinkedListItem_TypeDef* CSLinkedList__pstInsertNext_WithData(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstPreviousNode, void* pvData);
CSLinkedListItem_TypeDef* CSLinkedList__pstInsertNext(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstPreviousNode);



CSLinkedList_nSTATUS CSLinkedList__enInsertEnd_WithData(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
CSLinkedList_nSTATUS CSLinkedList__enInsertEnd(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListItem_TypeDef* pstNewItem);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertEnd_WithData(CSLinkedList_TypeDef* pstList, void* pvData);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertEnd(CSLinkedList_TypeDef* pstList);



CSLinkedList_nSTATUS CSLinkedList__enInsertBegin_WithData(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListItem_TypeDef* pstNewItem,
                                                void* pvData);
CSLinkedList_nSTATUS CSLinkedList__enInsertBegin(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListItem_TypeDef* pstNewItem);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertBegin_WithData(CSLinkedList_TypeDef* pstList, void* pvData);
CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertBegin(CSLinkedList_TypeDef* pstList);



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
