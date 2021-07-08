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

 SLinkedListElement_TypeDef* SLinkedList__pstAddNext(SLinkedList_TypeDef* pstList, SLinkedListElement_TypeDef* pstElement, void* pvData);
 SLinkedListElement_TypeDef*  SLinkedList__pstAddEnd(SLinkedList_TypeDef* pstList, void* pvData);
 SLinkedListElement_TypeDef*  SLinkedList__pstAddBegin(SLinkedList_TypeDef* pstList, void* pvData);
 SLinkedListElement_TypeDef*  SLinkedList__pstAddPos(SLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData);



#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_ADD_H_ */
