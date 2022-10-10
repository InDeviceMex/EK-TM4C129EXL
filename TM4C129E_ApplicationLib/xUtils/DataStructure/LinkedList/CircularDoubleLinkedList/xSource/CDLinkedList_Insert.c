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
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItemTemp = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstItemNextNode = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstItemPreviousNode = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstHeadItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstTailItem = (CDLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0U;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeReg = CDLinkedList__uxGetSize(pstList);
        if(((UBase_t) 0UL != (UBase_t) pstItem) || (0UL == uxSizeReg))
        {
            if((UBase_t) 0UL != (UBase_t) pstNewItem)
            {
                enStatus = CDLinkedList_enERROR_OK;
                if(DATA_UPDATE == uxDataUpdate)
                {
                    CDLinkedList_Item__vSetData(pstNewItem, pvData);
                }
                CDLinkedList_Item__vSetOwnerList(pstNewItem, (void*) pstList);

                if(0UL == uxSizeReg)
                {
                    CDLinkedList__vSetHead(pstList, pstNewItem);
                    pstItemTemp = pstNewItem;
                    CDLinkedList_Item__vSetNextItem(pstNewItem, pstItemTemp );
                    CDLinkedList_Item__vSetPreviousItem(pstNewItem, pstItemTemp );

                    CDLinkedList__vSetTail(pstList, pstNewItem);
                }
                else
                {
                    if(INSERT_NEXT == uxInsert)
                    {
                        pstHeadItem = CDLinkedList__pstGetHead(pstList);
                        pstItemNextNode = CDLinkedList_Item__pstGetNextItem(pstItem);

                        CDLinkedList_Item__vSetNextItem(pstNewItem, pstItemNextNode );
                        CDLinkedList_Item__vSetPreviousItem(pstNewItem, pstItem);
                        if((UBase_t) pstHeadItem == (UBase_t) pstItemNextNode)
                        {
                            CDLinkedList__vSetTail(pstList, pstNewItem);
                        }

                        CDLinkedList_Item__vSetPreviousItem(pstItemNextNode, pstNewItem);
                        CDLinkedList_Item__vSetNextItem(pstItem, pstNewItem);
                    }
                    else
                    {
                        pstTailItem = CDLinkedList__pstGetTail(pstList);
                        pstItemPreviousNode = CDLinkedList_Item__pstGetPreviousItem(pstItem);

                        CDLinkedList_Item__vSetNextItem(pstNewItem, pstItem );
                        CDLinkedList_Item__vSetPreviousItem(pstNewItem, pstItemPreviousNode);

                        if((UBase_t) pstTailItem == (UBase_t) pstItemPreviousNode)
                        {
                            CDLinkedList__vSetHead(pstList, pstNewItem);
                        }

                        CDLinkedList_Item__vSetNextItem(pstItemPreviousNode, pstNewItem);
                        CDLinkedList_Item__vSetPreviousItem(pstItem, pstNewItem);
                    }
                }
                uxSizeReg++;
                CDLinkedList__vSetSize(pstList, uxSizeReg);
            }
        }
    }
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enInsertNext_WithData(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem,
                                                      void* pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, pvData, INSERT_NEXT, DATA_UPDATE);
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enInsertNext(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, (void*) 0UL, INSERT_NEXT, DATA_STATIC);
    return (enStatus);
}

CDLinkedListItem_t* CDLinkedList__pstInsertNext_WithData(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem, void* pvData)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0U;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeReg = CDLinkedList__uxGetSize(pstList);
        if(((UBase_t) 0UL != (UBase_t) pstItem) || (0UL == uxSizeReg))
        {
            #if defined (__TI_ARM__ ) || defined (__MSP430__ )
            pstNewItem = (CDLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_t));
            #elif defined (__GNUC__ )
            pstNewItem = (CDLinkedListItem_t*) malloc(sizeof(CDLinkedListItem_t));
            #endif

            CDLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
        }
    }
    return (pstNewItem);
}

CDLinkedListItem_t* CDLinkedList__pstInsertNext(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0U;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeReg = CDLinkedList__uxGetSize(pstList);
        if(((UBase_t) 0UL != (UBase_t) pstItem) || (0UL == uxSizeReg))
        {
            #if defined (__TI_ARM__ ) || defined (__MSP430__ )
            pstNewItem = (CDLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_t));
            #elif defined (__GNUC__ )
            pstNewItem = (CDLinkedListItem_t*) malloc(sizeof(CDLinkedListItem_t));
            #endif

            CDLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
        }
    }
    return (pstNewItem);
}

CDLinkedList_nERROR CDLinkedList__enInsertPrevious_WithData(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem,
                                                      void* pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, pvData, INSERT_PREVIOUS, DATA_UPDATE);
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enInsertPrevious(CDLinkedList_t* pstList,
                                                      CDLinkedListItem_t* pstItem,
                                                      CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    enStatus = CDLinkedList__enInsertGeneric(pstList, pstItem, pstNewItem, (void*) 0UL, INSERT_PREVIOUS, DATA_STATIC);
    return (enStatus);
}


CDLinkedListItem_t* CDLinkedList__pstInsertPrevious_WithData(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem, void* pvData)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0U;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeReg = CDLinkedList__uxGetSize(pstList);
        if(((UBase_t) 0UL != (UBase_t) pstItem) || (0UL == uxSizeReg))
        {
            #if defined (__TI_ARM__ ) || defined (__MSP430__ )
            pstNewItem = (CDLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_t));
            #elif defined (__GNUC__ )
            pstNewItem = (CDLinkedListItem_t*) malloc(sizeof(CDLinkedListItem_t));
            #endif

            CDLinkedList__enInsertPrevious_WithData(pstList, pstItem, pstNewItem, pvData);
        }
    }
    return (pstNewItem);
}


CDLinkedListItem_t* CDLinkedList__pstInsertPrevious(CDLinkedList_t* pstList, CDLinkedListItem_t* pstItem)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0U;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeReg = CDLinkedList__uxGetSize(pstList);
        if(((UBase_t) 0UL != (UBase_t) pstItem) || (0UL == uxSizeReg))
        {
            #if defined (__TI_ARM__ ) || defined (__MSP430__ )
            pstNewItem = (CDLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CDLinkedListItem_t));
            #elif defined (__GNUC__ )
            pstNewItem = (CDLinkedListItem_t*) malloc(sizeof(CDLinkedListItem_t));
            #endif

            CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
        }
    }
    return (pstNewItem);
}

CDLinkedList_nERROR  CDLinkedList__enInsertPreviousLastItemRead_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                           void* pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CDLinkedList__pstGetLastItemRead(pstList);
        if(0UL == (UBase_t) pstLastItemItem)
        {
            enStatus = CDLinkedList__enInsertAtTail_WithData(pstList,pstNewItem,pvData);
        }
        else
        {
            enStatus = CDLinkedList__enInsertPrevious_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
        }
    }
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enInsertPreviousLastItemRead(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CDLinkedList__pstGetLastItemRead(pstList);
        if(0UL == (UBase_t) pstLastItemItem)
        {
            enStatus = CDLinkedList__enInsertAtTail(pstList,pstNewItem);
        }
        else
        {
            enStatus = CDLinkedList__enInsertPrevious(pstList, pstLastItemItem, pstNewItem);
        }
    }
    return (enStatus);
}

CDLinkedListItem_t*  CDLinkedList__pstInsertPreviousLastItemRead_WithData(CDLinkedList_t* pstList, void* pvData)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CDLinkedList__pstGetLastItemRead(pstList);
        if(0UL == (UBase_t) pstLastItemItem)
        {
            pstLastItemItem = CDLinkedList__pstInsertAtTail(pstList);
        }
        else
        {
            pstNewItem = CDLinkedList__pstInsertPrevious_WithData(pstList, pstLastItemItem, pvData);
        }
    }
    return (pstNewItem);
}

CDLinkedListItem_t*  CDLinkedList__pstInsertPreviousLastItemRead(CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CDLinkedList__pstGetLastItemRead(pstList);
        if(0UL == (UBase_t) pstLastItemItem)
        {
            pstLastItemItem = CDLinkedList__pstInsertAtTail(pstList);
        }
        else
        {
            pstNewItem = CDLinkedList__pstInsertPrevious(pstList, pstLastItemItem);
        }
    }
    return (pstNewItem);
}


CDLinkedList_nERROR  CDLinkedList__enInsertNextLastItemRead_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                           void* pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CDLinkedList__pstGetLastItemRead(pstList);
        if(0UL == (UBase_t) pstLastItemItem)
        {
            pstLastItemItem = CDLinkedList__pstGetHead(pstList);
        }
        enStatus = CDLinkedList__enInsertNext_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enInsertNextLastItemRead(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CDLinkedList__pstGetLastItemRead(pstList);
        if(0UL == (UBase_t) pstLastItemItem)
        {
            pstLastItemItem = CDLinkedList__pstGetHead(pstList);
        }
        enStatus = CDLinkedList__enInsertNext(pstList, pstLastItemItem, pstNewItem);
    }
    return (enStatus);
}

CDLinkedListItem_t*  CDLinkedList__pstInsertNextLastItemRead_WithData(CDLinkedList_t* pstList, void* pvData)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CDLinkedList__pstGetLastItemRead(pstList);
        if(0UL == (UBase_t) pstLastItemItem)
        {
            pstLastItemItem = CDLinkedList__pstGetHead(pstList);
        }
        pstNewItem = CDLinkedList__pstInsertNext_WithData(pstList, pstLastItemItem, pvData);
    }
    return (pstNewItem);
}

CDLinkedListItem_t*  CDLinkedList__pstInsertNextLastItemRead(CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstLastItemItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CDLinkedList__pstGetLastItemRead(pstList);
        if(0UL == (UBase_t) pstLastItemItem)
        {
            pstLastItemItem = CDLinkedList__pstGetHead(pstList);
        }
        pstNewItem = CDLinkedList__pstInsertNext(pstList, pstLastItemItem);
    }
    return (pstNewItem);
}

CDLinkedList_nERROR  CDLinkedList__enInsertAtTail_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                           void* pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstEndItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enInsertAtTail(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstEndItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        enStatus = CDLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enStatus);
}

CDLinkedListItem_t*  CDLinkedList__pstInsertAtTail_WithData(CDLinkedList_t* pstList, void* pvData)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstEndItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        pstNewItem = CDLinkedList__pstInsertNext_WithData(pstList, pstEndItem, pvData);
    }
    return (pstNewItem);
}

CDLinkedListItem_t*  CDLinkedList__pstInsertAtTail(CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstEndItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CDLinkedList__pstGetTail(pstList);
        pstNewItem = CDLinkedList__pstInsertNext(pstList, pstEndItem);
    }
    return (pstNewItem);
}

CDLinkedList_nERROR CDLinkedList__enInsertAtHead_WithData(CDLinkedList_t* pstList,
                                            CDLinkedListItem_t* pstNewItem,
                                            void* pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstBeginItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enInsertPrevious_WithData(pstList, pstBeginItem, pstNewItem, pvData);
    }
    return (enStatus);
}

CDLinkedList_nERROR CDLinkedList__enInsertAtHead(CDLinkedList_t* pstList,
                                            CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstBeginItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        enStatus = CDLinkedList__enInsertPrevious(pstList, pstBeginItem, pstNewItem);
    }
    return (enStatus);
}

CDLinkedListItem_t*  CDLinkedList__pstInsertAtHead_WithData(CDLinkedList_t* pstList, void* pvData)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstBeginItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        pstNewItem = CDLinkedList__pstInsertPrevious_WithData(pstList, pstBeginItem, pvData);
    }
    return (pstNewItem);
}

CDLinkedListItem_t*  CDLinkedList__pstInsertAtHead(CDLinkedList_t* pstList)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstBeginItem = (CDLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstBeginItem = CDLinkedList__pstGetHead(pstList);
        pstNewItem = CDLinkedList__pstInsertPrevious(pstList, pstBeginItem);
    }
    return (pstNewItem);
}

CDLinkedList_nERROR  CDLinkedList__enInsertPos_WithData(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition,
                                            void* pvData)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(uxPosition <= uxSizeList)
        {
            if(0UL == uxPosition) /*Insert Head*/
            {
                enStatus = CDLinkedList__enInsertAtHead_WithData(pstList, pstNewItem, pvData);
            }
            else if(uxPosition == uxSizeList) /*Insert Tail*/
            {
                enStatus = CDLinkedList__enInsertAtTail_WithData(pstList, pstNewItem, pvData);
            }
            else
            {
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
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    uxSizeOptimum --;
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = CDLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    uxSizeOptimum--;
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = CDLinkedList__enInsertPrevious_WithData(pstList, pstItem, pstNewItem, pvData);
                }
            }
        }
    }
    return (enStatus);
}

CDLinkedList_nERROR  CDLinkedList__enInsertPos(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(uxPosition <= uxSizeList)
        {
            if(0UL == uxPosition) /*Insert Head*/
            {
                enStatus = CDLinkedList__enInsertAtHead(pstList, pstNewItem);
            }
            else if(uxPosition == uxSizeList) /*Insert Tail*/
            {
                enStatus = CDLinkedList__enInsertAtTail(pstList, pstNewItem);
            }
            else
            {
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
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    uxSizeOptimum --;
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = CDLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    uxSizeOptimum--;
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                    enStatus = CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
                }
            }
        }
    }
    return (enStatus);
}


CDLinkedListItem_t*  CDLinkedList__pstInsertPos_WithData(CDLinkedList_t* pstList, UBase_t uxPosition, void* pvData)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(uxPosition <= uxSizeList)
        {
            if(0UL == uxPosition) /*Insert Head*/
            {
                pstNewItem = CDLinkedList__pstInsertAtHead_WithData(pstList, pvData);
            }
            else if(uxPosition == uxSizeList) /*Insert Tail*/
            {
                pstNewItem = CDLinkedList__pstInsertAtTail_WithData(pstList, pvData);
            }
            else
            {
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
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    uxSizeOptimum --;
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                    pstNewItem = CDLinkedList__pstInsertNext_WithData(pstList, pstItem, pvData);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    uxSizeOptimum--;
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                    pstNewItem = CDLinkedList__pstInsertPrevious_WithData(pstList, pstItem, pvData);
                }
            }
        }
    }
    return (pstNewItem);
}


CDLinkedListItem_t*  CDLinkedList__pstInsertPos(CDLinkedList_t* pstList, UBase_t uxPosition)
{
    CDLinkedListItem_t* pstNewItem = (CDLinkedListItem_t*) 0UL ;
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(uxPosition <= uxSizeList)
        {
            if(0UL == uxPosition) /*Insert Head*/
            {
                pstNewItem = CDLinkedList__pstInsertAtHead(pstList);
            }
            else if(uxPosition == uxSizeList) /*Insert Tail*/
            {
                pstNewItem = CDLinkedList__pstInsertAtTail(pstList);
            }
            else
            {
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
                    pstItem = CDLinkedList__pstGetHead(pstList);
                    uxSizeOptimum --;
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                    pstNewItem = CDLinkedList__pstInsertNext(pstList, pstItem);
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    uxSizeOptimum--;
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                    pstNewItem = CDLinkedList__pstInsertPrevious(pstList, pstItem);
                }
            }
        }
    }
    return (pstNewItem);
}

/**TODO: Replicar CDLinkedList__enInsertInDescendingOrderByValue y CDLinkedList__enInsertInAscendingOrderByValue
 * en los otros tipos de linkedlist
 * */

CDLinkedList_nERROR  CDLinkedList__enInsertInDescendingOrderByValue(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t* pstItemAux = (CDLinkedListItem_t*) 0UL;
    UBase_t uxNewItemValueReg = 0UL;
    UBase_t uxItemValueReg = 0UL;
    UBase_t uxSizeList = 0UL;
    if(( 0UL != (UBase_t) pstList) && ( 0UL != (UBase_t) pstNewItem))
    {

        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(0UL == uxSizeList)
        {
            enStatus =  CDLinkedList__enInsertAtHead(pstList, pstNewItem);
        }
        else
        {
            uxNewItemValueReg = CDLinkedList_Item__uxGetValue(pstNewItem);

            pstItem = CDLinkedList__pstGetHead(pstList);
            uxItemValueReg = CDLinkedList_Item__uxGetValue(pstItem);
            uxSizeList--;
            while((0UL != uxSizeList) && (uxItemValueReg > uxNewItemValueReg))
            {
                pstItemAux = pstItem;
                pstItem = CDLinkedList_Item__pstGetNextItem(pstItemAux);
                uxItemValueReg = CDLinkedList_Item__uxGetValue(pstItem);
                uxSizeList--;
            }
            if(uxItemValueReg >= uxNewItemValueReg)
            {
                enStatus = CDLinkedList__enInsertNext(pstList,pstItem, pstNewItem);
            }
            else
            {
                enStatus = CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
            }
        }
    }
    return (enStatus);
}


CDLinkedList_nERROR  CDLinkedList__enInsertInAscendingOrderByValue(CDLinkedList_t* pstList,
                                           CDLinkedListItem_t* pstNewItem)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t* pstItemAux = (CDLinkedListItem_t*) 0UL;
    UBase_t uxNewItemValueReg = 0UL;
    UBase_t uxItemValueReg = 0UL;
    UBase_t uxSizeList = 0UL;
    if(( 0UL != (UBase_t) pstList) && ( 0UL != (UBase_t) pstNewItem))
    {

        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(0UL == uxSizeList)
        {
            enStatus =  CDLinkedList__enInsertAtHead(pstList, pstNewItem);
        }
        else
        {
            uxNewItemValueReg = CDLinkedList_Item__uxGetValue(pstNewItem);

            pstItem = CDLinkedList__pstGetHead(pstList);
            uxItemValueReg = CDLinkedList_Item__uxGetValue(pstItem);
            uxSizeList--;
            while((0UL != uxSizeList) && (uxItemValueReg < uxNewItemValueReg))
            {
                pstItemAux = pstItem;
                pstItem = CDLinkedList_Item__pstGetNextItem(pstItemAux);
                uxItemValueReg = CDLinkedList_Item__uxGetValue(pstItem);
                uxSizeList--;
            }
            if(uxItemValueReg <= uxNewItemValueReg)
            {
                enStatus = CDLinkedList__enInsertNext(pstList,pstItem, pstNewItem);
            }
            else
            {
                enStatus = CDLinkedList__enInsertPrevious(pstList, pstItem, pstNewItem);
            }
        }
    }
    return (enStatus);
}
