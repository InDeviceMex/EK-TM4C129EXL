/**
 *
 * @file CDLinkedList_ElementData.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDLINKEDLIST_ELEMENTDATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDLINKEDLIST_ELEMENTDATA_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

void* CDLinkedList__pvGetElementData(const CDLinkedListElement_TypeDef* const pstElement);
void CDLinkedList__vSetElementData(CDLinkedListElement_TypeDef* pstElement, void* pvDataArg);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ELEMENT_XHEADER_CIRCULARDLINKEDLIST_ELEMENTDATA_H_ */
