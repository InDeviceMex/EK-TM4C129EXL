/**
 *
 * @file SLinkedList_Add.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

#define DATA_UPDATE (0UL)
#define DATA_STATIC (1UL)

SLinkedList_nSTATUS SLinkedList__enAddNextGeneric(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstPreviousElement,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData,
                                            uint32_t u32DataUpdate);

SLinkedList_nSTATUS SLinkedList__enAddNextGeneric(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstPreviousElement,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData,
                                            uint32_t u32DataUpdate)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstListHeadNode = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstElementNextNode = (SLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;

    if((0UL != (uint32_t) pstList) && (0UL != (uint32_t) pstNewElement))
    {
        enStatus = SLinkedList_enSTATUS_OK;
        if(DATA_UPDATE == u32DataUpdate)
        {
            SLinkedList__vSetElementData(pstNewElement, pvData);
        }
        SLinkedList__vSetElementOwnerList(pstNewElement, (void*) pstList);

        u32SizeReg = SLinkedList__u32GetSize(pstList);
        if(0UL == (uint32_t) pstPreviousElement)
        {
            if(0UL == u32SizeReg)
            {
                SLinkedList__vSetTail(pstList, pstNewElement);
            }
            pstListHeadNode = SLinkedList__pstGetHead(pstList);
            SLinkedList__vSetElementNextNode(pstNewElement, pstListHeadNode);
            SLinkedList__vSetHead(pstList, pstNewElement);
        }
        else
        {
            pstElementNextNode = SLinkedList__pstGetElementNextNode(pstPreviousElement);
            if((uint32_t) 0UL == (uint32_t) pstElementNextNode)
            {
                SLinkedList__vSetTail(pstList, pstNewElement);
            }
            SLinkedList__vSetElementNextNode(pstNewElement, pstElementNextNode);
            SLinkedList__vSetElementNextNode(pstPreviousElement, pstNewElement);
        }
        u32SizeReg++;
        SLinkedList__vSetSize(pstList, u32SizeReg);
    }
    return (enStatus);
}


SLinkedList_nSTATUS SLinkedList__enAddNext_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstPreviousElement,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enAddNextGeneric(pstList, pstPreviousElement, pstNewElement, pvData, DATA_UPDATE);
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enAddNext(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstPreviousElement,
                                            SLinkedListElement_TypeDef* pstNewElement)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    enStatus = SLinkedList__enAddNextGeneric(pstList, pstPreviousElement, pstNewElement, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}

SLinkedListElement_TypeDef* SLinkedList__pstAddNext_WithData(SLinkedList_TypeDef* pstList,
                                                    SLinkedListElement_TypeDef* pstPreviousElement,
                                                    void* pvData)
{
     SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
    #if defined (__TI_ARM__ )
         pstNewElement = (SLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(SLinkedListElement_TypeDef));
    #elif defined (__GNUC__ )
         pstNewElement = (SLinkedListElement_TypeDef*) malloc(sizeof(SLinkedListElement_TypeDef));
    #endif
         SLinkedList__enAddNext_WithData(pstList, pstPreviousElement, pstNewElement, pvData);
    }
    return (pstNewElement);
}

SLinkedListElement_TypeDef* SLinkedList__pstAddNext(SLinkedList_TypeDef* pstList,
                                                    SLinkedListElement_TypeDef* pstPreviousElement)
{
     SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) pstList))
     {
    #if defined (__TI_ARM__ )
         pstNewElement = (SLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(SLinkedListElement_TypeDef));
    #elif defined (__GNUC__ )
         pstNewElement = (SLinkedListElement_TypeDef*) malloc(sizeof(SLinkedListElement_TypeDef));
    #endif
         SLinkedList__enAddNext(pstList, pstPreviousElement, pstNewElement);
    }
    return (pstNewElement);
}

SLinkedList_nSTATUS SLinkedList__enAddEnd_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstEndElement = (SLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = SLinkedList__pstGetTail(pstList);
        enStatus = SLinkedList__enAddNext_WithData(pstList, pstEndElement, pstNewElement, pvData);
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enAddEnd(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstEndElement = (SLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = SLinkedList__pstGetTail(pstList);
        enStatus = SLinkedList__enAddNext(pstList, pstEndElement, pstNewElement);
    }
    return (enStatus);
}

SLinkedListElement_TypeDef* SLinkedList__pstAddEnd_WithData(SLinkedList_TypeDef* pstList,
                                                   void* pvData)
{
    SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstEndElement = (SLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = SLinkedList__pstGetTail(pstList);
        pstNewElement = SLinkedList__pstAddNext_WithData(pstList, pstEndElement, pvData);
    }
    return (pstNewElement);
}

SLinkedListElement_TypeDef* SLinkedList__pstAddEnd(SLinkedList_TypeDef* pstList)
{
    SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstEndElement = (SLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = SLinkedList__pstGetTail(pstList);
        pstNewElement = SLinkedList__pstAddNext(pstList, pstEndElement);
    }
    return (pstNewElement);
}

SLinkedList_nSTATUS SLinkedList__enAddBegin_WithData(SLinkedList_TypeDef* pstList,
                                                SLinkedListElement_TypeDef* pstNewElement,
                                                void* pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = SLinkedList__enAddNext_WithData(pstList, (SLinkedListElement_TypeDef*) 0UL, pstNewElement, pvData);
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enAddBegin(SLinkedList_TypeDef* pstList,
                                                SLinkedListElement_TypeDef* pstNewElement)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = SLinkedList__enAddNext(pstList, (SLinkedListElement_TypeDef*) 0UL, pstNewElement);
    }
    return (enStatus);
}

SLinkedListElement_TypeDef*  SLinkedList__pstAddBegin_WithData(SLinkedList_TypeDef* pstList,
                                                      void* pvData)
{
    SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewElement = SLinkedList__pstAddNext_WithData(pstList, (SLinkedListElement_TypeDef*) 0UL, pvData);
    }
    return (pstNewElement);
}

SLinkedListElement_TypeDef*  SLinkedList__pstAddBegin(SLinkedList_TypeDef* pstList)
{
    SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewElement = SLinkedList__pstAddNext(pstList, (SLinkedListElement_TypeDef*) 0UL);
    }
    return (pstNewElement);
}

SLinkedList_nSTATUS SLinkedList__enAddPos_WithData(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position,
                                            void* pvData)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                enStatus = SLinkedList__enAddBegin_WithData(pstList, pstNewElement, pvData);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = SLinkedList__enAddEnd_WithData(pstList, pstNewElement, pvData);
            }
            else
            {
                pstElement = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = SLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
                enStatus = SLinkedList__enAddNext_WithData(pstList, pstElement, pstNewElement, pvData);
            }
        }
    }
    return (enStatus);
}

SLinkedList_nSTATUS SLinkedList__enAddPos(SLinkedList_TypeDef* pstList,
                                            SLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                enStatus = SLinkedList__enAddBegin(pstList, pstNewElement);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = SLinkedList__enAddEnd(pstList, pstNewElement);
            }
            else
            {
                pstElement = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = SLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
                enStatus = SLinkedList__enAddNext(pstList, pstElement, pstNewElement);
            }
        }
    }
    return (enStatus);
}

SLinkedListElement_TypeDef*  SLinkedList__pstAddPos_WithData(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position,
                                                    void* pvData)
{
    SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstNewElement = SLinkedList__pstAddBegin_WithData(pstList, pvData);
            }
            else if((u32SizeList) == u32Position)
            {
                pstNewElement = SLinkedList__pstAddEnd_WithData(pstList, pvData);
            }
            else
            {
                pstElement = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = SLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
                pstNewElement = SLinkedList__pstAddNext_WithData(pstList, pstElement, pvData);
            }
        }
    }
    return (pstNewElement);
}

SLinkedListElement_TypeDef*  SLinkedList__pstAddPos(SLinkedList_TypeDef* pstList,
                                                    uint32_t u32Position)
{
    SLinkedListElement_TypeDef* pstNewElement = (SLinkedListElement_TypeDef*) 0UL ;
    SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = SLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstNewElement = SLinkedList__pstAddBegin(pstList);
            }
            else if((u32SizeList) == u32Position)
            {
                pstNewElement = SLinkedList__pstAddEnd(pstList);
            }
            else
            {
                pstElement = SLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = SLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
                pstNewElement = SLinkedList__pstAddNext(pstList, pstElement);
            }
        }
    }
    return (pstNewElement);
}
