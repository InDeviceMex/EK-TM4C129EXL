/**
 *
 * @file DLinkedList_Init.c
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

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Init.h>
#include <stdlib.h>

DLinkedList_TypeDef* DLinkedList__pstInit(void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    DLinkedList_TypeDef *pstList = 0;
#if defined (__TI_ARM__ )
    pstList = (DLinkedList_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedList_TypeDef));
#elif defined (__GNUC__ )
    pstList = (DLinkedList_TypeDef*) malloc(sizeof(DLinkedList_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstList->u32Size = 0UL;
        pstList->pfvDestroy = &free;
        pstList->pfvDestroyElementData = pfvDestroyElementDataArg;
        pstList->pstHead = (DLinkedListElement_TypeDef*)  0UL;
        pstList->pstTail = (DLinkedListElement_TypeDef*)  0UL;
    }
    return pstList;
}


DLinkedList_nSTATUS DLinkedList__enInit(DLinkedList_TypeDef* pstList, void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        enStatus = DLinkedList_enSTATUS_OK;
        pstList->u32Size = 0UL;
        pstList->pfvDestroy = (void (*) (void* List))0UL;
        pstList->pfvDestroyElementData = pfvDestroyElementDataArg;
        pstList->pstHead = (DLinkedListElement_TypeDef*)  0UL;
        pstList->pstTail = (DLinkedListElement_TypeDef*)  0UL;
    }
    return enStatus;
}



