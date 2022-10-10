/**
 *
 * @file DLinkedList_Item.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ITEM_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ITEM_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

DLinkedList_nERROR DLinkedList__enGetAllItem(const DLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg);
DLinkedList_nERROR DLinkedList__enGetAllItem_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg);

DLinkedList_nERROR DLinkedList__enGetAllItemBackward(const DLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg);
DLinkedList_nERROR DLinkedList__enGetAllItemBackward_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg);

DLinkedList_nERROR DLinkedList__enGetNItem(const DLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);
DLinkedList_nERROR DLinkedList__enGetNItem_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);

DLinkedList_nERROR DLinkedList__enGetNItemBackward(const DLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);
DLinkedList_nERROR DLinkedList__enGetNItemBackward_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);

DLinkedList_nERROR  DLinkedList__enGetItemPosition(const DLinkedList_t* pstList, UBase_t uxPosition, DLinkedListItem_t** pstItemArg);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ITEM_H_ */
