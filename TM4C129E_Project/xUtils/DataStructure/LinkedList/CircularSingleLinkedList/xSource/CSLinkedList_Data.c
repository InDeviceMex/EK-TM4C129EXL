/**
 *
 * @file CSLinkedList_Data.c
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Data.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Node.h>

void* CSLinkedList__pvGetNodeDataPos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    void* pvElementData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = CSLinkedList__pstGetNodePos(pstList, u32Position);
        if((uint32_t) 0UL != (uint32_t) pstElement)
        {
            pvElementData = CSLinkedList__pvGetElementData(pstElement);
        }
    }
    return (pvElementData);
}

uint32_t CSLinkedList__u32GetNodeDataAuxiliarPos(const CSLinkedList_TypeDef* pstList, uint32_t u32Position)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32ElementDataAuxiliar = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = CSLinkedList__pstGetNodePos(pstList, u32Position);
        if((uint32_t) 0UL != (uint32_t) pstElement)
        {
            u32ElementDataAuxiliar = CSLinkedList__u32GetElementDataAuxiliar(pstElement);
        }
    }
    return (u32ElementDataAuxiliar);
}

void* CSLinkedList__pvGetNodeDataEnd(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    void* pvElementData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = CSLinkedList__pstGetNodeEnd(pstList);
        if((uint32_t) 0UL != (uint32_t) pstElement)
        {
            pvElementData = CSLinkedList__pvGetElementData(pstElement);
        }
    }
    return (pvElementData);
}

uint32_t CSLinkedList__u32GetNodeDataAuxiliarEnd(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32ElementDataAuxiliar = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = CSLinkedList__pstGetNodeEnd(pstList);
        if((uint32_t) 0UL != (uint32_t) pstElement)
        {
            u32ElementDataAuxiliar = CSLinkedList__u32GetElementDataAuxiliar(pstElement);
        }
    }
    return (u32ElementDataAuxiliar);
}

void* CSLinkedList__pvGetNodeDataBegin(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    void* pvElementData = (void*) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = CSLinkedList__pstGetNodeBegin(pstList);
        if((uint32_t) 0UL != (uint32_t) pstElement)
        {
            pvElementData = CSLinkedList__pvGetElementData(pstElement);
        }
    }
    return (pvElementData);
}

uint32_t CSLinkedList__u32GetNodeDataAuxiliarBegin(const CSLinkedList_TypeDef* pstList)
{
    CSLinkedListElement_TypeDef* pstElement = (CSLinkedListElement_TypeDef*) 0UL;
    uint32_t u32ElementDataAuxiliar = (uint32_t) 0UL;
    if((uint32_t) 0UL != (uint32_t) pstList)
    {
        pstElement = CSLinkedList__pstGetNodeBegin(pstList);
        if((uint32_t) 0UL != (uint32_t) pstElement)
        {
            u32ElementDataAuxiliar = CSLinkedList__u32GetElementDataAuxiliar(pstElement);
        }
    }
    return (u32ElementDataAuxiliar);
}
