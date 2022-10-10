/**
 *
 * @file CDLinkedList_Insert.c
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

/** TODO:
 *  Crear functiones "insert" para poder realizar combinaciones de pvData, uxValue
 *
 */

static CDLinkedList_nERROR CDLinkedList__enInsertGeneric(CDLinkedList_t* pstList,
                                                        CDLinkedListItem_t* pstItem,
                                                        CDLinkedListItem_t* pstNewItem,
                                                        void* pvData,
                                                        UBase_t uxInsert,
                                                        UBase_t uxDataUpdate);

static CDLinkedList_nERROR CDLinkedList__enInsertGeneric(CDLinkedList_t* pstList,
                                                        CDLinkedListItem_t* pstItem,
                                                        CDLinkedListItem_t* pstNewItem,
                                                        void* pvData,
                                                        UBase_t uxInsert,
                                                        UBase_t uxDataUpdate)
{
    CDLinkedListItem_t* pstHeadItem;
    CDLinkedListItem_t* pstTailItem;
    CDLinkedListItem_t* pstItemTemp;
    CDLinkedListItem_t* pstItemNextNode;
    CDLinkedListItem_t* pstItemPreviousNode;
    UBase_t uxSizeReg;
    CDLinkedList_nERROR enErrorReg;

    pstHeadItem = (CDLinkedListItem_t*) 0UL ;
    pstTailItem = (CDLinkedListItem_t*) 0UL ;
    pstItemTemp = (CDLinkedListItem_t*) 0UL ;
    pstItemNextNode = (CDLinkedListItem_t*) 0UL ;
    pstItemPreviousNode = (CDLinkedListItem_t*) 0UL ;
    uxSizeReg = 0U;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItem)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeReg);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == (uintptr_t) pstItem) && (0UL != uxSizeReg))
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(DATA_UPDATE == uxDataUpdate)
        {
            enErrorReg = CDLinkedList_Item__enSetData(pstNewItem, pvData);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList_Item__enSetOwnerList(pstNewItem, (void*) pstList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxSizeReg)
        {
            enErrorReg = CDLinkedList__enSetHead(pstList, pstNewItem);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstItemTemp = pstNewItem;
                enErrorReg = CDLinkedList_Item__enSetNextItem(pstNewItem, pstItemTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList_Item__enSetPreviousItem(pstNewItem, pstItemTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enSetTail(pstList, pstNewItem);
            }
        }
        else
        {
            if(INSERT_NEXT == uxInsert)
            {
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstHeadItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemNextNode);
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enSetNextItem(pstNewItem, pstItemNextNode);
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enSetPreviousItem(pstNewItem, pstItem);
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    if((uintptr_t) pstHeadItem == (uintptr_t) pstItemNextNode)
                    {
                        enErrorReg = CDLinkedList__enSetTail(pstList, pstNewItem);
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enSetPreviousItem(pstItemNextNode, pstNewItem);
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enSetNextItem(pstItem, pstNewItem);
                }
            }
            else
            {
                enErrorReg = CDLinkedList__enGetTail(pstList, &pstTailItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemPreviousNode);
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enSetNextItem(pstNewItem, pstItem );
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enSetPreviousItem(pstNewItem, pstItemPreviousNode);
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    if((uintptr_t) pstTailItem == (uintptr_t) pstItemPreviousNode)
                    {
                        enErrorReg = CDLinkedList__enSetHead(pstList, pstNewItem);
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enSetNextItem(pstItemPreviousNode, pstNewItem);
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList_Item__enSetPreviousItem(pstItem, pstNewItem);
                }
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        uxSizeReg++;
        enErrorReg = CDLinkedList__enSetSize(pstList, uxSizeReg);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertNext_WithData(CDLinkedList_t* pstList,
                                                        CDLinkedListItem_t* pstItem,
                                                        CDLinkedListItem_t* pstNewItem,
                                                        void* pvData)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, pvData, INSERT_NEXT, DATA_UPDATE);
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertNext(CDLinkedList_t* pstList,
                                               CDLinkedListItem_t* pstItem,
                                               CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, (void*) 0UL, INSERT_NEXT, DATA_STATIC);
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreateNext_WithData(CDLinkedList_t* pstList,
                                                                 CDLinkedListItem_t* pstItem,
                                                                 CDLinkedListItem_t** pstNewItemArg,
                                                                 void* pvData)
{
    CDLinkedListItem_t* pstNewItem;
    CDLinkedList_nERROR enErrorReg;

    pstNewItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (CDLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (CDLinkedListItem_t*) malloc(sizeof(CDLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
    }
    if((CDLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreateNext(CDLinkedList_t* pstList,
                                                        CDLinkedListItem_t* pstItem,
                                                        CDLinkedListItem_t** pstNewItemArg)
{
    CDLinkedListItem_t* pstNewItem;
    CDLinkedList_nERROR enErrorReg;

    pstNewItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (CDLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (CDLinkedListItem_t*) malloc(sizeof(CDLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
    }
    if((CDLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertPrevious_WithData(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem,
                                                      void* pvData)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, pvData, INSERT_PREVIOUS, DATA_UPDATE);
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertPrevious(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enErrorReg;
    enErrorReg = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, (void*) 0UL, INSERT_PREVIOUS, DATA_STATIC);
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePrevious_WithData(CDLinkedList_t* pstList,
                                                                     CDLinkedListItem_t* pstItem,
                                                                     CDLinkedListItem_t** pstNewItemArg,
                                                                     void* pvData)
{
    CDLinkedListItem_t* pstNewItem;
    CDLinkedList_nERROR enErrorReg;

    pstNewItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (CDLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (CDLinkedListItem_t*) malloc(sizeof(CDLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertPrevious_WithData(pstList, pstItem, pstNewItem, pvData);
    }
    if((CDLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePrevious(CDLinkedList_t* pstList,
                                                            CDLinkedListItem_t* pstItem,
                                                            CDLinkedListItem_t** pstNewItemArg)
{
    CDLinkedListItem_t* pstNewItem;
    CDLinkedList_nERROR enErrorReg;

    pstNewItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstNewItemArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (CDLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_t));
#elif defined (__GNUC__ )
        pstNewItem = (CDLinkedListItem_t*) malloc(sizeof(CDLinkedListItem_t));
#endif
        if(0UL == (uintptr_t) pstNewItem)
        {
            enErrorReg = CDLinkedList_enERROR_POINTER;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
    }
    if((CDLinkedList_enERROR_OK != enErrorReg) && (0UL != (uintptr_t) pstNewItem))
    {
        free(pstNewItem);
    }
    else
    {
        *pstNewItemArg = pstNewItem;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enInsertPreviousOnLastItemRead_WithData(CDLinkedList_t* pstList,
                                                                         CDLinkedListItem_t* pstNewItem,
                                                                         void* pvData)
{
    CDLinkedListItem_t* pstLastItemItem;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstLastItemItem)
        {
            enErrorReg = CDLinkedList__enInsertAtTail_WithData(pstList,pstNewItem,pvData);
        }
        else
        {
            enErrorReg = CDLinkedList__enInsertPrevious_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
        }
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertPreviousOnLastItemRead(CDLinkedList_t* pstList,
                                                                CDLinkedListItem_t* pstNewItem)
{
    CDLinkedListItem_t* pstLastItemItem;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstLastItemItem)
        {
            enErrorReg = CDLinkedList__enInsertAtTail(pstList,pstNewItem);
        }
        else
        {
            enErrorReg = CDLinkedList__enInsertPrevious(pstList, pstLastItemItem, pstNewItem);
        }
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePreviousOnLastItemRead_WithData(CDLinkedList_t* pstList,
                                                                                   CDLinkedListItem_t** pstNewItem,
                                                                                   void* pvData)
{
    CDLinkedListItem_t* pstLastItemItem;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstLastItemItem)
        {
            enErrorReg = CDLinkedList__enInsertAndCreateAtTail(pstList, pstNewItem);
        }
        else
        {
            enErrorReg = CDLinkedList__enInsertAndCreatePrevious_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
        }
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePreviousOnLastItemRead(CDLinkedList_t* pstList,
                                                                          CDLinkedListItem_t** pstNewItem)
{
    CDLinkedListItem_t* pstLastItemItem;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstLastItemItem)
        {
            enErrorReg = CDLinkedList__enInsertAndCreateAtTail(pstList, pstNewItem);
        }
        else
        {
            enErrorReg = CDLinkedList__enInsertAndCreatePrevious(pstList, pstLastItemItem, pstNewItem);
        }
    }
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enInsertNextOnLastItemRead_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                           void* pvData)
{
    CDLinkedListItem_t* pstLastItemItem;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstLastItemItem)
        {
            enErrorReg = CDLinkedList__enGetHead(pstList, &pstLastItemItem);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertNext_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertNextOnLastItemRead(CDLinkedList_t* pstList,
                                                             CDLinkedListItem_t* pstNewItem)
{
    CDLinkedListItem_t* pstLastItemItem;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstLastItemItem)
        {
            enErrorReg = CDLinkedList__enGetHead(pstList, &pstLastItemItem);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertNext(pstList, pstLastItemItem, pstNewItem);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreateNextOnLastItemRead_WithData(CDLinkedList_t* pstList,
                                                                               CDLinkedListItem_t** pstNewItem,
                                                                               void* pvData)
{
    CDLinkedListItem_t* pstLastItemItem;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstLastItemItem)
        {
            enErrorReg = CDLinkedList__enGetHead(pstList, &pstLastItemItem);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertAndCreateNext_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreateNextOnLastItemRead(CDLinkedList_t* pstList,
                                                                      CDLinkedListItem_t** pstNewItem)
{
    CDLinkedListItem_t* pstLastItemItem;
    CDLinkedList_nERROR enErrorReg;

    pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetLastItemRead(pstList, &pstLastItemItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) pstLastItemItem)
        {
            enErrorReg = CDLinkedList__enGetHead(pstList, &pstLastItemItem);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertAndCreateNext(pstList, pstLastItemItem, pstNewItem);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enInsertAtTail_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                           void* pvData)
{
    CDLinkedListItem_t* pstEndItem;
    CDLinkedList_nERROR enErrorReg;

    pstEndItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetTail(pstList, &pstEndItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enInsertAtTail(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem)
{
    CDLinkedListItem_t* pstEndItem;
    CDLinkedList_nERROR enErrorReg;

    pstEndItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetTail(pstList, &pstEndItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreateAtTail_WithData(CDLinkedList_t* pstList,
                                                                   CDLinkedListItem_t** pstNewItem,
                                                                   void* pvData)
{
    CDLinkedListItem_t* pstEndItem;
    CDLinkedList_nERROR enErrorReg;

    pstEndItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetTail(pstList, &pstEndItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertAndCreateNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreateAtTail(CDLinkedList_t* pstList,
                                                          CDLinkedListItem_t** pstNewItem)
{
    CDLinkedListItem_t* pstEndItem;
    CDLinkedList_nERROR enErrorReg;

    pstEndItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetTail(pstList, &pstEndItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertAndCreateNext(pstList, pstEndItem, pstNewItem);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAtHead_WithData(CDLinkedList_t* pstList,
                                            CDLinkedListItem_t* pstNewItem,
                                            void* pvData)
{
    CDLinkedListItem_t* pstBeginItem;
    CDLinkedList_nERROR enErrorReg;

    pstBeginItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetHead(pstList, &pstBeginItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertPrevious_WithData(pstList, pstBeginItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAtHead(CDLinkedList_t* pstList,
                                            CDLinkedListItem_t* pstNewItem)
{
    CDLinkedListItem_t* pstBeginItem;
    CDLinkedList_nERROR enErrorReg;

    pstBeginItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetHead(pstList, &pstBeginItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertPrevious(pstList, pstBeginItem, pstNewItem);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreateAtHead_WithData(CDLinkedList_t* pstList,
                                                            CDLinkedListItem_t** pstNewItem,
                                                            void* pvData)
{
    CDLinkedListItem_t* pstBeginItem;
    CDLinkedList_nERROR enErrorReg;

    pstBeginItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetHead(pstList, &pstBeginItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertAndCreatePrevious_WithData(pstList, pstBeginItem, pstNewItem, pvData);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertAndCreateAtHead(CDLinkedList_t* pstList,
                                                          CDLinkedListItem_t** pstNewItem)
{
    CDLinkedListItem_t* pstBeginItem;
    CDLinkedList_nERROR enErrorReg;

    pstBeginItem = (CDLinkedListItem_t*) 0UL;
    enErrorReg = CDLinkedList__enGetHead(pstList, &pstBeginItem);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enInsertAndCreatePrevious(pstList, pstBeginItem, pstNewItem);
    }
    return (enErrorReg);
}

CDLinkedList_nERROR  CDLinkedList__enInsertPosition_WithData(CDLinkedList_t* pstList,
                                                        CDLinkedListItem_t* pstNewItem,
                                                        UBase_t uxPosition,
                                                        void* pvData)
{
    CDLinkedListItem_t* pstItem;
    CDLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pstItemTemp = (CDLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = CDLinkedList_enERROR_RANGE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Insert Head*/
        {
            enErrorReg = CDLinkedList__enInsertAtHead_WithData(pstList, pstNewItem, pvData);
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
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum --;
                    while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                        if(CDLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
            else /*Backward*/
            {
                enErrorReg = CDLinkedList__enGetTail(pstList, &pstItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum--;
                    while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                        if(CDLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList__enInsertPrevious_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
        }
        else
        {
            enErrorReg = CDLinkedList__enInsertAtTail_WithData(pstList, pstNewItem, pvData);
        }
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enInsertPosition(CDLinkedList_t* pstList,
                                                   CDLinkedListItem_t* pstNewItem,
                                                    UBase_t uxPosition)
{
    CDLinkedListItem_t* pstItem;
    CDLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pstItemTemp = (CDLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = CDLinkedList_enERROR_RANGE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Insert Head*/
        {
            enErrorReg = CDLinkedList__enInsertAtHead(pstList, pstNewItem);
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
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum --;
                    while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                        if(CDLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
                }
            }
            else /*Backward*/
            {
                enErrorReg = CDLinkedList__enGetTail(pstList, &pstItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum--;
                    while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                        if(CDLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
        else
        {
            enErrorReg = CDLinkedList__enInsertAtTail(pstList, pstNewItem);
        }
    }
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePosition_WithData(CDLinkedList_t* pstList,
                                                              CDLinkedListItem_t** pstNewItem,
                                                              UBase_t uxPosition,
                                                              void* pvData)
{
    CDLinkedListItem_t* pstItem;
    CDLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pstItemTemp = (CDLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = CDLinkedList_enERROR_RANGE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Insert Head*/
        {
            enErrorReg = CDLinkedList__enInsertAndCreateAtHead_WithData(pstList, pstNewItem, pvData);
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

            if(uxDirection == 0UL) /*Forward*/
            {
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum --;
                    while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                        if(CDLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList__enInsertAndCreateNext_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
            else /*Backward*/
            {
                enErrorReg = CDLinkedList__enGetTail(pstList, &pstItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum--;
                    while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                        if(CDLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList__enInsertAndCreatePrevious_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
        }
        else
        {
            enErrorReg = CDLinkedList__enInsertAndCreateAtTail_WithData(pstList, pstNewItem, pvData);
        }
    }
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enInsertAndCreatePosition(CDLinkedList_t* pstList,
                                                            CDLinkedListItem_t** pstNewItem,
                                                            UBase_t uxPosition)
{
    CDLinkedListItem_t* pstItem;
    CDLinkedListItem_t* pstItemTemp;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pstItemTemp = (CDLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition > uxSizeList)
        {
            enErrorReg = CDLinkedList_enERROR_RANGE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition) /*Insert Head*/
        {
            enErrorReg = CDLinkedList__enInsertAndCreateAtHead(pstList, pstNewItem);
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

            if(uxDirection == 0UL) /*Forward*/
            {
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum --;
                    while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = CDLinkedList_Item__enGetNextItem(pstItem, &pstItemTemp);
                        if(CDLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList__enInsertAndCreateNext(pstList, pstItem, pstNewItem);
                }
            }
            else /*Backward*/
            {
                enErrorReg = CDLinkedList__enGetTail(pstList, &pstItem);
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    uxSizeOptimum--;
                    while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                    {
                        enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItem, &pstItemTemp);
                        if(CDLinkedList_enERROR_OK == enErrorReg)
                        {
                            pstItem = pstItemTemp;
                            uxSizeOptimum--;
                        }
                    }
                }
                if(CDLinkedList_enERROR_OK == enErrorReg)
                {
                    enErrorReg = CDLinkedList__enInsertAndCreatePrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
        else
        {
            enErrorReg = CDLinkedList__enInsertAndCreateAtTail(pstList, pstNewItem);
        }
    }
    return (enErrorReg);
}

/**TODO: Replicar CDLinkedList__enInsertInDescendingOrderByValue y CDLinkedList__enInsertInAscendingOrderByValue
 * en los otros tipos de linkedlist
 * */

CDLinkedList_nERROR  CDLinkedList__enInsertInDescendingOrderByValue(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem)
{
    CDLinkedListItem_t* pstItem;
    CDLinkedListItem_t* pstItemAux;
    UBase_t uxNewItemValueReg;
    UBase_t uxItemValueReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pstItemAux = (CDLinkedListItem_t*) 0UL;
    uxNewItemValueReg = 0UL;
    uxItemValueReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxSizeList)
        {
            enErrorReg = CDLinkedList__enInsertAtHead(pstList, pstNewItem);
        }
        else
        {
            enErrorReg = CDLinkedList_Item__enGetValue(pstNewItem, &uxNewItemValueReg);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList_Item__enGetValue(pstItem, &uxItemValueReg);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                uxSizeList--;
                while((0UL != uxSizeList) &&
                      (uxItemValueReg > uxNewItemValueReg) &&
                      (CDLinkedList_enERROR_OK == enErrorReg))
                {
                    pstItemAux = pstItem;
                    enErrorReg = CDLinkedList_Item__enGetNextItem(pstItemAux, &pstItem);
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        enErrorReg = CDLinkedList_Item__enGetValue(pstItem, &uxItemValueReg);
                    }
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        uxSizeList--;
                    }
                }
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                if(uxItemValueReg >= uxNewItemValueReg)
                {
                    enErrorReg = CDLinkedList__enInsertNext(pstList,pstItem, pstNewItem);
                }
                else
                {
                    enErrorReg = CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
    }
    return (enErrorReg);
}


CDLinkedList_nERROR  CDLinkedList__enInsertInAscendingOrderByValue(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem)
{
    CDLinkedListItem_t* pstItem;
    CDLinkedListItem_t* pstItemAux;
    UBase_t uxNewItemValueReg;
    UBase_t uxItemValueReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pstItem = (CDLinkedListItem_t*) 0UL;
    pstItemAux = (CDLinkedListItem_t*) 0UL;
    uxNewItemValueReg = 0UL;
    uxItemValueReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxSizeList)
        {
            enErrorReg = CDLinkedList__enInsertAtHead(pstList, pstNewItem);
        }
        else
        {
            enErrorReg = CDLinkedList_Item__enGetValue(pstNewItem, &uxNewItemValueReg);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItem);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                enErrorReg = CDLinkedList_Item__enGetValue(pstItem, &uxItemValueReg);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                uxSizeList--;
                while((0UL != uxSizeList) &&
                      (uxItemValueReg < uxNewItemValueReg) &&
                      (CDLinkedList_enERROR_OK == enErrorReg))
                {
                    pstItemAux = pstItem;
                    enErrorReg = CDLinkedList_Item__enGetNextItem(pstItemAux, &pstItem);
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        enErrorReg = CDLinkedList_Item__enGetValue(pstItem, &uxItemValueReg);
                    }
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        uxSizeList--;
                    }
                }
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                if(uxItemValueReg <= uxNewItemValueReg)
                {
                    enErrorReg = CDLinkedList__enInsertNext(pstList,pstItem, pstNewItem);
                }
                else
                {
                    enErrorReg = CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
    }
    return (enErrorReg);
}
