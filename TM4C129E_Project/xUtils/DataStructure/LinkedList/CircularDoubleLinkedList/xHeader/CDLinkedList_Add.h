/**
 *
 * @file CDLinkedList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ADD_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nSTATUS CDLinkedList__enAddNext_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement,
                                                      void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enAddNext(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement);
CDLinkedListElement_TypeDef* CDLinkedList__pstAddNext_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void* pvData);
CDLinkedListElement_TypeDef* CDLinkedList__pstAddNext(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement);


CDLinkedList_nSTATUS CDLinkedList__enAddPrevious_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement,
                                                      void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enAddPrevious(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListElement_TypeDef* pstElement,
                                                      CDLinkedListElement_TypeDef* pstNewElement);
CDLinkedListElement_TypeDef* CDLinkedList__pstAddPrevious_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void* pvData);
CDLinkedListElement_TypeDef* CDLinkedList__pstAddPrevious(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement);



CDLinkedList_nSTATUS  CDLinkedList__enAddEnd_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                           void* pvData);
CDLinkedList_nSTATUS  CDLinkedList__enAddEnd(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement);
CDLinkedListElement_TypeDef*  CDLinkedList__pstAddEnd_WithData(CDLinkedList_TypeDef* pstList, void* pvData);
CDLinkedListElement_TypeDef*  CDLinkedList__pstAddEnd(CDLinkedList_TypeDef* pstList);



CDLinkedList_nSTATUS CDLinkedList__enAddBegin_WithData(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData);
CDLinkedList_nSTATUS CDLinkedList__enAddBegin(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListElement_TypeDef* pstNewElement);
CDLinkedListElement_TypeDef*  CDLinkedList__pstAddBegin_WithData(CDLinkedList_TypeDef* pstList, void* pvData);
CDLinkedListElement_TypeDef*  CDLinkedList__pstAddBegin(CDLinkedList_TypeDef* pstList);




CDLinkedList_nSTATUS  CDLinkedList__enAddPos_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position,
                                            void* pvData);
CDLinkedList_nSTATUS  CDLinkedList__enAddPos(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position);
CDLinkedListElement_TypeDef*  CDLinkedList__pstAddPos_WithData(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData);
CDLinkedListElement_TypeDef*  CDLinkedList__pstAddPos(CDLinkedList_TypeDef* pstList, uint32_t u32Position);



#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ADD_H_ */
