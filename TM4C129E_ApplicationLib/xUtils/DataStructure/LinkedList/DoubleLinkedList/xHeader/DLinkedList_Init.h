/**
 *
 * @file DLinkedList_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_INIT_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_INIT_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

DLinkedList_nERROR DLinkedList__enCreate(DLinkedList_t** pstList,
                                          DLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                          DLinkedList_pvfDestroyItem_t pvfDestroyItemArg);
DLinkedList_nERROR DLinkedList__enInit(DLinkedList_t* pstList,
                                       DLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                       DLinkedList_pvfDestroyItem_t pvfDestroyItemArg,
                                       DLinkedList_pvfDestroy_t pvfDestroyArg);

#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_INIT_H_ */
