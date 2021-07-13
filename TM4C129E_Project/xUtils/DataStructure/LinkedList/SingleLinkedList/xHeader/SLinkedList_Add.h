/**
 *
 * @file SLinkedList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ADD_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

SLinkedList_nSTATUS SLinkedList__enAddNext_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstPreviousElement,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData);
SLinkedList_nSTATUS SLinkedList__enAddNext(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstPreviousElement,
                                            SLinkedListElement_TypeDef* pstNewElement);



SLinkedListElement_TypeDef* SLinkedList__pstAddNext_WithData(SLinkedList_TypeDef* pstList,
                                                    SLinkedListElement_TypeDef* pstPreviousElement,
                                                    void* pvData);
SLinkedListElement_TypeDef* SLinkedList__pstAddNext(SLinkedList_TypeDef* pstList,
                                                    SLinkedListElement_TypeDef* pstPreviousElement);



SLinkedList_nSTATUS SLinkedList__enAddEnd_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData);
SLinkedList_nSTATUS  SLinkedList__enAddEnd(SLinkedList_TypeDef* pstList,
                                           SLinkedListElement_TypeDef* pstNewElement);



SLinkedListElement_TypeDef* SLinkedList__pstAddEnd_WithData(SLinkedList_TypeDef* pstList,
                                                   void* pvData);
SLinkedListElement_TypeDef* SLinkedList__pstAddEnd(SLinkedList_TypeDef* pstList);



SLinkedList_nSTATUS SLinkedList__enAddBegin_WithData(SLinkedList_TypeDef* pstList,
                                                SLinkedListElement_TypeDef* pstNewElement,
                                                void* pvData);
SLinkedList_nSTATUS SLinkedList__enAddBegin(SLinkedList_TypeDef* pstList,
                                                SLinkedListElement_TypeDef* pstNewElement);



SLinkedListElement_TypeDef*  SLinkedList__pstAddBegin_WithData(SLinkedList_TypeDef* pstList,
                                                      void* pvData);
SLinkedListElement_TypeDef*  SLinkedList__pstAddBegin(SLinkedList_TypeDef* pstList);



SLinkedList_nSTATUS SLinkedList__enAddPos_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position,
                                            void* pvData);
SLinkedList_nSTATUS SLinkedList__enAddPos(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position);


SLinkedListElement_TypeDef*  SLinkedList__pstAddPos_WithData(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position,
                                                    void* pvData);
SLinkedListElement_TypeDef*  SLinkedList__pstAddPos(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ADD_H_ */
