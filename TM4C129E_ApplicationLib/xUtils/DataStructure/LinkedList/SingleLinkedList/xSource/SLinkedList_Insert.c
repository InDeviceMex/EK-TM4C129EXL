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

SLinkedList_nERROR SLinkedList__enInsertNextGeneric(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstPreviousItemArg,
                                            SLinkedListItem_t* pstNewItem,
                                            void* pvData,
                                            UBase_t uxDataUpdate);

SLinkedList_nERROR SLinkedList__enInsertNextGeneric(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstPreviousItemArg,
                                            SLinkedListItem_t* pstNewItem,
                                            void* pvData,
                                            UBase_t uxDataUpdate)
{
    SLinkedListItem_t* pstListHeadItem;
    SLinkedListItem_t* pstItemNextNode;
    UBase_t uxSizeReg;
    SLinkedList_nERROR enErrorReg;

    pstListHeadItem = (SLinkedListItem_t*) 0UL ;
    pstItemNextNode = (SLinkedListItem_t*) 0UL ;
    uxSizeReg = 0U;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItem)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeReg);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(DATA_UPDATE == uxDataUpdate)
        {
            enErrorReg = SLinkedList_Item__enSetData(pstNewItem, pvData);
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList_Item__enSetOwnerList(pstNewItem, (void*) pstList);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstPreviousItemArg)
        {
            if(0UL == uxSizeReg)
            {
                enErrorReg = SLinkedList__enSetTail(pstList, pstNewItem);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList__enGetHead(pstList, &pstListHeadItem);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList_Item__enSetNextItem(pstNewItem, pstListHeadItem);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList__enSetHead(pstList, pstNewItem);
            }
        }
        else
        {
            enErrorReg = SLinkedList_Item__enGetNextItem(pstPreviousItemArg, &pstItemNextNode);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                if(0UL == (uintptr_t) pstItemNextNode)
                {
                    enErrorReg = SLinkedList__enSetTail(pstList, pstNewItem);
                }
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList_Item__enSetNextItem(pstNewItem, pstItemNextNode);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList_Item__enSetNextItem(pstPreviousItemArg, pstNewItem);
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        uxSizeReg++;
        enErrorReg = SLinkedList__enSetSize(pstList, uxSizeReg);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertNext_WithData(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstPreviousItemArg,
                                            SLinkedListItem_t* pstNewItem,
                                            void* pvData)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enInsertNextGeneric(pstList, pstPreviousItemArg, pstNewItem, pvData, DATA_UPDATE);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertNext(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstPreviousItemArg,
                                            SLinkedListItem_t* pstNewItem)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enInsertNextGeneric(pstList, pstPreviousItemArg, pstNewItem, (void*) 0UL, DATA_STATIC);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateNext_WithData(SLinkedList_t* pstList,
                                                    SLinkedListItem_t* pstPreviousItemArg,
                                                    SLinkedListItem_t** pstNewItemArg,
                                                    void* pvData)
{
    SLinkedListItem_t* pstNewItem;
    SLinkedList_nERROR enErrorReg;

    pstNewItem = (SLinkedListItem_t*) 0UL ;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (SLinkedListItem_t*) memalign((size_t) 4U, (size_t) sizeof(SLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (SLinkedListItem_t*) malloc(sizeof(SLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertNext_WithData(pstList, pstPreviousItemArg, pstNewItem, pvData);
    }
    if((SLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateNext(SLinkedList_t* pstList,
                                                       SLinkedListItem_t* pstPreviousItemArg,
                                                       SLinkedListItem_t** pstNewItemArg)
{
    SLinkedListItem_t* pstNewItem;
    SLinkedList_nERROR enErrorReg;

    pstNewItem = (SLinkedListItem_t*) 0UL ;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (SLinkedListItem_t*) memalign((size_t) 4U, (size_t) sizeof(SLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (SLinkedListItem_t*) malloc(sizeof(SLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = SLinkedList_enERROR_POINTER;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertNext(pstList, pstPreviousItemArg, pstNewItem);
    }
    if((SLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}


SLinkedList_nERROR  SLinkedList__enInsertNextOnLastItemRead_WithData(SLinkedList_t* pstList,
                                                                     SLinkedListItem_t* pstNewItem,
                                                                     void* pvData)
{
    SLinkedListItem_t* pstLastItemItem;
    SLinkedList_nERROR enErrorReg;

    pstLastItemItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertNext_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

SLinkedList_nERROR  SLinkedList__enInsertNextOnLastItemRead(SLinkedList_t* pstList,
                                                            SLinkedListItem_t* pstNewItem)
{
    SLinkedListItem_t* pstLastItemItem;
    SLinkedList_nERROR enErrorReg;

    pstLastItemItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertNext(pstList, pstLastItemItem, pstNewItem);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateNextOnLastItemRead_WithData(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem, void* pvData)
{
    SLinkedListItem_t* pstLastItemItem;
    SLinkedList_nERROR enErrorReg;

    pstLastItemItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertAndCreateNext_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateNextOnLastItemRead(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem)
{
    SLinkedListItem_t* pstLastItemItem;
    SLinkedList_nERROR enErrorReg;

    pstLastItemItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertAndCreateNext(pstList, pstLastItemItem, pstNewItem);
    }
    return (enErrorReg);
}


SLinkedList_nERROR SLinkedList__enInsertAtTail_WithData(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstNewItem,
                                            void* pvData)
{
    SLinkedListItem_t* pstEndItem;
    SLinkedList_nERROR enErrorReg;

    pstEndItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetTail(pstList, &pstEndItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAtTail(SLinkedList_t* pstList, SLinkedListItem_t* pstNewItem)
{
    SLinkedListItem_t* pstEndItem;
    SLinkedList_nERROR enErrorReg;

    pstEndItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetTail(pstList, &pstEndItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateAtTail_WithData(SLinkedList_t* pstList,
                                                                 SLinkedListItem_t** pstNewItem,
                                                                 void* pvData)
{
    SLinkedListItem_t* pstEndItem;
    SLinkedList_nERROR enErrorReg;

    pstEndItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetTail(pstList, &pstEndItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertAndCreateNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateAtTail(SLinkedList_t* pstList,
                                                        SLinkedListItem_t** pstNewItem)
{
    SLinkedListItem_t* pstEndItem;
    SLinkedList_nERROR enErrorReg;

    pstEndItem = (SLinkedListItem_t*) 0UL;
    enErrorReg = SLinkedList__enGetTail(pstList, &pstEndItem);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enInsertAndCreateNext(pstList, pstEndItem, pstNewItem);
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAtHead_WithData(SLinkedList_t* pstList,
                                                SLinkedListItem_t* pstNewItem,
                                                void* pvData)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enInsertNext_WithData(pstList, (SLinkedListItem_t*) 0UL, pstNewItem, pvData);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAtHead(SLinkedList_t* pstList, SLinkedListItem_t* pstNewItem)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enInsertNext(pstList, (SLinkedListItem_t*) 0UL, pstNewItem);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateAtHead_WithData(SLinkedList_t* pstList,
                                                          SLinkedListItem_t** pstNewItem,
                                                          void* pvData)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enInsertAndCreateNext_WithData(pstList, (SLinkedListItem_t*) 0UL, pstNewItem, pvData);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateAtHead(SLinkedList_t* pstList, SLinkedListItem_t** pstNewItem)
{
    SLinkedList_nERROR enErrorReg;
    enErrorReg = SLinkedList__enInsertAndCreateNext(pstList, (SLinkedListItem_t*) 0UL, pstNewItem);
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAtPosition_WithData(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition,
                                            void* pvData)
{
    SLinkedListItem_t *pstItemTemp;
    SLinkedListItem_t *pstItemReg;
    UBase_t uxSizeList;
    SLinkedList_nERROR enErrorReg;

    pstItemTemp = (SLinkedListItem_t*) 0UL;
    pstItemReg = (SLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeList);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = SLinkedList_enERROR_RANGE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition)
        {
            enErrorReg = SLinkedList__enInsertAtHead_WithData(pstList, pstNewItem, pvData);
        }
        else if(uxSizeList == uxPosition)
        {
            enErrorReg = SLinkedList__enInsertAtTail_WithData(pstList, pstNewItem, pvData);
        }
        else
        {
            enErrorReg = SLinkedList__enGetHead(pstList, &pstItemReg);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                uxPosition--;
                while((0UL != uxPosition) && (SLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = SLinkedList_Item__enGetNextItem(pstItemReg, &pstItemTemp);
                    if(SLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItemReg = pstItemTemp;
                        uxPosition--;
                    }
                }
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList__enInsertNext_WithData(pstList, pstItemReg, pstNewItem, pvData);
            }
        }
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAtPosition(SLinkedList_t* pstList,
                                            SLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition)
{
    SLinkedListItem_t *pstItemTemp;
    SLinkedListItem_t *pstItemReg;
    UBase_t uxSizeList;
    SLinkedList_nERROR enErrorReg;

    pstItemTemp = (SLinkedListItem_t*) 0UL;
    pstItemReg = (SLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeList);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = SLinkedList_enERROR_RANGE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition)
        {
            enErrorReg = SLinkedList__enInsertAtHead(pstList, pstNewItem);
        }
        else if(uxSizeList == uxPosition)
        {
            enErrorReg = SLinkedList__enInsertAtTail(pstList, pstNewItem);
        }
        else
        {
            enErrorReg = SLinkedList__enGetHead(pstList, &pstItemReg);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                uxPosition--;
                while((0UL != uxPosition) && (SLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = SLinkedList_Item__enGetNextItem(pstItemReg, &pstItemTemp);
                    if(SLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItemReg = pstItemTemp;
                        uxPosition--;
                    }
                }
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList__enInsertNext(pstList, pstItemReg, pstNewItem);
            }
        }
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateAtPosition_WithData(SLinkedList_t* pstList,
                                                       SLinkedListItem_t** pstNewItem,
                                                       UBase_t uxPosition,
                                                       void* pvData)
{
    SLinkedListItem_t *pstItemTemp;
    SLinkedListItem_t *pstItemReg;
    UBase_t uxSizeList;
    SLinkedList_nERROR enErrorReg;

    pstItemTemp = (SLinkedListItem_t*) 0UL;
    pstItemReg = (SLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeList);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = SLinkedList_enERROR_RANGE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition)
        {
            enErrorReg = SLinkedList__enInsertAndCreateAtHead_WithData(pstList, pstNewItem, pvData);
        }
        else if(uxSizeList == uxPosition)
        {
            enErrorReg = SLinkedList__enInsertAndCreateAtTail_WithData(pstList, pstNewItem, pvData);
        }
        else
        {
            enErrorReg = SLinkedList__enGetHead(pstList, &pstItemReg);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                uxPosition--;
                while((0UL != uxPosition) && (SLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = SLinkedList_Item__enGetNextItem(pstItemReg, &pstItemTemp);
                    if(SLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItemReg = pstItemTemp;
                        uxPosition--;
                    }
                }
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList__enInsertAndCreateNext_WithData(pstList, pstItemReg, pstNewItem, pvData);
            }
        }
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enInsertAndCreateAtPosition(SLinkedList_t* pstList,
                                                            SLinkedListItem_t** pstNewItem,
                                                            UBase_t uxPosition)
{
    SLinkedListItem_t *pstItemTemp;
    SLinkedListItem_t *pstItemReg;
    UBase_t uxSizeList;
    SLinkedList_nERROR enErrorReg;

    pstItemTemp = (SLinkedListItem_t*) 0UL;
    pstItemReg = (SLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeList);
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = SLinkedList_enERROR_RANGE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition)
        {
            enErrorReg = SLinkedList__enInsertAndCreateAtHead(pstList, pstNewItem);
        }
        else if(uxSizeList == uxPosition)
        {
            enErrorReg = SLinkedList__enInsertAndCreateAtTail(pstList, pstNewItem);
        }
        else
        {
            enErrorReg = SLinkedList__enGetHead(pstList, &pstItemReg);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                uxPosition--;
                while((0UL != uxPosition) && (SLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = SLinkedList_Item__enGetNextItem(pstItemReg, &pstItemTemp);
                    if(SLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItemReg = pstItemTemp;
                        uxPosition--;
                    }
                }
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = SLinkedList__enInsertAndCreateNext(pstList, pstItemReg, pstNewItem);
            }
        }
    }
    return (enErrorReg);
}
