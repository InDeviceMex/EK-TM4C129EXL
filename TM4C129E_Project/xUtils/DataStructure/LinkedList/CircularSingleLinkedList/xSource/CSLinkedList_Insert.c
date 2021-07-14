/**
 *
 * @file CSLinkedList_Insert.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Insert.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>

#define DATA_UPDATE (0UL)
#define DATA_STATIC (1UL)

static CSLinkedList_nSTATUS CSLinkedList__enInsertNextGeneric(CSLinkedList_TypeDef* pstList,
                                             CSLinkedListItem_TypeDef* pstPreviousItem,
                                             CSLinkedListItem_TypeDef* pstNewItem,
                                             void* pvData,
                                             uint32_t u32DataUpdate);

static CSLinkedList_nSTATUS CSLinkedList__enInsertNextGeneric(CSLinkedList_TypeDef* pstList,
                                             CSLinkedListItem_TypeDef* pstPreviousItem,
                                             CSLinkedListItem_TypeDef* pstNewItem,
                                             void* pvData,
                                             uint32_t u32DataUpdate)
{
    CSLinkedList_nSTATUS enStatusReturn = CSLinkedList_enSTATUS_ERROR;
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstNextItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstNewItem1 = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstListHeadNode = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstListTailNode = (CSLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        if((uint32_t) 0UL != (uint32_t) pstNewItem)
        {
            enStatusReturn = CSLinkedList_enSTATUS_OK;
            if(DATA_UPDATE == u32DataUpdate)
            {
                CSLinkedList__vSetItemData(pstNewItem, pvData);
            }
            CSLinkedList__vSetItemOwnerList(pstNewItem, (void*) pstList);

            u32SizeReg = CSLinkedList__u32GetSize(pstList);
            if(0UL == u32SizeReg) /*Empty List*/
            {
                pstNewItem1 = pstNewItem;
                CSLinkedList__vSetItemNextNode(pstNewItem, pstNewItem1);
                CSLinkedList__vSetHead(pstList, pstNewItem);
                CSLinkedList__vSetTail(pstList, pstNewItem);
            }
            else if((uint32_t) 0UL == (uint32_t) pstPreviousItem) /*Insert to head*/
            {
                pstListTailNode = CSLinkedList__pstGetTail(pstList);
                pstListHeadNode = CSLinkedList__pstGetHead(pstList);
                CSLinkedList__vSetItemNextNode(pstNewItem, pstListHeadNode);
                CSLinkedList__vSetItemNextNode(pstListTailNode, pstNewItem);
                CSLinkedList__vSetHead(pstList, pstNewItem);
            }
            else /*Insert beetween nodes*/
            {
                enStatus = CSLinkedList__enIsTail(pstList, pstPreviousItem);
                if((uint32_t) CSLinkedList_enSTATUS_OK == (uint32_t) enStatus)
                {
                    CSLinkedList__vSetTail(pstList, pstNewItem);
                }
                pstNextItem = CSLinkedList__pstGetItemNextNode(pstPreviousItem);
                CSLinkedList__vSetItemNextNode(pstNewItem, pstNextItem);
                CSLinkedList__vSetItemNextNode(pstPreviousItem, pstNewItem);
            }
            u32SizeReg++;
            CSLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return(enStatusReturn);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertNext_WithData(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstPreviousItem,
                                            CSLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enInsertNextGeneric(pstList, pstPreviousItem, pstNewItem, pvData, DATA_UPDATE);
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertNext(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstPreviousItem,
                                            CSLinkedListItem_TypeDef* pstNewItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enInsertNextGeneric(pstList, pstPreviousItem, pstNewItem, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}



CSLinkedListItem_TypeDef* CSLinkedList__pstInsertNext_WithData(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstPreviousItem, void* pvData)
{
    CSLinkedListItem_TypeDef* pstNewItem = (CSLinkedListItem_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        #if defined (__TI_ARM__ )
        pstNewItem = (CSLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListItem_TypeDef));
        #elif defined (__GNUC__ )
        pstNewItem = (CSLinkedListItem_TypeDef*) malloc(sizeof(CSLinkedListItem_TypeDef));
        #endif
        CSLinkedList__enInsertNext_WithData(pstList, pstPreviousItem,  pstNewItem, pvData);
    }
    return (pstNewItem);
}

CSLinkedListItem_TypeDef* CSLinkedList__pstInsertNext(CSLinkedList_TypeDef* pstList, CSLinkedListItem_TypeDef* pstPreviousItem)
{
    CSLinkedListItem_TypeDef* pstNewItem = (CSLinkedListItem_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        #if defined (__TI_ARM__ )
        pstNewItem = (CSLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListItem_TypeDef));
        #elif defined (__GNUC__ )
        pstNewItem = (CSLinkedListItem_TypeDef*) malloc(sizeof(CSLinkedListItem_TypeDef));
        #endif
        CSLinkedList__enInsertNext(pstList, pstPreviousItem,  pstNewItem);
    }
    return (pstNewItem);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertEnd_WithData(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstEndItem = (CSLinkedListItem_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CSLinkedList__pstGetTail(pstList);
        enStatus = CSLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertEnd(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListItem_TypeDef* pstNewItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstEndItem = (CSLinkedListItem_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CSLinkedList__pstGetTail(pstList);
        enStatus = CSLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enStatus);
}


CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertEnd_WithData(CSLinkedList_TypeDef* pstList, void* pvData)
{
    CSLinkedListItem_TypeDef* pstNewItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstEndItem = (CSLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CSLinkedList__pstGetTail(pstList);
        pstNewItem = CSLinkedList__pstInsertNext_WithData(pstList, pstEndItem, pvData);
    }
    return pstNewItem;
}

CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertEnd(CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstNewItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstEndItem = (CSLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = CSLinkedList__pstGetTail(pstList);
        pstNewItem = CSLinkedList__pstInsertNext(pstList, pstEndItem);
    }
    return pstNewItem;
}

CSLinkedList_nSTATUS CSLinkedList__enInsertBegin_WithData(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListItem_TypeDef* pstNewItem,
                                                void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = CSLinkedList__enInsertNext_WithData(pstList, (CSLinkedListItem_TypeDef*) 0UL, pstNewItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertBegin(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListItem_TypeDef* pstNewItem)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = CSLinkedList__enInsertNext(pstList, (CSLinkedListItem_TypeDef*) 0UL, pstNewItem);
    }
    return (enStatus);
}

CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertBegin_WithData(CSLinkedList_TypeDef* pstList, void* pvData)
{
    CSLinkedListItem_TypeDef* pstNewItem = (CSLinkedListItem_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewItem = CSLinkedList__pstInsertNext_WithData(pstList, (CSLinkedListItem_TypeDef*) 0UL, pvData);
    }
    return (pstNewItem);
}

CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertBegin(CSLinkedList_TypeDef* pstList)
{
    CSLinkedListItem_TypeDef* pstNewItem = (CSLinkedListItem_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewItem = CSLinkedList__pstInsertNext(pstList, (CSLinkedListItem_TypeDef*) 0UL);
    }
    return (pstNewItem);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertPos_WithData(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position,
                                            void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                enStatus = CSLinkedList__enInsertBegin_WithData(pstList, pstNewItem, pvData);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = CSLinkedList__enInsertEnd_WithData(pstList, pstNewItem, pvData);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = CSLinkedList__pstGetItemNextNode(pstItem);
                    u32Position--;
                }
                enStatus = CSLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
            }
        }
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertPos(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                enStatus = CSLinkedList__enInsertBegin(pstList, pstNewItem);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = CSLinkedList__enInsertEnd(pstList, pstNewItem);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = CSLinkedList__pstGetItemNextNode(pstItem);
                    u32Position--;
                }
                enStatus = CSLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
            }
        }
    }
    return (enStatus);
}

CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertPos_WithData(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
{
    CSLinkedListItem_TypeDef* pstNewItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstNewItem = CSLinkedList__pstInsertBegin_WithData(pstList, pvData);
            }
            else if (u32Position == u32SizeList)
            {
                pstNewItem = CSLinkedList__pstInsertEnd_WithData(pstList, pvData);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = CSLinkedList__pstGetItemNextNode(pstItem);
                    u32Position--;
                }
                pstNewItem = CSLinkedList__pstInsertNext_WithData(pstList, pstItem, pvData);
            }
        }
    }
    return (pstNewItem);
}

CSLinkedListItem_TypeDef*  CSLinkedList__pstInsertPos(CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedListItem_TypeDef* pstNewItem = (CSLinkedListItem_TypeDef*) 0UL ;
    CSLinkedListItem_TypeDef* pstItem = (CSLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstNewItem = CSLinkedList__pstInsertBegin(pstList);
            }
            else if (u32Position == u32SizeList)
            {
                pstNewItem = CSLinkedList__pstInsertEnd(pstList);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = CSLinkedList__pstGetItemNextNode(pstItem);
                    u32Position--;
                }
                pstNewItem = CSLinkedList__pstInsertNext(pstList, pstItem);
            }
        }
    }
    return (pstNewItem);
}
