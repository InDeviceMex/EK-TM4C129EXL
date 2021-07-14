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
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement,
                                                      void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enInsertNext(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement);
CDLinkedListElement_TypeDef* CDLinkedList__pstInsertNext_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void* pvData);
CDLinkedListElement_TypeDef* CDLinkedList__pstInsertNext(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement);


CDLinkedList_nSTATUS CDLinkedList__enInsertPrevious_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement,
                                                      void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enInsertPrevious(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement);
CDLinkedListElement_TypeDef* CDLinkedList__pstInsertPrevious_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void* pvData);
CDLinkedListElement_TypeDef* CDLinkedList__pstInsertPrevious(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement);



CDLinkedList_nSTATUS  CDLinkedList__enInsertEnd_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                           void* pvData);
CDLinkedList_nSTATUS  CDLinkedList__enInsertEnd(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement);
CDLinkedListElement_TypeDef*  CDLinkedList__pstInsertEnd_WithData(CDLinkedList_TypeDef* pstList, void* pvData);
CDLinkedListElement_TypeDef*  CDLinkedList__pstInsertEnd(CDLinkedList_TypeDef* pstList);



CDLinkedList_nSTATUS CDLinkedList__enInsertBegin_WithData(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enInsertBegin(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListElement_TypeDef* pstNewElement);
CDLinkedListElement_TypeDef*  CDLinkedList__pstInsertBegin_WithData(CDLinkedList_TypeDef* pstList, void* pvData);
CDLinkedListElement_TypeDef*  CDLinkedList__pstInsertBegin(CDLinkedList_TypeDef* pstList);




CDLinkedList_nSTATUS  CDLinkedList__enInsertPos_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position,
                                            void* pvData);
CDLinkedList_nSTATUS  CDLinkedList__enInsertPos(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position);
CDLinkedListElement_TypeDef*  CDLinkedList__pstInsertPos_WithData(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData);
CDLinkedListElement_TypeDef*  CDLinkedList__pstInsertPos(CDLinkedList_TypeDef* pstList, uint32_t u32Position);



#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_INSERT_H_ */
