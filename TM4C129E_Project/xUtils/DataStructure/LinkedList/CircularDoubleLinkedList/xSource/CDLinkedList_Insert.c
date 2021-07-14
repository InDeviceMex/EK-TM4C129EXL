/**
 *
 * @file CircularCDLinkedList_Insert.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Insert.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/CDLinkedList_Intrinsics.h>

#define INSERT_NEXT (0UL)
#define INSERT_PREVIOUS (1UL)

#define DATA_UPDATE (0UL)
#define DATA_STATIC (1UL)


static CDLinkedList_nSTATUS CDLinkedList__enInsertGeneric(CDLinkedList_TypeDef* pstList,
                                                        CDLinkedListItem_TypeDef* pstItem,
                                                        CDLinkedListItem_TypeDef* pstNewItem,
                                                        void* pvData,
                                                        uint32_t u32Insert,
                                                        uint32_t u32DataUpdate);

static CDLinkedList_nSTATUS CDLinkedList__enInsertGeneric(CDLinkedList_TypeDef* pstList,
                                                        CDLinkedListItem_TypeDef* pstItem,
                                                        CDLinkedListItem_TypeDef* pstNewItem,
                                                        void* pvData,
                                                        uint32_t u32Insert,
                                                        uint32_t u32DataUpdate)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstItemTemp = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstItemNextNode = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstItemPreviousNode = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstHeadNode = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstTailNode = (CDLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstItem) || (0UL == u32SizeReg))
        {
            if((uint32_t) 0UL != (uint32_t) pstNewItem)
            {
                enStatus = CDLinkedList_enSTATUS_OK;
                if(DATA_UPDATE == u32DataUpdate)
                {
                    CDLinkedList__vSetItemData(pstNewItem, pvData);
                }
                CDLinkedList__vSetItemOwnerList(pstNewItem, (void*) pstList);

                if(0UL == u32SizeReg)
                {
                    CDLinkedList__vSetHead(pstList, pstNewItem);
                    pstItemTemp = pstNewItem;
                    CDLinkedList__vSetItemNextNode(pstNewItem, pstItemTemp );
                    CDLinkedList__vSetItemPreviousNode(pstNewItem, pstItemTemp );

                    CDLinkedList__vSetTail(pstList, pstNewItem);
                }
                else
                {
                    if(INSERT_NEXT == u32Insert)
                    {
                        pstHeadNode = CDLinkedList__pstGetHead(pstList);
                        pstItemNextNode = CDLinkedList__pstGetItemNextNode(pstItem);

                        CDLinkedList__vSetItemNextNode(pstNewItem, pstItemNextNode );
                        CDLinkedList__vSetItemPreviousNode(pstNewItem, pstItem);
                        if((uint32_t) pstHeadNode == (uint32_t) pstItemNextNode)
                        {
                            CDLinkedList__vSetTail(pstList, pstNewItem);
                        }

                        CDLinkedList__vSetItemPreviousNode(pstItemNextNode, pstNewItem);
                        CDLinkedList__vSetItemNextNode(pstItem, pstNewItem);
                    }
                    else
                    {
                        pstTailNode = CDLinkedList__pstGetTail(pstList);
                        pstItemPreviousNode = CDLinkedList__pstGetItemPreviousNode(pstItem);

                        CDLinkedList__vSetItemNextNode(pstNewItem, pstItem );
                        CDLinkedList__vSetItemPreviousNode(pstNewItem, pstItemPreviousNode);

                        if((uint32_t) pstTailNode == (uint32_t) pstItemPreviousNode)
                        {
                            CDLinkedList__vSetHead(pstList, pstNewItem);
                        }

                        CDLinkedList__vSetItemNextNode(pstItemPreviousNode, pstNewItem);
                        CDLinkedList__vSetItemPreviousNode(pstItem, pstNewItem);
                    }
                }
                u32SizeReg++;
                CDLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enInsertNext_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListItem_TypeDef* pstItem,
                                                      CDLinkedListItem_TypeDef* pstNewItem,
                                                      void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, pvData, INSERT_NEXT, DATA_UPDATE);
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enInsertNext(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListItem_TypeDef* pstItem,
                                                      CDLinkedListItem_TypeDef* pstNewItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, (void*) 0UL, INSERT_NEXT, DATA_STATIC);
    return (enStatus);
}

CDLinkedListItem_TypeDef* CDLinkedList__pstInsertNext_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem, void* pvData)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstItem) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewItem = (CDLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_TypeDef));
            #elif defined (__GNUC__ )
            pstNewItem = (CDLinkedListItem_TypeDef*) malloc(sizeof(CDLinkedListItem_TypeDef));
            #endif

            CDLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
        }
    }
    return (pstNewItem);
}

CDLinkedListItem_TypeDef* CDLinkedList__pstInsertNext(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstItem) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewItem = (CDLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_TypeDef));
            #elif defined (__GNUC__ )
            pstNewItem = (CDLinkedListItem_TypeDef*) malloc(sizeof(CDLinkedListItem_TypeDef));
            #endif

            CDLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
        }
    }
    return (pstNewItem);
}

CDLinkedList_nSTATUS CDLinkedList__enInsertPrevious_WithData(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListItem_TypeDef* pstItem,
                                                      CDLinkedListItem_TypeDef* pstNewItem,
                                                      void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, pvData, INSERT_PREVIOUS, DATA_UPDATE);
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enInsertPrevious(CDLinkedList_TypeDef* pstList,
                                                      CDLinkedListItem_TypeDef* pstItem,
                                                      CDLinkedListItem_TypeDef* pstNewItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    enStatus = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, (void*) 0UL, INSERT_PREVIOUS, DATA_STATIC);
    return (enStatus);
}


CDLinkedListItem_TypeDef* CDLinkedList__pstInsertPrevious_WithData(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem, void* pvData)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstItem) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewItem = (CDLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_TypeDef));
            #elif defined (__GNUC__ )
            pstNewItem = (CDLinkedListItem_TypeDef*) malloc(sizeof(CDLinkedListItem_TypeDef));
            #endif

            CDLinkedList__enInsertPrevious_WithData(pstList, pstItem, pstNewItem, pvData);
        }
    }
    return (pstNewItem);
}


CDLinkedListItem_TypeDef* CDLinkedList__pstInsertPrevious(CDLinkedList_TypeDef* pstList, CDLinkedListItem_TypeDef* pstItem)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = CDLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstItem) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewItem = (CDLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_TypeDef));
            #elif defined (__GNUC__ )
            pstNewItem = (CDLinkedListItem_TypeDef*) malloc(sizeof(CDLinkedListItem_TypeDef));
            #endif

            CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
        }
    }
    return (pstNewItem);
}


CDLinkedList_nSTATUS  CDLinkedList__enInsertEnd_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstEndItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enInsertEnd(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListItem_TypeDef* pstNewItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstEndItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enStatus);
}

CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertEnd_WithData(CDLinkedList_TypeDef* pstList, void* pvData)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstEndItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        pstNewItem = CDLinkedList__pstInsertNext_WithData(pstList, pstEndItem, pvData);
    }
    return (pstNewItem);
}

CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertEnd(CDLinkedList_TypeDef* pstList)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstEndItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        pstNewItem = CDLinkedList__pstInsertNext(pstList, pstEndItem);
    }
    return (pstNewItem);
}

CDLinkedList_nSTATUS CDLinkedList__enInsertBegin_WithData(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstBeginItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enInsertPrevious_WithData(pstList, pstBeginItem, pstNewItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nSTATUS CDLinkedList__enInsertBegin(CDLinkedList_TypeDef* pstList,
                                            CDLinkedListItem_TypeDef* pstNewItem)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstBeginItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enInsertPrevious(pstList, pstBeginItem, pstNewItem);
    }
    return (enStatus);
}

CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertBegin_WithData(CDLinkedList_TypeDef* pstList, void* pvData)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstBeginItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        pstNewItem = CDLinkedList__pstInsertPrevious_WithData(pstList, pstBeginItem, pvData);
    }
    return (pstNewItem);
}

CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertBegin(CDLinkedList_TypeDef* pstList)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstBeginItem = (CDLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        pstNewItem = CDLinkedList__pstInsertPrevious(pstList, pstBeginItem);
    }
    return (pstNewItem);
}

CDLinkedList_nSTATUS  CDLinkedList__enInsertPos_WithData(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position,
                                            void* pvData)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Insert Head*/
            {
                enStatus = CDLinkedList__enInsertBegin_WithData(pstList, pstNewItem, pvData);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                enStatus = CDLinkedList__enInsertEnd_WithData(pstList, pstNewItem, pvData);
            }
            else
            {
                u32SizeBackward = u32SizeList - u32Position;

                u32SizeForward = u32Position;

                if(u32SizeForward > u32SizeBackward)
                {
                    u32SizeOptimum = u32SizeBackward;
                    u32Direction = 1UL;
                }
                else
                {
                    u32SizeOptimum = u32SizeForward;
                    u32Direction = 0UL;
                }

                if(0UL == u32Direction) /*Forward*/
                {
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemNextNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enInsertPrevious_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
        }
    }
    return (enStatus);
}

CDLinkedList_nSTATUS  CDLinkedList__enInsertPos(CDLinkedList_TypeDef* pstList,
                                           CDLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Insert Head*/
            {
                enStatus = CDLinkedList__enInsertBegin(pstList, pstNewItem);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                enStatus = CDLinkedList__enInsertEnd(pstList, pstNewItem);
            }
            else
            {
                u32SizeBackward = u32SizeList - u32Position;

                u32SizeForward = u32Position;

                if(u32SizeForward > u32SizeBackward)
                {
                    u32SizeOptimum = u32SizeBackward;
                    u32Direction = 1UL;
                }
                else
                {
                    u32SizeOptimum = u32SizeForward;
                    u32Direction = 0UL;
                }

                if(0UL == u32Direction) /*Forward*/
                {
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemNextNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
    }
    return (enStatus);
}


CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertPos_WithData(CDLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Insert Head*/
            {
                pstNewItem = CDLinkedList__pstInsertBegin_WithData(pstList, pvData);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                pstNewItem = CDLinkedList__pstInsertEnd_WithData(pstList, pvData);
            }
            else
            {
                u32SizeBackward = u32SizeList - u32Position;

                u32SizeForward = u32Position;

                if(u32SizeForward > u32SizeBackward)
                {
                    u32SizeOptimum = u32SizeBackward;
                    u32Direction = 1UL;
                }
                else
                {
                    u32SizeOptimum = u32SizeForward;
                    u32Direction = 0UL;
                }

                if(u32Direction == 0UL) /*Forward*/
                {
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemNextNode(pstItem);
                        u32SizeOptimum--;
                    }
                    pstNewItem = CDLinkedList__pstInsertNext_WithData(pstList, pstItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    pstNewItem = CDLinkedList__pstInsertPrevious_WithData(pstList, pstItem, pvData);
                }
            }
        }
    }
    return (pstNewItem);
}


CDLinkedListItem_TypeDef*  CDLinkedList__pstInsertPos(CDLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CDLinkedListItem_TypeDef* pstNewItem = (CDLinkedListItem_TypeDef*) 0UL ;
    CDLinkedListItem_TypeDef* pstItem = (CDLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CDLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Insert Head*/
            {
                pstNewItem = CDLinkedList__pstInsertBegin(pstList);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                pstNewItem = CDLinkedList__pstInsertEnd(pstList);
            }
            else
            {
                u32SizeBackward = u32SizeList - u32Position;

                u32SizeForward = u32Position;

                if(u32SizeForward > u32SizeBackward)
                {
                    u32SizeOptimum = u32SizeBackward;
                    u32Direction = 1UL;
                }
                else
                {
                    u32SizeOptimum = u32SizeForward;
                    u32Direction = 0UL;
                }

                if(u32Direction == 0UL) /*Forward*/
                {
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemNextNode(pstItem);
                        u32SizeOptimum--;
                    }
                    pstNewItem = CDLinkedList__pstInsertNext(pstList, pstItem);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = CDLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    pstNewItem = CDLinkedList__pstInsertPrevious(pstList, pstItem);
                }
            }
        }
    }
    return (pstNewItem);
}
