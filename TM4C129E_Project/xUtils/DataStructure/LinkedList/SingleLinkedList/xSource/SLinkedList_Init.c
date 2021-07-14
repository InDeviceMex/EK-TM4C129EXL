/**
 *
 * @file SLinkedList_Init.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>
#include <stdlib.h>

SLinkedList_TypeDef* SLinkedList__pstInit(void (*pfvDestroyItemDataArg) (void *DataContainer), void (*pfvDestroyItemArg) (void *Item))
{
    SLinkedList_TypeDef *pstList = 0;
#if defined (__TI_ARM__ )
    pstList = (SLinkedList_TypeDef*) memalign((size_t) 4, (size_t) sizeof(SLinkedList_TypeDef));
#elif defined (__GNUC__ )
    pstList = (SLinkedList_TypeDef*) malloc(sizeof(SLinkedList_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstList->u32Size = 0UL;
        pstList->pfvDestroy = &free;
        pstList->pfvDestroyItemData = pfvDestroyItemDataArg;
        pstList->pfvDestroyItem = pfvDestroyItemArg;
        pstList->pstHead = (SLinkedListItem_TypeDef*)  0UL;
        pstList->pstTail = (SLinkedListItem_TypeDef*)  0UL;
    }
    return (pstList);
}

SLinkedList_nSTATUS SLinkedList__enInit(SLinkedList_TypeDef* pstList,
                                        void (*pfvDestroyItemDataArg) (void *DataContainer),
                                        void (*pfvDestroyItemArg) (void *Item))
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        enStatus = SLinkedList_enSTATUS_OK;
        pstList->u32Size = 0UL;
        pstList->pfvDestroy = (void (*) (void* List))0UL;
        pstList->pfvDestroyItemData = pfvDestroyItemDataArg;
        pstList->pfvDestroyItem = pfvDestroyItemArg;
        pstList->pstHead = (SLinkedListItem_TypeDef*)  0UL;
        pstList->pstTail = (SLinkedListItem_TypeDef*)  0UL;
    }
    return (enStatus);
}
