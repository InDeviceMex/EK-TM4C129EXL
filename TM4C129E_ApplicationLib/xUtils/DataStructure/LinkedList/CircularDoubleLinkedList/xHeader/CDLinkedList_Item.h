/**
 *
 * @file CDLinkedList_Item.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ITEM_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ITEM_H_


#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nERROR CDLinkedList__enGetAllItem(const CDLinkedList_t* pstList, const void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg);
CDLinkedList_nERROR CDLinkedList__enGetAllItem_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg);

CDLinkedList_nERROR CDLinkedList__enGetAllItemBackward(const CDLinkedList_t* pstList, const void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg);
CDLinkedList_nERROR CDLinkedList__enGetAllItemBackward_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg);

CDLinkedList_nERROR CDLinkedList__enGetNItem(const CDLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);
CDLinkedList_nERROR CDLinkedList__enGetNItem_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);

CDLinkedList_nERROR CDLinkedList__enGetNItemBackward(const CDLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);
CDLinkedList_nERROR CDLinkedList__enGetNItemBackward_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg);

CDLinkedList_nERROR  CDLinkedList__enGetItemPosition(const CDLinkedList_t* pstList, UBase_t uxPosition, CDLinkedListItem_t** pstItemArg);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ITEM_H_ */
