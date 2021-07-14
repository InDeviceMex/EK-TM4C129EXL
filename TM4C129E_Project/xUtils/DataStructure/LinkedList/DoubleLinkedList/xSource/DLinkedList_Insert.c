/**
 *
 * @file DLinkedList_Insert.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Insert.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

#define DATA_UPDATE (0UL)
#define DATA_STATIC (1UL)

static DLinkedList_nSTATUS DLinkedList__enInsertNextGeneric(DLinkedList_TypeDef* pstList,
                                                   DLinkedListItem_TypeDef* pstPreviousItem,
                                                   DLinkedListItem_TypeDef* pstNewItem,
                                                   void* pvData,
                                                   uint32_t u32DataUpdate);

DLinkedList_nSTATUS DLinkedList__enInsertPreviousGeneric(DLinkedList_TypeDef* pstList,
                                                       DLinkedListItem_TypeDef* pstNextItem,
                                                       DLinkedListItem_TypeDef* pstNewItem,
                                                       void* pvData,
                                                       uint32_t u32DataUpdate);

static DLinkedList_nSTATUS DLinkedList__enInsertNextGeneric(DLinkedList_TypeDef* pstList,
                                                   DLinkedListItem_TypeDef* pstPreviousItem,
                                                   DLinkedListItem_TypeDef* pstNewItem,
                                                   void* pvData,
                                                   uint32_t u32DataUpdate)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstItemNextNode = (DLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstPreviousItem) || (0UL == u32SizeReg))
        {
            if((uint32_t) 0UL != (uint32_t) pstNewItem)
            {
                enStatus = DLinkedList_enSTATUS_OK;
                if(DATA_UPDATE == u32DataUpdate)
                {
                    DLinkedList_Item__vSetData(pstNewItem, pvData);
                }
                DLinkedList_Item__vSetOwnerList(pstNewItem, (void*) pstList);

                if(0UL == u32SizeReg)
                {
                    DLinkedList__vSetHead(pstList, pstNewItem);

                    DLinkedList_Item__vSetNextItem(pstNewItem, (DLinkedListItem_TypeDef*) 0UL );
                    DLinkedList__vSetItemPreviousNode(pstNewItem, (DLinkedListItem_TypeDef*) 0UL );

                    DLinkedList__vSetTail(pstList, pstNewItem);
                }
                else
                {
                    pstItemNextNode = DLinkedList_Item__pstGetNextItem(pstPreviousItem);

                    DLinkedList_Item__vSetNextItem(pstNewItem, pstItemNextNode );
                    DLinkedList__vSetItemPreviousNode(pstNewItem, pstPreviousItem);

                    if((uint32_t) 0UL == (uint32_t) pstItemNextNode)
                    {
                        DLinkedList__vSetTail(pstList, pstNewItem);
                    }
                    else
                    {
                        DLinkedList__vSetItemPreviousNode(pstItemNextNode, pstNewItem);
                    }
                    DLinkedList_Item__vSetNextItem(pstPreviousItem, pstNewItem);
                }

                u32SizeReg++;
                DLinkedList__vSetSize(pstList, u32SizeReg);
            }
        }
    }
    return (enStatus);
}


DLinkedList_nSTATUS DLinkedList__enInsertPreviousGeneric(DLinkedList_TypeDef* pstList,
                                                       DLinkedListItem_TypeDef* pstNextItem,
                                                       DLinkedListItem_TypeDef* pstNewItem,
                                                       void* pvData,
                                                       uint32_t u32DataUpdate)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstItemPreviousNode = (DLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstNextItem) || (0UL == u32SizeReg))
        {
           if((uint32_t) 0UL != (uint32_t) pstNewItem)
           {
               enStatus = DLinkedList_enSTATUS_OK;
               if(DATA_UPDATE == u32DataUpdate)
               {
                   DLinkedList_Item__vSetData(pstNewItem, pvData);
               }
               DLinkedList_Item__vSetOwnerList(pstNewItem, (void*) pstList);

               if(0UL == u32SizeReg)
               {
                   DLinkedList__vSetHead(pstList, pstNewItem);

                   DLinkedList_Item__vSetNextItem(pstNewItem, (DLinkedListItem_TypeDef*) 0UL );
                   DLinkedList__vSetItemPreviousNode(pstNewItem, (DLinkedListItem_TypeDef*) 0UL );

                   DLinkedList__vSetTail(pstList, pstNewItem);
               }
               else
               {
                   pstItemPreviousNode = DLinkedList__pstGetItemPreviousNode(pstNextItem);

                   DLinkedList_Item__vSetNextItem(pstNewItem, pstNextItem );
                   DLinkedList__vSetItemPreviousNode(pstNewItem, pstItemPreviousNode);

                   if((uint32_t) 0UL == (uint32_t) pstItemPreviousNode)
                   {
                       DLinkedList__vSetHead(pstList, pstNewItem);
                   }
                   else
                   {
                       DLinkedList_Item__vSetNextItem(pstItemPreviousNode, pstNewItem);
                   }
                   DLinkedList__vSetItemPreviousNode(pstNextItem, pstNewItem);
               }
               u32SizeReg++;
               DLinkedList__vSetSize(pstList, u32SizeReg);

               }
       }
   }
   return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enInsertNext_WithData(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstPreviousItem,
                                            DLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enInsertNextGeneric(pstList, pstPreviousItem, pstNewItem, pvData, DATA_UPDATE);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enInsertNext(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstPreviousItem,
                                            DLinkedListItem_TypeDef* pstNewItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enInsertNextGeneric(pstList, pstPreviousItem, pstNewItem, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}

DLinkedListItem_TypeDef* DLinkedList__pstInsertNext_WithData(DLinkedList_TypeDef* pstList,
                                             DLinkedListItem_TypeDef* pstPreviousItem,
                                             void* pvData)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstPreviousItem) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewItem = (DLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedListItem_TypeDef));
            #elif defined (__GNUC__ )
            pstNewItem = (DLinkedListItem_TypeDef*) malloc(sizeof(DLinkedListItem_TypeDef));
            #endif

            DLinkedList__enInsertNext_WithData(pstList, pstPreviousItem, pstNewItem, pvData);
        }
    }
    return (pstNewItem);
}

DLinkedListItem_TypeDef* DLinkedList__pstInsertNext(DLinkedList_TypeDef* pstList,
                                             DLinkedListItem_TypeDef* pstPreviousItem)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstPreviousItem) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewItem = (DLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedListItem_TypeDef));
            #elif defined (__GNUC__ )
            pstNewItem = (DLinkedListItem_TypeDef*) malloc(sizeof(DLinkedListItem_TypeDef));
            #endif

            DLinkedList__enInsertNext(pstList, pstPreviousItem, pstNewItem);
        }
    }
    return (pstNewItem);
}



DLinkedList_nSTATUS DLinkedList__enInsertPrevious_WithData(DLinkedList_TypeDef* pstList,
                                                       DLinkedListItem_TypeDef* pstNextItem,
                                                       DLinkedListItem_TypeDef* pstNewItem,
                                                       void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enInsertPreviousGeneric(pstList, pstNextItem, pstNewItem, pvData, DATA_UPDATE);
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enInsertPrevious(DLinkedList_TypeDef* pstList,
                                                       DLinkedListItem_TypeDef* pstNextItem,
                                                       DLinkedListItem_TypeDef* pstNewItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    enStatus = DLinkedList__enInsertPreviousGeneric(pstList, pstNextItem, pstNewItem, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}

DLinkedListItem_TypeDef* DLinkedList__pstInsertPrevious_WithData(DLinkedList_TypeDef* pstList,
                                                        DLinkedListItem_TypeDef* pstNextItem,
                                                        void* pvData)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstNextItem) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewItem = (DLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedListItem_TypeDef));
            #elif defined (__GNUC__ )
            pstNewItem = (DLinkedListItem_TypeDef*) malloc(sizeof(DLinkedListItem_TypeDef));
            #endif

            DLinkedList__enInsertPrevious_WithData(pstList, pstNextItem, pstNewItem, pvData);
        }
    }
    return pstNewItem;
}

DLinkedListItem_TypeDef* DLinkedList__pstInsertPrevious(DLinkedList_TypeDef* pstList,
                                                        DLinkedListItem_TypeDef* pstNextItem)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeReg = DLinkedList__u32GetSize(pstList);
        if(((uint32_t) 0UL != (uint32_t) pstNextItem) || (0UL == u32SizeReg))
        {
            #if defined (__TI_ARM__ )
            pstNewItem = (DLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(DLinkedListItem_TypeDef));
            #elif defined (__GNUC__ )
            pstNewItem = (DLinkedListItem_TypeDef*) malloc(sizeof(DLinkedListItem_TypeDef));
            #endif

            DLinkedList__enInsertPrevious(pstList, pstNextItem, pstNewItem);
        }
    }
    return pstNewItem;
}

DLinkedList_nSTATUS  DLinkedList__enInsertAtTail_WithData(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem,
                                           void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstEndItem = (DLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = DLinkedList__pstGetTail(pstList);
        enStatus = DLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enInsertAtTail(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstEndItem = (DLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = DLinkedList__pstGetTail(pstList);
        enStatus = DLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enStatus);
}

DLinkedListItem_TypeDef*  DLinkedList__pstInsertAtTail_WithData(DLinkedList_TypeDef* pstList,
                                                    void* pvData)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstEndItem = (DLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = DLinkedList__pstGetTail(pstList);
        pstNewItem = DLinkedList__pstInsertNext_WithData(pstList, pstEndItem, pvData);
    }
    return (pstNewItem);
}

DLinkedListItem_TypeDef*  DLinkedList__pstInsertAtTail(DLinkedList_TypeDef* pstList)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstEndItem = (DLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = DLinkedList__pstGetTail(pstList);
        pstNewItem = DLinkedList__pstInsertNext(pstList, pstEndItem);
    }
    return (pstNewItem);
}

DLinkedList_nSTATUS DLinkedList__enInsertAtHead_WithData(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstBeginItem = (DLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = DLinkedList__pstGetHead(pstList);
        enStatus = DLinkedList__enInsertPrevious_WithData(pstList, pstBeginItem, pstNewItem, pvData);
    }
    return (enStatus);
}

DLinkedList_nSTATUS DLinkedList__enInsertAtHead(DLinkedList_TypeDef* pstList,
                                            DLinkedListItem_TypeDef* pstNewItem)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstBeginItem = (DLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = DLinkedList__pstGetHead(pstList);
        enStatus = DLinkedList__enInsertPrevious(pstList, pstBeginItem, pstNewItem);
    }
    return (enStatus);
}

DLinkedListItem_TypeDef* DLinkedList__pstInsertAtHead_WithData(DLinkedList_TypeDef* pstList, void* pvData)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstBeginItem = (DLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = DLinkedList__pstGetHead(pstList);
        pstNewItem = DLinkedList__pstInsertPrevious_WithData(pstList, pstBeginItem, pvData);
    }
    return (pstNewItem);
}

DLinkedListItem_TypeDef* DLinkedList__pstInsertAtHead(DLinkedList_TypeDef* pstList)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstBeginItem = (DLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstBeginItem = DLinkedList__pstGetHead(pstList);
        pstNewItem = DLinkedList__pstInsertPrevious(pstList, pstBeginItem);
    }
    return (pstNewItem);
}

DLinkedList_nSTATUS  DLinkedList__enInsertPos_WithData(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position,
                                            void* pvData)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstItem = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = DLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Insert Head*/
            {
                enStatus = DLinkedList__enInsertAtHead_WithData(pstList, pstNewItem, pvData);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                enStatus = DLinkedList__enInsertAtTail_WithData(pstList, pstNewItem, pvData);
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
                    pstItem = DLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetNextItem(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = DLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enInsertPrevious_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
        }
    }
    return (enStatus);
}

DLinkedList_nSTATUS  DLinkedList__enInsertPos(DLinkedList_TypeDef* pstList,
                                           DLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListItem_TypeDef* pstItem = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = DLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Insert Head*/
            {
                enStatus = DLinkedList__enInsertAtHead(pstList, pstNewItem);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                enStatus = DLinkedList__enInsertAtTail(pstList, pstNewItem);
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
                    pstItem = DLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetNextItem(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
                }
                else /*Backward*/
                {
                    pstItem = DLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    enStatus = DLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
    }
    return (enStatus);
}

DLinkedListItem_TypeDef*  DLinkedList__pstInsertPos_WithData(DLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position, void* pvData)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstItem = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = DLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Insert Head*/
            {
                pstNewItem = DLinkedList__pstInsertAtHead_WithData(pstList, pvData);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                pstNewItem = DLinkedList__pstInsertAtTail_WithData(pstList, pvData);
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
                    pstItem = DLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetNextItem(pstItem);
                        u32SizeOptimum--;
                    }
                    pstNewItem = DLinkedList__pstInsertNext_WithData(pstList, pstItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = DLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    pstNewItem = DLinkedList__pstInsertPrevious_WithData(pstList, pstItem, pvData);
                }
            }
        }
    }
    return (pstNewItem);
}


DLinkedListItem_TypeDef*  DLinkedList__pstInsertPos(DLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position)
{
    DLinkedListItem_TypeDef* pstNewItem = (DLinkedListItem_TypeDef*) 0UL ;
    DLinkedListItem_TypeDef* pstItem = (DLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    uint32_t u32SizeForward = 0UL;
    uint32_t u32SizeBackward = 0UL;
    uint32_t u32SizeOptimum = 0UL;
    uint32_t u32Direction = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = DLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position) /*Insert Head*/
            {
                pstNewItem = DLinkedList__pstInsertAtHead(pstList);
            }
            else if(u32Position == u32SizeList) /*Insert Tail*/
            {
                pstNewItem = DLinkedList__pstInsertAtTail(pstList);
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
                    pstItem = DLinkedList__pstGetHead(pstList);
                    u32SizeOptimum --;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetNextItem(pstItem);
                        u32SizeOptimum--;
                    }
                    pstNewItem = DLinkedList__pstInsertNext(pstList, pstItem);
                }
                else /*Backward*/
                {
                    pstItem = DLinkedList__pstGetTail(pstList);
                    u32SizeOptimum--;
                    while(0UL != u32SizeOptimum)
                    {
                        pstItem = DLinkedList__pstGetItemPreviousNode(pstItem);
                        u32SizeOptimum--;
                    }
                    pstNewItem = DLinkedList__pstInsertPrevious(pstList, pstItem);
                }
            }
        }
    }
    return (pstNewItem);
}

