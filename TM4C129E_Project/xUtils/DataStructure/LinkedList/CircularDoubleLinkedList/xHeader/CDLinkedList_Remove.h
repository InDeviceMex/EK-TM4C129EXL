/**
 *
 * @file CircularCDLinkedList_Remove.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_REMOVE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_REMOVE_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nSTATUS CDLinkedList__enRemoveInList_GetData(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement, void** pvData);
CDLinkedList_nSTATUS CDLinkedList__enRemoveInList(CDLinkedList_TypeDef* pstList, CDLinkedListElement_TypeDef* pstElement);
CDLinkedList_nSTATUS CDLinkedList__enRemove_GetData(CDLinkedListElement_TypeDef* pstElement, void** pvData);
CDLinkedList_nSTATUS CDLinkedList__enRemove(CDLinkedListElement_TypeDef* pstElement);

CDLinkedList_nSTATUS CDLinkedList__enRemoveNextInList_GetData(CDLinkedList_TypeDef* pstList, const CDLinkedListElement_TypeDef* pstElement, void** pvData);
CDLinkedList_nSTATUS CDLinkedList__enRemoveNextInList(CDLinkedList_TypeDef* pstList, const CDLinkedListElement_TypeDef* pstElement);
CDLinkedList_nSTATUS CDLinkedList__enRemoveNext_GetData(const CDLinkedListElement_TypeDef* pstElement, void** pvData);
CDLinkedList_nSTATUS CDLinkedList__enRemoveNext(const CDLinkedListElement_TypeDef* pstElement);

CDLinkedList_nSTATUS CDLinkedList__enRemovePreviousInList_GetData(CDLinkedList_TypeDef* pstList, const CDLinkedListElement_TypeDef* pstElement, void** pvData);
CDLinkedList_nSTATUS CDLinkedList__enRemovePreviousInList(CDLinkedList_TypeDef* pstList, const CDLinkedListElement_TypeDef* pstElement);
CDLinkedList_nSTATUS CDLinkedList__enRemovePrevious_GetData(const CDLinkedListElement_TypeDef* pstElement, void** pvData);
CDLinkedList_nSTATUS CDLinkedList__enRemovePrevious(const CDLinkedListElement_TypeDef* pstElement);

CDLinkedList_nSTATUS  CDLinkedList__enRemoveEnd_GetData(CDLinkedList_TypeDef* pstList, void** pvData);
CDLinkedList_nSTATUS  CDLinkedList__enRemoveEnd(CDLinkedList_TypeDef* pstList);

CDLinkedList_nSTATUS  CDLinkedList__enRemoveBegin_GetData(CDLinkedList_TypeDef* pstList, void** pvData);
CDLinkedList_nSTATUS  CDLinkedList__enRemoveBegin(CDLinkedList_TypeDef* pstList);

CDLinkedList_nSTATUS  CDLinkedList__enRemovePos_GetData(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void** pvData);
CDLinkedList_nSTATUS  CDLinkedList__enRemovePos(CDLinkedList_TypeDef* pstList, uint32_t u32Position);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_REMOVE_H_ */
