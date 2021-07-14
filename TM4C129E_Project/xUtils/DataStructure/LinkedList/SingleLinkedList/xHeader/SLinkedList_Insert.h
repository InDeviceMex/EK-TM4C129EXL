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
                                            SLinkedListElement_TypeDef* pstPreviousElement,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData);
SLinkedList_nSTATUS SLinkedList__enInsertNext(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstPreviousElement,
                                            SLinkedListElement_TypeDef* pstNewElement);



SLinkedListElement_TypeDef* SLinkedList__pstInsertNext_WithData(SLinkedList_TypeDef* pstList,
                                                    SLinkedListElement_TypeDef* pstPreviousElement,
                                                    void* pvData);
SLinkedListElement_TypeDef* SLinkedList__pstInsertNext(SLinkedList_TypeDef* pstList,
                                                    SLinkedListElement_TypeDef* pstPreviousElement);



SLinkedList_nSTATUS SLinkedList__enInsertEnd_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData);
SLinkedList_nSTATUS  SLinkedList__enInsertEnd(SLinkedList_TypeDef* pstList,
                                           SLinkedListElement_TypeDef* pstNewElement);



SLinkedListElement_TypeDef* SLinkedList__pstInsertEnd_WithData(SLinkedList_TypeDef* pstList,
                                                   void* pvData);
SLinkedListElement_TypeDef* SLinkedList__pstInsertEnd(SLinkedList_TypeDef* pstList);



SLinkedList_nSTATUS SLinkedList__enInsertBegin_WithData(SLinkedList_TypeDef* pstList,
                                                SLinkedListElement_TypeDef* pstNewElement,
                                                void* pvData);
SLinkedList_nSTATUS SLinkedList__enInsertBegin(SLinkedList_TypeDef* pstList,
                                                SLinkedListElement_TypeDef* pstNewElement);



SLinkedListElement_TypeDef*  SLinkedList__pstInsertBegin_WithData(SLinkedList_TypeDef* pstList,
                                                      void* pvData);
SLinkedListElement_TypeDef*  SLinkedList__pstInsertBegin(SLinkedList_TypeDef* pstList);



SLinkedList_nSTATUS SLinkedList__enInsertPos_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position,
                                            void* pvData);
SLinkedList_nSTATUS SLinkedList__enInsertPos(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position);


SLinkedListElement_TypeDef*  SLinkedList__pstInsertPos_WithData(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position,
                                                    void* pvData);
SLinkedListElement_TypeDef*  SLinkedList__pstInsertPos(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INSERT_H_ */
