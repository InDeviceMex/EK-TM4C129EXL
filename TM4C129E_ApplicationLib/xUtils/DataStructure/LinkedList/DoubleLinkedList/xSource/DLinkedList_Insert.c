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

static DLinkedList_nERROR DLinkedList__enInsertNextGeneric(DLinkedList_t* pstList,
                                                   DLinkedListItem_t* pstPreviousItemArg,
                                                   DLinkedListItem_t* pstNewItem,
                                                   void* pvData,
                                                   UBase_t uxDataUpdate);

DLinkedList_nERROR DLinkedList__enInsertPreviousGeneric(DLinkedList_t* pstList,
                                                       DLinkedListItem_t* pstNextItemArg,
                                                       DLinkedListItem_t* pstNewItem,
                                                       void* pvData,
                                                       UBase_t uxDataUpdate);

static DLinkedList_nERROR DLinkedList__enInsertNextGeneric(DLinkedList_t* pstList,
                                                   DLinkedListItem_t* pstPreviousItemArg,
                                                   DLinkedListItem_t* pstNewItem,
                                                   void* pvData,
                                                   UBase_t uxDataUpdate)
{
    DLinkedListItem_t* pstItemNextNode;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    pstItemNextNode = (DLinkedListItem_t*) 0UL ;
    uxSizeReg = 0U;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItem)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeReg);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == (uintptr_t) pstPreviousItemArg) && (0UL != uxSizeReg))
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(DATA_UPDATE == uxDataUpdate)
        {
            enErrorReg = DLinkedList_Item__enSetData(pstNewItem, pvData);
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enSetOwnerList(pstNewItem, (void*) pstList);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxSizeReg)
        {
            enErrorReg = DLinkedList__enSetHead(pstList, pstNewItem);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetNextItem(pstNewItem, (DLinkedListItem_t*) 0UL);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetPreviousItem(pstNewItem, (DLinkedListItem_t*) 0UL);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList__enSetTail(pstList, pstNewItem);
            }
        }
        else
        {
            enErrorReg = DLinkedList_Item__enGetNextItem(pstPreviousItemArg, &pstItemNextNode);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetNextItem(pstNewItem, pstItemNextNode );
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetPreviousItem(pstNewItem, pstPreviousItemArg);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                if(0UL == (uintptr_t) pstItemNextNode)
                {
                    enErrorReg = DLinkedList__enSetTail(pstList, pstNewItem);
                }
                else
                {
                    enErrorReg = DLinkedList_Item__enSetPreviousItem(pstItemNextNode, pstNewItem);
                }
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetNextItem(pstPreviousItemArg, pstNewItem);
            }
        }

    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        uxSizeReg++;
        enErrorReg = DLinkedList__enSetSize(pstList, uxSizeReg);
    }
    return (enErrorReg);
}


DLinkedList_nERROR DLinkedList__enInsertPreviousGeneric(DLinkedList_t* pstList,
                                                       DLinkedListItem_t* pstNextItemArg,
                                                       DLinkedListItem_t* pstNewItem,
                                                       void* pvData,
                                                       UBase_t uxDataUpdate)
{
    DLinkedListItem_t* pstItemPreviousNode;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    pstItemPreviousNode = (DLinkedListItem_t*) 0UL ;
    uxSizeReg = 0U;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItem)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeReg);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == (uintptr_t) pstNextItemArg) && (0UL != uxSizeReg))
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(DATA_UPDATE == uxDataUpdate)
        {
            enErrorReg = DLinkedList_Item__enSetData(pstNewItem, pvData);
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList_Item__enSetOwnerList(pstNewItem, (void*) pstList);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxSizeReg)
        {
            enErrorReg = DLinkedList__enSetHead(pstList, pstNewItem);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetNextItem(pstNewItem, (DLinkedListItem_t*) 0UL);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetPreviousItem(pstNewItem, (DLinkedListItem_t*) 0UL);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg =  DLinkedList__enSetTail(pstList, pstNewItem);
            }
        }
        else
        {
            enErrorReg = DLinkedList_Item__enGetPreviousItem(pstNextItemArg, &pstItemPreviousNode);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetNextItem(pstNewItem, pstNextItemArg);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetPreviousItem(pstNewItem, pstItemPreviousNode);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                if(0UL == (uintptr_t) pstItemPreviousNode)
                {
                    enErrorReg = DLinkedList__enSetHead(pstList, pstNewItem);
                }
                else
                {
                    enErrorReg = DLinkedList_Item__enSetNextItem(pstItemPreviousNode, pstNewItem);
                }
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = DLinkedList_Item__enSetPreviousItem(pstNextItemArg, pstNewItem);
            }
        }

    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        uxSizeReg++;
        enErrorReg = DLinkedList__enSetSize(pstList, uxSizeReg);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertNext_WithData(DLinkedList_t* pstList,
                                            DLinkedListItem_t* pstPreviousItemArg,
                                            DLinkedListItem_t* pstNewItem,
                                            void* pvData)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enInsertNextGeneric(pstList, pstPreviousItemArg, pstNewItem, pvData, DATA_UPDATE);
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertNext(DLinkedList_t* pstList,
                                            DLinkedListItem_t* pstPreviousItemArg,
                                            DLinkedListItem_t* pstNewItem)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enInsertNextGeneric(pstList, pstPreviousItemArg, pstNewItem, (void*) 0UL, DATA_STATIC);
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreateNext_WithData(DLinkedList_t* pstList,
                                                                DLinkedListItem_t* pstPreviousItemArg,
                                                                DLinkedListItem_t** pstNewItemArg,
                                                                void* pvData)
{
    DLinkedListItem_t* pstNewItem;
    DLinkedList_nERROR enErrorReg;

    pstNewItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (DLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(DLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (DLinkedListItem_t*) malloc(sizeof(DLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertNext_WithData(pstList, pstPreviousItemArg, pstNewItem, pvData);
    }
    if((DLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreateNext(DLinkedList_t* pstList,
                                             DLinkedListItem_t* pstPreviousItemArg,
                                             DLinkedListItem_t** pstNewItemArg)
{
    DLinkedListItem_t* pstNewItem;
    DLinkedList_nERROR enErrorReg;

    pstNewItem = (DLinkedListItem_t*) 0UL ;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (DLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(DLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (DLinkedListItem_t*) malloc(sizeof(DLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertNext(pstList, pstPreviousItemArg, pstNewItem);
    }
    if((DLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}



DLinkedList_nERROR DLinkedList__enInsertPrevious_WithData(DLinkedList_t* pstList,
                                                       DLinkedListItem_t* pstNextItemArg,
                                                       DLinkedListItem_t* pstNewItem,
                                                       void* pvData)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enInsertPreviousGeneric(pstList, pstNextItemArg, pstNewItem, pvData, DATA_UPDATE);
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertPrevious(DLinkedList_t* pstList,
                                                       DLinkedListItem_t* pstNextItemArg,
                                                       DLinkedListItem_t* pstNewItem)
{
    DLinkedList_nERROR enErrorReg;
    enErrorReg = DLinkedList__enInsertPreviousGeneric(pstList, pstNextItemArg, pstNewItem, (void*) 0UL, DATA_STATIC);
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreatePrevious_WithData(DLinkedList_t* pstList,
                                                        DLinkedListItem_t* pstNextItemArg,
                                                        DLinkedListItem_t** pstNewItemArg,
                                                        void* pvData)
{
    DLinkedListItem_t* pstNewItem;
    DLinkedList_nERROR enErrorReg;

    pstNewItem = (DLinkedListItem_t*) 0UL ;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (DLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(DLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (DLinkedListItem_t*) malloc(sizeof(DLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertPrevious_WithData(pstList, pstNextItemArg, pstNewItem, pvData);
    }
    if((DLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreatePrevious(DLinkedList_t* pstList,
                                                 DLinkedListItem_t* pstNextItemArg,
                                                 DLinkedListItem_t** pstNewItemArg)
{
    DLinkedListItem_t* pstNewItem;
    DLinkedList_nERROR enErrorReg;

    pstNewItem = (DLinkedListItem_t*) 0UL ;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (DLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(DLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (DLinkedListItem_t*) malloc(sizeof(DLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = DLinkedList_enERROR_POINTER;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertPrevious(pstList, pstNextItemArg, pstNewItem);
    }
    if((DLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}


DLinkedList_nERROR DLinkedList__enInsertPreviousOnLastItemRead_WithData(DLinkedList_t* pstList,
                                                                       DLinkedListItem_t* pstNewItem,
                                                                       void* pvData)
{
    DLinkedListItem_t* pstLastItemItem;
    DLinkedList_nERROR enErrorReg;

    pstLastItemItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertPrevious_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertPreviousOnLastItemRead(DLinkedList_t* pstList,
                                                              DLinkedListItem_t* pstNewItem)
{
    DLinkedListItem_t* pstLastItemItem;
    DLinkedList_nERROR enErrorReg;

    pstLastItemItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertPrevious(pstList, pstLastItemItem, pstNewItem);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreatePreviousOnLastItemRead_WithData(DLinkedList_t* pstList,
                                                                                DLinkedListItem_t** pstNewItemArg,
                                                                                void* pvData)
{
    DLinkedListItem_t* pstLastItemItem;
    DLinkedList_nERROR enErrorReg;

    pstLastItemItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertAndCreatePrevious_WithData(pstList, pstLastItemItem, pstNewItemArg, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreatePreviousOnLastItemRead(DLinkedList_t* pstList,
                                                                       DLinkedListItem_t** pstNewItemArg)
{
    DLinkedListItem_t* pstLastItemItem;
    DLinkedList_nERROR enErrorReg;

    pstLastItemItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertAndCreatePrevious(pstList, pstLastItemItem, pstNewItemArg);
    }
    return (enErrorReg);
}


DLinkedList_nERROR DLinkedList__enInsertNextOnLastItemRead_WithData(DLinkedList_t* pstList,
                                                                   DLinkedListItem_t* pstNewItem,
                                                                   void* pvData)
{
    DLinkedListItem_t* pstLastItemItem;
    DLinkedList_nERROR enErrorReg;

    pstLastItemItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertNext_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertNextOnLastItemRead(DLinkedList_t* pstList,
                                           DLinkedListItem_t* pstNewItem)
{
    DLinkedListItem_t* pstLastItemItem;
    DLinkedList_nERROR enErrorReg;

    pstLastItemItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertNext(pstList, pstLastItemItem, pstNewItem);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreateNextOnLastItemRead_WithData(DLinkedList_t* pstList,
                                                                            DLinkedListItem_t** pstNewItemArg,
                                                                            void* pvData)
{
    DLinkedListItem_t* pstLastItemItem;
    DLinkedList_nERROR enErrorReg;

    pstLastItemItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        DLinkedList__enInsertAndCreateNext_WithData(pstList, pstLastItemItem, pstNewItemArg, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreateNextOnLastItemRead(DLinkedList_t* pstList,
                                                                   DLinkedListItem_t** pstNewItemArg)
{
    DLinkedListItem_t* pstLastItemItem;
    DLinkedList_nERROR enErrorReg;

    pstLastItemItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        DLinkedList__enInsertAndCreateNext(pstList, pstLastItemItem, pstNewItemArg);
    }
    return (enErrorReg);
}



DLinkedList_nERROR DLinkedList__enInsertAtTail_WithData(DLinkedList_t* pstList,
                                                         DLinkedListItem_t* pstNewItem,
                                                         void* pvData)
{
    DLinkedListItem_t* pstEndItem;
    DLinkedList_nERROR enErrorReg;

    pstEndItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetTail(pstList, &pstEndItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAtTail(DLinkedList_t* pstList,
                                               DLinkedListItem_t* pstNewItem)
{
    DLinkedListItem_t* pstEndItem;
    DLinkedList_nERROR enErrorReg;

    pstEndItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetTail(pstList, &pstEndItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreateAtTail_WithData(DLinkedList_t* pstList,
                                                          DLinkedListItem_t** pstNewItem,
                                                          void* pvData)
{
    DLinkedListItem_t* pstEndItem;
    DLinkedList_nERROR enErrorReg;

    pstEndItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetTail(pstList, &pstEndItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        DLinkedList__enInsertAndCreateNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreateAtTail(DLinkedList_t* pstList,
                                                        DLinkedListItem_t** pstNewItem)
{
    DLinkedListItem_t* pstEndItem;
    DLinkedList_nERROR enErrorReg;

    pstEndItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetTail(pstList, &pstEndItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        DLinkedList__enInsertAndCreateNext(pstList, pstEndItem, pstNewItem);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAtHead_WithData(DLinkedList_t* pstList,
                                            DLinkedListItem_t* pstNewItem,
                                            void* pvData)
{
    DLinkedListItem_t* pstBeginItem;
    DLinkedList_nERROR enErrorReg;

    pstBeginItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetHead(pstList, &pstBeginItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertPrevious_WithData(pstList, pstBeginItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAtHead(DLinkedList_t* pstList,
                                            DLinkedListItem_t* pstNewItem)
{
    DLinkedListItem_t* pstBeginItem;
    DLinkedList_nERROR enErrorReg;

    pstBeginItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetHead(pstList, &pstBeginItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertPrevious(pstList, pstBeginItem, pstNewItem);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreateAtHead_WithData(DLinkedList_t* pstList,
                                                                 DLinkedListItem_t** pstNewItem,
                                                                 void* pvData)
{
    DLinkedListItem_t* pstBeginItem;
    DLinkedList_nERROR enErrorReg;

    pstBeginItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetHead(pstList, &pstBeginItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertAndCreatePrevious_WithData(pstList, pstBeginItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreateAtHead(DLinkedList_t* pstList,
                                                        DLinkedListItem_t** pstNewItem)
{
    DLinkedListItem_t* pstBeginItem;
    DLinkedList_nERROR enErrorReg;

    pstBeginItem = (DLinkedListItem_t*) 0UL;
    enErrorReg = DLinkedList__enGetHead(pstList, &pstBeginItem);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enInsertAndCreatePrevious(pstList, pstBeginItem, pstNewItem);
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertPosition_WithData(DLinkedList_t* pstList,
                                                          DLinkedListItem_t* pstNewItem,
                                                          UBase_t uxPosition,
                                                          void* pvData)
{
    DLinkedListItem_t* pstItem;
    DLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    pstItemTemp = (DLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeList);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = DLinkedList_enERROR_RANGE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Insert Head*/
        {
            enErrorReg = DLinkedList__enInsertAtHead_WithData(pstList, pstNewItem, pvData);
        }
        else if(uxPosition < uxSizeList)
        {
            UBase_t uxSizeForward;
            UBase_t uxSizeBackward;
            UBase_t uxSizeOptimum;
            UBase_t uxDirection;

            uxSizeBackward = uxSizeList - uxPosition;
            uxSizeForward = uxPosition;

            if(uxSizeForward > uxSizeBackward)
            {
                uxSizeOptimum = uxSizeBackward;
                uxDirection = 1UL;
            }
            else
            {
                uxSizeOptimum = uxSizeForward;
                uxDirection = 0UL;
            }

            if(0UL == uxDirection) /*Forward*/
            {
                enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum --;
                    while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                        if(DLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
            else /*Backward*/
            {
                enErrorReg = DLinkedList__enGetTail(pstList, &pstItem);
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum--;
                    while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                        if(DLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DLinkedList__enInsertPrevious_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
        }
        else /*Insert Tail*/
        {
            enErrorReg = DLinkedList__enInsertAtTail_WithData(pstList, pstNewItem, pvData);
        }
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertPosition(DLinkedList_t* pstList,
                                                 DLinkedListItem_t* pstNewItem,
                                                 UBase_t uxPosition)
{
    DLinkedListItem_t* pstItem;
    DLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    pstItemTemp = (DLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeList);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = DLinkedList_enERROR_RANGE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Insert Head*/
        {
            enErrorReg = DLinkedList__enInsertAtHead(pstList, pstNewItem);
        }
        else if(uxPosition < uxSizeList)
        {
            UBase_t uxSizeForward;
            UBase_t uxSizeBackward;
            UBase_t uxSizeOptimum;
            UBase_t uxDirection;

            uxSizeBackward = uxSizeList - uxPosition;
            uxSizeForward = uxPosition;

            if(uxSizeForward > uxSizeBackward)
            {
                uxSizeOptimum = uxSizeBackward;
                uxDirection = 1UL;
            }
            else
            {
                uxSizeOptimum = uxSizeForward;
                uxDirection = 0UL;
            }

            if(0UL == uxDirection) /*Forward*/
            {
                enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum --;
                    while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                        if(DLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
                }
            }
            else /*Backward*/
            {
                enErrorReg = DLinkedList__enGetTail(pstList, &pstItem);
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum--;
                    while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                        if(DLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
        else /*Insert Tail*/
        {
            enErrorReg = DLinkedList__enInsertAtTail(pstList, pstNewItem);
        }
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enInsertAndCreatePosition_WithData(DLinkedList_t* pstList,
                                                                   DLinkedListItem_t** pstNewItem,
                                                                   UBase_t uxPosition,
                                                                   void* pvData)
{
    DLinkedListItem_t* pstItem;
    DLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    pstItemTemp = (DLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeList);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = DLinkedList_enERROR_RANGE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Insert Head*/
        {
            enErrorReg = DLinkedList__enInsertAndCreateAtHead_WithData(pstList, pstNewItem, pvData);
        }
        else if(uxPosition < uxSizeList)
        {
            UBase_t uxSizeForward;
            UBase_t uxSizeBackward;
            UBase_t uxSizeOptimum;
            UBase_t uxDirection;

            uxSizeBackward = uxSizeList - uxPosition;
            uxSizeForward = uxPosition;

            if(uxSizeForward > uxSizeBackward)
            {
                uxSizeOptimum = uxSizeBackward;
                uxDirection = 1UL;
            }
            else
            {
                uxSizeOptimum = uxSizeForward;
                uxDirection = 0UL;
            }

            if(0UL == uxDirection) /*Forward*/
            {
                enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum --;
                    while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                        if(DLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DLinkedList__enInsertAndCreateNext_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
            else /*Backward*/
            {
                enErrorReg = DLinkedList__enGetTail(pstList, &pstItem);
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum--;
                    while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                        if(DLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DLinkedList__enInsertAndCreatePrevious_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
        }
        else /*Insert Tail*/
        {
            enErrorReg = DLinkedList__enInsertAndCreateAtTail_WithData(pstList, pstNewItem, pvData);
        }
    }
    return (enErrorReg);
}


DLinkedList_nERROR DLinkedList__enInsertAndCreatePosition(DLinkedList_t* pstList,
                                                          DLinkedListItem_t** pstNewItem,
                                                          UBase_t uxPosition)
{
    DLinkedListItem_t* pstItem;
    DLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    DLinkedList_nERROR enErrorReg;

    pstItem = (DLinkedListItem_t*) 0UL;
    pstItemTemp = (DLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeList);
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = DLinkedList_enERROR_RANGE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Insert Head*/
        {
            enErrorReg = DLinkedList__enInsertAndCreateAtHead(pstList, pstNewItem);
        }
        else if(uxPosition < uxSizeList) /*Insert Tail*/
        {
            UBase_t uxSizeForward;
            UBase_t uxSizeBackward;
            UBase_t uxSizeOptimum;
            UBase_t uxDirection;

            uxSizeBackward = uxSizeList - uxPosition;
            uxSizeForward = uxPosition;

            if(uxSizeForward > uxSizeBackward)
            {
                uxSizeOptimum = uxSizeBackward;
                uxDirection = 1UL;
            }
            else
            {
                uxSizeOptimum = uxSizeForward;
                uxDirection = 0UL;
            }

            if(0UL == uxDirection) /*Forward*/
            {
                enErrorReg = DLinkedList__enGetHead(pstList, &pstItem);
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum --;
                    while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = DLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                        if(DLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DLinkedList__enInsertAndCreateNext(pstList, pstItem, pstNewItem);
                }
            }
            else /*Backward*/
            {
                enErrorReg = DLinkedList__enGetTail(pstList, &pstItem);
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum--;
                    while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                        if(DLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(DLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = DLinkedList__enInsertAndCreatePrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
        else
        {
            enErrorReg = DLinkedList__enInsertAndCreateAtTail(pstList, pstNewItem);
        }
    }
    return (enErrorReg);
}

