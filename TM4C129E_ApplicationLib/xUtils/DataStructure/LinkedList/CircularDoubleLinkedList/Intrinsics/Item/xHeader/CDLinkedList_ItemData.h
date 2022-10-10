/**
 *
 * @file CDLinkedList_ItemData.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_CIRCULARDLINKEDLIST_ITEMDATA_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_CIRCULARDLINKEDLIST_ITEMDATA_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nERROR CDLinkedList_Item__enGetData(const CDLinkedListItem_t* const pstItem, void** pvDataArg);
CDLinkedList_nERROR CDLinkedList_Item__enSetData(CDLinkedListItem_t* pstItem, void* pvDataArg);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_ITEM_XHEADER_CIRCULARDLINKEDLIST_ITEMDATA_H_ */
