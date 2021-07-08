/**
 *
 * @file CSLinkedList_Size.h
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARSLINKEDLIST_SIZE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARSLINKEDLIST_SIZE_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

uint32_t CSLinkedList__u32GetSize(const CSLinkedList_TypeDef* const pstList);
void CSLinkedList__vSetSize(CSLinkedList_TypeDef*  pstList, uint32_t u32SizeArg);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARSLINKEDLIST_SIZE_H_ */
