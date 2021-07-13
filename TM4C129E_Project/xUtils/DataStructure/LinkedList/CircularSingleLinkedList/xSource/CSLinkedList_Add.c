/**
 *
 * @file CSLinkedList_Add.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Add.h>

#include <stdlib.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>

CSLinkedList_nSTATUS CSLinkedList__enAddNext(CSLinkedList_TypeDef* pstList,
                                             CSLinkedListElement_TypeDef* pstPreviousElement,
                                             CSLinkedListElement_TypeDef* pstNewElement,
                                             void* pvData)
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
            CSLinkedList__vSetElementData(pstNewElement, pvData);
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

CSLinkedListElement_TypeDef* CSLinkedList__pstAddNext(CSLinkedList_TypeDef* pstList, CSLinkedListElement_TypeDef* pstPreviousElement, void* pvData)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        #if defined (__TI_ARM__ )
        pstNewElement = (CSLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListElement_TypeDef));
        #elif defined (__GNUC__ )
        pstNewElement = (CSLinkedListElement_TypeDef*) malloc(sizeof(CSLinkedListElement_TypeDef));
        #endif
        CSLinkedList__enAddNext(pstList, pstPreviousElement,  pstNewElement, pvData);
    }
    return (pstNewElement);
}

CSLinkedList_nSTATUS CSLinkedList__enAddEnd(CSLinkedList_TypeDef* pstList,
                                           CSLinkedListElement_TypeDef* pstNewElement,
                                            void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* pstEndElement = (CSLinkedListElement_TypeDef*) 0UL;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CSLinkedList__pstGetTail(pstList);
        enStatus = CSLinkedList__enAddNext(pstList, pstEndElement, pstNewElement, pvData);
    }
    return (enStatus);
}


CSLinkedListElement_TypeDef*  CSLinkedList__pstAddEnd(CSLinkedList_TypeDef* pstList, void* pvData)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    CSLinkedListElement_TypeDef* pstEndElement = (CSLinkedListElement_TypeDef*) 0UL;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstEndElement = CSLinkedList__pstGetTail(pstList);
        pstNewElement = CSLinkedList__pstAddNext(pstList, pstEndElement, pvData);
    }
    return pstNewElement;
}

CSLinkedList_nSTATUS CSLinkedList__enAddBegin(CSLinkedList_TypeDef* pstList,
                                                CSLinkedListElement_TypeDef* pstNewElement,
                                                void* pvData)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        enStatus = CSLinkedList__enAddNext(pstList, (CSLinkedListElement_TypeDef*) 0UL, pstNewElement, pvData);
    }
    return (enStatus);
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstAddBegin(CSLinkedList_TypeDef* pstList, void* pvData)
{
    CSLinkedListElement_TypeDef* pstNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
    if(((uint32_t) 0UL != (uint32_t) pstList))
    {
        pstNewElement = CSLinkedList__pstAddNext(pstList, (CSLinkedListElement_TypeDef*) 0UL, pvData);
    }
    return (pstNewElement);
}

CSLinkedList_nSTATUS CSLinkedList__enAddPos(CSLinkedList_TypeDef* pstList,
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
                enStatus = CSLinkedList__enAddBegin(pstList, pstNewElement, pvData);
            }
            else if((u32SizeList) == u32Position)
            {
                enStatus = CSLinkedList__enAddEnd(pstList, pstNewElement, pvData);
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
                enStatus = CSLinkedList__enAddNext(pstList, pstElement, pstNewElement, pvData);
            }
        }
    }
    return (enStatus);
}

CSLinkedListElement_TypeDef*  CSLinkedList__pstAddPos(CSLinkedList_TypeDef* pstList, uint32_t u32Position, void* pvData)
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
                pstNewElement = CSLinkedList__pstAddBegin(pstList, pvData);
            }
            else if (u32Position == u32SizeList)
            {
                pstNewElement = CSLinkedList__pstAddEnd(pstList, pvData);
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
                pstNewElement = CSLinkedList__pstAddNext(pstList, pstElement, pvData);
            }
        }
    }
    return (pstNewElement);
}
