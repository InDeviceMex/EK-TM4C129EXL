/**
 *
 * @file DLinkedList_ElementData.h
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_DLINKEDLIST_ELEMENTDATA_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_DLINKEDLIST_ELEMENTDATA_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

void* DLinkedList__pvGetElementData(const DLinkedListElement_TypeDef* const pstElement);
void DLinkedList__vSetElementData(DLinkedListElement_TypeDef* pstElement, void* pvDataArg);





#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_DLINKEDLIST_ELEMENTDATA_H_ */
