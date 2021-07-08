/**
 *
 * @file CSLinkedList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ADD_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

 CSLinkedListElement_TypeDef* CSLinkedList__pstAddNext(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstElement, void* pvData);
 CSLinkedListElement_TypeDef*  CSLinkedList__pstAddEnd(CSLinkedList_TypeDef* pstList, void* pvData);
 CSLinkedListElement_TypeDef*  CSLinkedList__pstAddBegin(CSLinkedList_TypeDef* pstList, void* pvData);
 CSLinkedListElement_TypeDef*  CSLinkedList__pstAddPos(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData);






#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ADD_H_ */
