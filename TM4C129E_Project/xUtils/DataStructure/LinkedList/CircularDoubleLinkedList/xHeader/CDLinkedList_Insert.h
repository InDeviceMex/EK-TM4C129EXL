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

CDLinkedList_nSTATUS CDLinkedList__enInsertNext_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListItem_TypeDef* pstItem,
                                                      CDLinkedListItem_TypeDef* pstNewItem,
                                                      void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enInsertNext(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListItem_TypeDef* pstItem,
                                                      CDLinkedListItem_TypeDef* pstNewItem);
CDLinkedListItem_TypeDef* CDLinkedList__pstInsertNext_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem, void* pvData);
CDLinkedListItem_TypeDef* CDLinkedList__pstInsertNext(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem);


CDLinkedList_nSTATUS CDLinkedList__enInsertPrevious_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListItem_TypeDef* pstItem,
                                                      CDLinkedListItem_TypeDef* pstNewItem,
                                                      void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enInsertPrevious(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListItem_TypeDef* pstItem,
                                                      CDLinkedListItem_TypeDef* pstNewItem);
CDLinkedListItem_TypeDef* CDLinkedList__pstInsertPrevious_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem, void* pvData);
CDLinkedListItem_TypeDef* CDLinkedList__pstInsertPrevious(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem);



CDLinkedList_nSTATUS  CDLinkedList__enInsertEnd_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData);
CDLinkedList_nSTATUS  CDLinkedList__enInsertEnd(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListItem_TypeDef* pstNewItem);
CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertEnd_WithData(CDLinkedList_TypeDef* pstList, void* pvData);
CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertEnd(CDLinkedList_TypeDef* pstList);



CDLinkedList_nSTATUS CDLinkedList__enInsertBegin_WithData(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enInsertBegin(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListItem_TypeDef* pstNewItem);
CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertBegin_WithData(CDLinkedList_TypeDef* pstList, void* pvData);
CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertBegin(CDLinkedList_TypeDef* pstList);




CDLinkedList_nSTATUS  CDLinkedList__enInsertPos_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position,
                                            void* pvData);
CDLinkedList_nSTATUS  CDLinkedList__enInsertPos(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position);
CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertPos_WithData(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData);
CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertPos(CDLinkedList_TypeDef* pstList, uint32_t u32Position);



#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_INSERT_H_ */
