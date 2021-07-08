/**
 *
 * @file CSLinkedList_ElementData.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSLINKEDLIST_ELEMENTDATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSLINKEDLIST_ELEMENTDATA_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

void* CSLinkedList__pvGetElementData(const CSLinkedListElement_TypeDef* const pstElement);
void CSLinkedList__vSetElementData(CSLinkedListElement_TypeDef* pstElement, void* pvDataArg);






#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARSLINKEDLIST_ELEMENTDATA_H_ */
