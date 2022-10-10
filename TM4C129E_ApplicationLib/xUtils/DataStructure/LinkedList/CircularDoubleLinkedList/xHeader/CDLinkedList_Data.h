/**
 *
 * @file CDLinkedList_Data.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_DATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_DATA_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nERROR CDLinkedList__enGetDataItemPosition(const CDLinkedList_t* pstList, UBase_t uxPosition, void** pvItemDataArg);
CDLinkedList_nERROR CDLinkedList__enGetValueItemPosition(const CDLinkedList_t* pstList, UBase_t uxPosition, UBase_t* uxItemValueArg);

CDLinkedList_nERROR CDLinkedList__enGetDataTail(const CDLinkedList_t* pstList, void** pvItemDataArg);
CDLinkedList_nERROR CDLinkedList__enGetValueTail(const CDLinkedList_t* pstList, UBase_t* uxItemValueArg);

CDLinkedList_nERROR CDLinkedList__enGetDataHead(const CDLinkedList_t* pstList, void** pvItemDataArg);
CDLinkedList_nERROR CDLinkedList__enGetValueHead(const CDLinkedList_t* pstList, UBase_t* uxItemValueArg);

CDLinkedList_nERROR CDLinkedList__enGetDataNextItem(CDLinkedList_t* const pstList, void** pvItemDataArg);
CDLinkedList_nERROR CDLinkedList__enGetDataPreviousItem(CDLinkedList_t* pstList, void** pvItemDataArg);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_DATA_H_ */
