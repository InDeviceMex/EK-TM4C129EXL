/**
 *
 * @file SLinkedList_Insert.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Insert.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

#define DATA_UPDATE (0UL)
#define DATA_STATIC (1UL)

SLinkedList_nSTATUS SLinkedList__enInsertNextGeneric(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstPreviousItem,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData,
                                            uint32_t u32DataUpdate);

SLinkedList_nSTATUS SLinkedList__enInsertNextGeneric(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstPreviousItem,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData,
                                            uint32_t u32DataUpdate)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstListHeadItem = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstItemNextNode = (SLinkedListItem_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;

    if((0UL != (uint32_t) pstList) && (0UL != (uint32_t) pstNewItem))
    {
        enStatus = SLinkedList_enSTATUS_OK;
        if(DATA_UPDATE == u32DataUpdate)
        {
            SLinkedList_Item__vSetData(pstNewItem, pvData);
        }
        SLinkedList_Item__vSetOwnerList(pstNewItem, (void*) pstList);

        u32SizeReg = SLinkedList__u32GetSize(pstList);
        if(0UL == (uint32_t) pstPreviousItem)
        {
            if(0UL == u32SizeReg)
            {
                SLinkedList__vSetTail(pstList, pstNewItem);
            }
            pstListHeadItem = SLinkedList__pstGetHead(pstList);
            SLinkedList_Item__vSetNextNode(pstNewItem, pstListHeadItem);
            SLinkedList__vSetHead(pstList, pstNewItem);
        }
        else
        {
            pstItemNextNode = SLinkedList_Item__pstGetNextItem(pstPreviousItem);
            if((uint32_t) 0UL == (uint32_t) pstItemNextNode)
            {
                SLinkedList__vSetTail(pstList, pstNewItem);
            }
            SLinkedList_Item__vSetNextNode(pstNewItem, pstItemNextNode);
            SLinkedList_Item__vSetNextNode(pstPreviousItem, pstNewItem);
        }
        u32SizeReg++;
        SLinkedList__vSetSize(pstList, u32SizeReg);
    }
    return (enStatus);
}


SLinkedList_nSTATUS SLinkedList__enInsertNext_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstPreviousItem,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enInsertNextGeneric(pstList, pstPreviousItem, pstNewItem, pvData, DATA_UPDATE);
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enInsertNext(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstPreviousItem,
                                            SLinkedListItem_TypeDef* pstNewItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enInsertNextGeneric(pstList, pstPreviousItem, pstNewItem, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}

SLinkedListItem_TypeDef* SLinkedList__pstInsertNext_WithData(SLinkedList_TypeDef* pstList,
                                                    SLinkedListItem_TypeDef* pstPreviousItem,
                                                    void* pvData)
{
     SLinkedListItem_TypeDef* pstNewItem = (SLinkedListItem_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
    #if defined (__TI_ARM__ )
         pstNewItem = (SLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(SLinkedListItem_TypeDef));
    #elif defined (__GNUC__ )
         pstNewItem = (SLinkedListItem_TypeDef*) malloc(sizeof(SLinkedListItem_TypeDef));
    #endif
         SLinkedList__enInsertNext_WithData(pstList, pstPreviousItem, pstNewItem, pvData);
    }
    return (pstNewItem);
}

SLinkedListItem_TypeDef* SLinkedList__pstInsertNext(SLinkedList_TypeDef* pstList,
                                                    SLinkedListItem_TypeDef* pstPreviousItem)
{
     SLinkedListItem_TypeDef* pstNewItem = (SLinkedListItem_TypeDef*) 0UL ;
     pstNewItem = SLinkedList__pstInsertNext_WithData(pstList, pstPreviousItem, (void*)0UL);
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
    #if defined (__TI_ARM__ )
         pstNewItem = (SLinkedListItem_TypeDef*) memalign((size_t) 4, (size_t) sizeof(SLinkedListItem_TypeDef));
    #elif defined (__GNUC__ )
         pstNewItem = (SLinkedListItem_TypeDef*) malloc(sizeof(SLinkedListItem_TypeDef));
    #endif
         SLinkedList__enInsertNext(pstList, pstPreviousItem, pstNewItem);
    }
    return (pstNewItem);
}

SLinkedList_nSTATUS SLinkedList__enInsertAtTail_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            void* pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstEndItem = (SLinkedListItem_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = SLinkedList__pstGetTail(pstList);
        enStatus = SLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enInsertAtTail(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstNewItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstEndItem = (SLinkedListItem_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = SLinkedList__pstGetTail(pstList);
        enStatus = SLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enStatus);
}

SLinkedListItem_TypeDef* SLinkedList__pstInsertAtTail_WithData(SLinkedList_TypeDef* pstList,
                                                   void* pvData)
{
    SLinkedListItem_TypeDef* pstNewItem = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstEndItem = (SLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = SLinkedList__pstGetTail(pstList);
        pstNewItem = SLinkedList__pstInsertNext_WithData(pstList, pstEndItem, pvData);
    }
    return (pstNewItem);
}

SLinkedListItem_TypeDef* SLinkedList__pstInsertAtTail(SLinkedList_TypeDef* pstList)
{
    SLinkedListItem_TypeDef* pstNewItem = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstEndItem = (SLinkedListItem_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndItem = SLinkedList__pstGetTail(pstList);
        pstNewItem = SLinkedList__pstInsertNext(pstList, pstEndItem);
    }
    return (pstNewItem);
}

SLinkedList_nSTATUS SLinkedList__enInsertAtHead_WithData(SLinkedList_TypeDef* pstList,
                                                SLinkedListItem_TypeDef* pstNewItem,
                                                void* pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = SLinkedList__enInsertNext_WithData(pstList, (SLinkedListItem_TypeDef*) 0UL, pstNewItem, pvData);
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enInsertAtHead(SLinkedList_TypeDef* pstList,
                                                SLinkedListItem_TypeDef* pstNewItem)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = SLinkedList__enInsertNext(pstList, (SLinkedListItem_TypeDef*) 0UL, pstNewItem);
    }
    return (enStatus);
}

SLinkedListItem_TypeDef*  SLinkedList__pstInsertAtHead_WithData(SLinkedList_TypeDef* pstList,
                                                      void* pvData)
{
    SLinkedListItem_TypeDef* pstNewItem = (SLinkedListItem_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewItem = SLinkedList__pstInsertNext_WithData(pstList, (SLinkedListItem_TypeDef*) 0UL, pvData);
    }
    return (pstNewItem);
}

SLinkedListItem_TypeDef*  SLinkedList__pstInsertAtHead(SLinkedList_TypeDef* pstList)
{
    SLinkedListItem_TypeDef* pstNewItem = (SLinkedListItem_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewItem = SLinkedList__pstInsertNext(pstList, (SLinkedListItem_TypeDef*) 0UL);
    }
    return (pstNewItem);
}

SLinkedList_nSTATUS SLinkedList__enInsertPos_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position,
                                            void* pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                enStatus = SLinkedList__enInsertAtHead_WithData(pstList, pstNewItem, pvData);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = SLinkedList__enInsertAtTail_WithData(pstList, pstNewItem, pvData);
            }
            else
            {
                pstItem = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = SLinkedList_Item__pstGetNextItem(pstItem);
                    u32Position--;
                }
                enStatus = SLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
            }
        }
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enInsertPos(SLinkedList_TypeDef* pstList,
                                            SLinkedListItem_TypeDef* pstNewItem,
                                            uint32_t u32Position)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                enStatus = SLinkedList__enInsertAtHead(pstList, pstNewItem);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = SLinkedList__enInsertAtTail(pstList, pstNewItem);
            }
            else
            {
                pstItem = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = SLinkedList_Item__pstGetNextItem(pstItem);
                    u32Position--;
                }
                enStatus = SLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
            }
        }
    }
    return (enStatus);
}

SLinkedListItem_TypeDef*  SLinkedList__pstInsertPos_WithData(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position,
                                                    void* pvData)
{
    SLinkedListItem_TypeDef* pstNewItem = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstNewItem = SLinkedList__pstInsertAtHead_WithData(pstList, pvData);
            }
            else if((u32SizeList) == u32Position)
            {
                pstNewItem = SLinkedList__pstInsertAtTail_WithData(pstList, pvData);
            }
            else
            {
                pstItem = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = SLinkedList_Item__pstGetNextItem(pstItem);
                    u32Position--;
                }
                pstNewItem = SLinkedList__pstInsertNext_WithData(pstList, pstItem, pvData);
            }
        }
    }
    return (pstNewItem);
}

SLinkedListItem_TypeDef*  SLinkedList__pstInsertPos(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position)
{
    SLinkedListItem_TypeDef* pstNewItem = (SLinkedListItem_TypeDef*) 0UL ;
    SLinkedListItem_TypeDef* pstItem = (SLinkedListItem_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstNewItem = SLinkedList__pstInsertAtHead(pstList);
            }
            else if((u32SizeList) == u32Position)
            {
                pstNewItem = SLinkedList__pstInsertAtTail(pstList);
            }
            else
            {
                pstItem = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstItem = SLinkedList_Item__pstGetNextItem(pstItem);
                    u32Position--;
                }
                pstNewItem = SLinkedList__pstInsertNext(pstList, pstItem);
            }
        }
    }
    return (pstNewItem);
}
