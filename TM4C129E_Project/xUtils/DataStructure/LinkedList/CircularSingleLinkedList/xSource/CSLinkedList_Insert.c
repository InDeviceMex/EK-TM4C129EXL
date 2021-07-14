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
                                             CSLinkedListElement_TypeDef* pstPreviousElement,
                                             CSLinkedListElement_TypeDef* pstNewElement,
                                             void* pvData,
                                             uint32_t u32DataUpdate);

static CSLinkedList_nSTATUS CSLinkedList__enInsertNextGeneric(CSLinkedList_TypeDef* pstList,
                                             CSLinkedListElement_TypeDef* pstPreviousElement,
                                             CSLinkedListElement_TypeDef* pstNewElement,
                                             void* pvData,
                                             uint32_t u32DataUpdate)
{
    CSLinkedList_nSTATUS enStatusReturn = CSLinkedList_enSTATUS_ERROR;
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstNextElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstNewElement1 = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstListHeadNode = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstListTailNode = (CSLinkedListElement_TypeDef*) 0UL ;
    uint32_t u32SizeReg = 0U;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        if((uint32_t) 0UL != (uint32_t) pstNewElement)
        {
            enStatusReturn = CSLinkedList_enSTATUS_OK;
            if(DATA_UPDATE == u32DataUpdate)
            {
                CSLinkedList__vSetElementData(pstNewElement, pvData);
            }
            CSLinkedList__vSetElementOwnerList(pstNewElement, (void*) pstList);

            u32SizeReg = CSLinkedList__u32GetSize(pstList);
            if(0UL == u32SizeReg) /*Empty List*/
            {
                pstNewElement1 = pstNewElement;
                CSLinkedList__vSetElementNextNode(pstNewElement, pstNewElement1);
                CSLinkedList__vSetHead(pstList, pstNewElement);
                CSLinkedList__vSetTail(pstList, pstNewElement);
            }
            else if((uint32_t) 0UL == (uint32_t) pstPreviousElement) /*Insert to head*/
            {
                pstListTailNode = CSLinkedList__pstGetTail(pstList);
                pstListHeadNode = CSLinkedList__pstGetHead(pstList);
                CSLinkedList__vSetElementNextNode(pstNewElement, pstListHeadNode);
                CSLinkedList__vSetElementNextNode(pstListTailNode, pstNewElement);
                CSLinkedList__vSetHead(pstList, pstNewElement);
            }
            else /*Insert beetween nodes*/
            {
                enStatus = CSLinkedList__enIsTail(pstList, pstPreviousElement);
                if((uint32_t) CSLinkedList_enSTATUS_OK == (uint32_t) enStatus)
                {
                    CSLinkedList__vSetTail(pstList, pstNewElement);
                }
                pstNextElement = CSLinkedList__pstGetElementNextNode(pstPreviousElement);
                CSLinkedList__vSetElementNextNode(pstNewElement, pstNextElement);
                CSLinkedList__vSetElementNextNode(pstPreviousElement, pstNewElement);
            }
            u32SizeReg++;
            CSLinkedList__vSetSize(pstList, u32SizeReg);
        }
    }
    return(enStatusReturn);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertNext_WithData(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListElement_TypeDef* pstPreviousElement,
                                            CSLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enInsertNextGeneric(pstList, pstPreviousElement, pstNewElement, pvData, DATA_UPDATE);
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertNext(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListElement_TypeDef* pstPreviousElement,
                                            CSLinkedListElement_TypeDef* pstNewElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    enStatus = CSLinkedList__enInsertNextGeneric(pstList, pstPreviousElement, pstNewElement, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}



CSLinkedListElement_TypeDef* CSLinkedList__pstInsertNext_WithData(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstPreviousElement, void* pvData)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        #if defined (__TI_ARM__ )
        pstNewElement = (CSLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListElement_TypeDef));
        #elif defined (__GNUC__ )
        pstNewElement = (CSLinkedListElement_TypeDef*) malloc(sizeof(CSLinkedListElement_TypeDef));
        #endif
        CSLinkedList__enInsertNext_WithData(pstList, pstPreviousElement,  pstNewElement, pvData);
    }
    return (pstNewElement);
}

CSLinkedListElement_TypeDef* CSLinkedList__pstInsertNext(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstPreviousElement)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        #if defined (__TI_ARM__ )
        pstNewElement = (CSLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListElement_TypeDef));
        #elif defined (__GNUC__ )
        pstNewElement = (CSLinkedListElement_TypeDef*) malloc(sizeof(CSLinkedListElement_TypeDef));
        #endif
        CSLinkedList__enInsertNext(pstList, pstPreviousElement,  pstNewElement);
    }
    return (pstNewElement);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertEnd_WithData(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstEndElement = (CSLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CSLinkedList__pstGetTail(pstList);
        enStatus = CSLinkedList__enInsertNext_WithData(pstList, pstEndElement, pstNewElement, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertEnd(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListElement_TypeDef* pstNewElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstEndElement = (CSLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CSLinkedList__pstGetTail(pstList);
        enStatus = CSLinkedList__enInsertNext(pstList, pstEndElement, pstNewElement);
    }
    return (enStatus);
}


CSLinkedListElement_TypeDef*  CSLinkedList__pstInsertEnd_WithData(CSLinkedList_TypeDef* pstList, void* pvData)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstEndElement = (CSLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CSLinkedList__pstGetTail(pstList);
        pstNewElement = CSLinkedList__pstInsertNext_WithData(pstList, pstEndElement, pvData);
    }
    return pstNewElement;
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstInsertEnd(CSLinkedList_TypeDef* pstList)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstEndElement = (CSLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CSLinkedList__pstGetTail(pstList);
        pstNewElement = CSLinkedList__pstInsertNext(pstList, pstEndElement);
    }
    return pstNewElement;
}

CSLinkedList_nSTATUS CSLinkedList__enInsertBegin_WithData(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListElement_TypeDef* pstNewElement,
                                                void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = CSLinkedList__enInsertNext_WithData(pstList, (CSLinkedListElement_TypeDef*) 0UL, pstNewElement, pvData);
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertBegin(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListElement_TypeDef* pstNewElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = CSLinkedList__enInsertNext(pstList, (CSLinkedListElement_TypeDef*) 0UL, pstNewElement);
    }
    return (enStatus);
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstInsertBegin_WithData(CSLinkedList_TypeDef* pstList, void* pvData)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewElement = CSLinkedList__pstInsertNext_WithData(pstList, (CSLinkedListElement_TypeDef*) 0UL, pvData);
    }
    return (pstNewElement);
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstInsertBegin(CSLinkedList_TypeDef* pstList)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewElement = CSLinkedList__pstInsertNext(pstList, (CSLinkedListElement_TypeDef*) 0UL);
    }
    return (pstNewElement);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertPos_WithData(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position,
                                            void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                enStatus = CSLinkedList__enInsertBegin_WithData(pstList, pstNewElement, pvData);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = CSLinkedList__enInsertEnd_WithData(pstList, pstNewElement, pvData);
            }
            else
            {
                pstElement = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = CSLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
                enStatus = CSLinkedList__enInsertNext_WithData(pstList, pstElement, pstNewElement, pvData);
            }
        }
    }
    return (enStatus);
}

CSLinkedList_nSTATUS CSLinkedList__enInsertPos(CSLinkedList_TypeDef* pstList,
                                            CSLinkedListElement_TypeDef* pstNewElement,
                                            uint32_t u32Position)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                enStatus = CSLinkedList__enInsertBegin(pstList, pstNewElement);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = CSLinkedList__enInsertEnd(pstList, pstNewElement);
            }
            else
            {
                pstElement = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = CSLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
                enStatus = CSLinkedList__enInsertNext(pstList, pstElement, pstNewElement);
            }
        }
    }
    return (enStatus);
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstInsertPos_WithData(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstNewElement = CSLinkedList__pstInsertBegin_WithData(pstList, pvData);
            }
            else if (u32Position == u32SizeList)
            {
                pstNewElement = CSLinkedList__pstInsertEnd_WithData(pstList, pvData);
            }
            else
            {
                pstElement = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = CSLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
                pstNewElement = CSLinkedList__pstInsertNext_WithData(pstList, pstElement, pvData);
            }
        }
    }
    return (pstNewElement);
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstInsertPos(CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32SizeList = 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        u32SizeList = CSLinkedList__u32GetSize(pstList);
        if(u32Position <= u32SizeList)
        {
            if(0UL == u32Position)
            {
                pstNewElement = CSLinkedList__pstInsertBegin(pstList);
            }
            else if (u32Position == u32SizeList)
            {
                pstNewElement = CSLinkedList__pstInsertEnd(pstList);
            }
            else
            {
                pstElement = CSLinkedList__pstGetHead(pstList);
                u32Position--;
                while(0UL != u32Position)
                {
                    pstElement = CSLinkedList__pstGetElementNextNode(pstElement);
                    u32Position--;
                }
                pstNewElement = CSLinkedList__pstInsertNext(pstList, pstElement);
            }
        }
    }
    return (pstNewElement);
}
