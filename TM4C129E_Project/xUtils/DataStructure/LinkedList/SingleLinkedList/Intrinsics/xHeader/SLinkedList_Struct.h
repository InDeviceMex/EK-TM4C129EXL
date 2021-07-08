/**
 *
 * @file SLinkedList_Struct.h
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
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_XHEADER_SLINKEDLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_XHEADER_SLINKEDLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    SLinkedList_enSTATUS_OK,
    SLinkedList_enSTATUS_ERROR
}SLinkedList_nSTATUS;

typedef struct SLinkedListElement
{
        void* pvDataContainer;
        struct SLinkedListElement *pstNextNode;
}SLinkedListElement_TypeDef;

typedef struct SLinkedList
{
        uint32_t u32Size;
        uint32_t (*pfu32Match) (const void *pcvKey1, const void *pcvKey2);
        void (*pfvDestroyElementData) (void *DataContainer);
        void (*pfvDestroy) (void* List);
        SLinkedListElement_TypeDef *pstHead;
        SLinkedListElement_TypeDef *pstTail;
}SLinkedList_TypeDef;



#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_INTRINSICS_XHEADER_SLINKEDLIST_STRUCT_H_ */
