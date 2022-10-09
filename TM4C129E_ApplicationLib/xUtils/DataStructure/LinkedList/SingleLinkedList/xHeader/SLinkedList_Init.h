/**
 *
 * @file SLinkedList_Init.h
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INIT_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INIT_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

SLinkedList_nERROR SLinkedList__enCreate(SLinkedList_t** pstList,
                                    SLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                    SLinkedList_pvfDestroyItem_t pvfDestroyItemArg);

SLinkedList_nERROR SLinkedList__enInit(SLinkedList_t* pstList,
                                       SLinkedList_pvfDestroyItemData_t pvfDestroyItemDataArg,
                                       SLinkedList_pvfDestroyItem_t pvfDestroyItemArg,
                                       SLinkedList_pvfDestroy_t pvfDestroyArg);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_INIT_H_ */
