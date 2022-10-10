/**
 *
 * @file CDLinkedList_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_INIT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_INIT_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nERROR CDLinkedList__enCreate(CDLinkedList_t** pstList,
                                          CDLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                          CDLinkedList_pvfDestroyItem_t pvfDestroyItemArg);
CDLinkedList_nERROR CDLinkedList__enInit(CDLinkedList_t* pstList,
                                       CDLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                       CDLinkedList_pvfDestroyItem_t pvfDestroyItemArg,
                                       CDLinkedList_pvfDestroy_t pvfDestroyArg);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_INIT_H_ */
