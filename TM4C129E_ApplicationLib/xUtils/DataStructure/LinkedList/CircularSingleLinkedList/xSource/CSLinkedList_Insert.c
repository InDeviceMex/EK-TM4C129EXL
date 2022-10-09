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

static CSLinkedList_nERROR CSLinkedList__enInsertNextGeneric(CSLinkedList_t* pstList,
                                             CSLinkedListItem_t* pstPreviousItem,
                                             CSLinkedListItem_t* pstNewItem,
                                             void* pvData,
                                             UBase_t uxDataUpdate);

static CSLinkedList_nERROR CSLinkedList__enInsertNextGeneric(CSLinkedList_t* pstList,
                                             CSLinkedListItem_t* pstPreviousItem,
                                             CSLinkedListItem_t* pstNewItem,
                                             void* pvData,
                                             UBase_t uxDataUpdate)
{
    CSLinkedList_nERROR enStatusReturn = CSLinkedList_enERROR_UNDEF;
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstNextItemReg = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstNewItem1 = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstListHeadItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstListTailItem = (CSLinkedListItem_t*) 0UL ;
    UBase_t uxSizeReg = 0U;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        if((UBase_t) 0UL != (UBase_t) pstNewItem)
        {
            enStatusReturn = CSLinkedList_enERROR_OK;
            if(DATA_UPDATE == uxDataUpdate)
            {
                CSLinkedList_Item__vSetData(pstNewItem, pvData);
            }
            CSLinkedList_Item__vSetOwnerList(pstNewItem, (void*) pstList);

            uxSizeReg = CSLinkedList__uxGetSize(pstList);
            if(0UL == uxSizeReg) /*Empty List*/
            {
                pstNewItem1 = pstNewItem;
                CSLinkedList_Item__vSetNextItem(pstNewItem, pstNewItem1);
                CSLinkedList__vSetHead(pstList, pstNewItem);
                CSLinkedList__vSetTail(pstList, pstNewItem);
            }
            else if((UBase_t) 0UL == (UBase_t) pstPreviousItem) /*Insert to head*/
            {
                pstListTailItem = CSLinkedList__pstGetTail(pstList);
                pstListHeadItem = CSLinkedList__pstGetHead(pstList);
                CSLinkedList_Item__vSetNextItem(pstNewItem, pstListHeadItem);
                CSLinkedList_Item__vSetNextItem(pstListTailItem, pstNewItem);
                CSLinkedList__vSetHead(pstList, pstNewItem);
            }
            else /*Insert beetween nodes*/
            {
                enStatus = CSLinkedList__enIsTail(pstList, pstPreviousItem);
                if((UBase_t) CSLinkedList_enERROR_OK == (UBase_t) enStatus)
                {
                    CSLinkedList__vSetTail(pstList, pstNewItem);
                }
                pstNextItemReg = CSLinkedList_Item__pstGetNextItem(pstPreviousItem);
                CSLinkedList_Item__vSetNextItem(pstNewItem, pstNextItemReg);
                CSLinkedList_Item__vSetNextItem(pstPreviousItem, pstNewItem);
            }
            uxSizeReg++;
            CSLinkedList__vSetSize(pstList, uxSizeReg);
        }
    }
    return(enStatusReturn);
}

CSLinkedList_nERROR CSLinkedList__enInsertNext_WithData(CSLinkedList_t* pstList,
                                            CSLinkedListItem_t* pstItem,
                                            CSLinkedListItem_t* pstNewItem,
                                            void* pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enInsertNextGeneric(pstList, pstItem, pstNewItem, pvData, DATA_UPDATE);
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enInsertNext(CSLinkedList_t* pstList,
                                            CSLinkedListItem_t* pstItem,
                                            CSLinkedListItem_t* pstNewItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    enStatus = CSLinkedList__enInsertNextGeneric(pstList, pstItem, pstNewItem, (void*) 0UL, DATA_STATIC);
    return (enStatus);
}



CSLinkedListItem_t* CSLinkedList__pstInsertNext_WithData(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem, void* pvData)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        #if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (CSLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListItem_t));
        #elif defined (__GNUC__ )
        pstNewItem = (CSLinkedListItem_t*) malloc(sizeof(CSLinkedListItem_t));
        #endif
        CSLinkedList__enInsertNext_WithData(pstList, pstItem,  pstNewItem, pvData);
    }
    return (pstNewItem);
}

CSLinkedListItem_t* CSLinkedList__pstInsertNext(CSLinkedList_t* pstList, CSLinkedListItem_t* pstItem)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        #if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewItem = (CSLinkedListItem_t*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListItem_t));
        #elif defined (__GNUC__ )
        pstNewItem = (CSLinkedListItem_t*) malloc(sizeof(CSLinkedListItem_t));
        #endif
        CSLinkedList__enInsertNext(pstList, pstItem,  pstNewItem);
    }
    return (pstNewItem);
}


CSLinkedList_nERROR  CSLinkedList__enInsertNextLastItemRead_WithData(CSLinkedList_t* pstList,
                                           CSLinkedListItem_t* pstNewItem,
                                           void* pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstLastItemItem = (CSLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CSLinkedList__pstGetLastItemRead(pstList);
        enStatus = CSLinkedList__enInsertNext_WithData(pstList, pstLastItemItem, pstNewItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nERROR  CSLinkedList__enInsertNextLastItemRead(CSLinkedList_t* pstList,
                                           CSLinkedListItem_t* pstNewItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstLastItemItem = (CSLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CSLinkedList__pstGetLastItemRead(pstList);
        enStatus = CSLinkedList__enInsertNext(pstList, pstLastItemItem, pstNewItem);
    }
    return (enStatus);
}

CSLinkedListItem_t*  CSLinkedList__pstInsertNextLastItemRead_WithData(CSLinkedList_t* pstList, void* pvData)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstLastItemItem = (CSLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CSLinkedList__pstGetLastItemRead(pstList);
        pstNewItem = CSLinkedList__pstInsertNext_WithData(pstList, pstLastItemItem, pvData);
    }
    return (pstNewItem);
}

CSLinkedListItem_t*  CSLinkedList__pstInsertNextLastItemRead(CSLinkedList_t* pstList)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstLastItemItem = (CSLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstLastItemItem = CSLinkedList__pstGetLastItemRead(pstList);
        pstNewItem = CSLinkedList__pstInsertNext(pstList, pstLastItemItem);
    }
    return (pstNewItem);
}

CSLinkedList_nERROR CSLinkedList__enInsertAtTail_WithData(CSLinkedList_t* pstList,
                                           CSLinkedListItem_t* pstNewItem,
                                            void* pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstEndItem = (CSLinkedListItem_t*) 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CSLinkedList__pstGetTail(pstList);
        enStatus = CSLinkedList__enInsertNext_WithData(pstList, pstEndItem, pstNewItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enInsertAtTail(CSLinkedList_t* pstList,
                                           CSLinkedListItem_t* pstNewItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstEndItem = (CSLinkedListItem_t*) 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CSLinkedList__pstGetTail(pstList);
        enStatus = CSLinkedList__enInsertNext(pstList, pstEndItem, pstNewItem);
    }
    return (enStatus);
}


CSLinkedListItem_t*  CSLinkedList__pstInsertAtTail_WithData(CSLinkedList_t* pstList, void* pvData)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstEndItem = (CSLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CSLinkedList__pstGetTail(pstList);
        pstNewItem = CSLinkedList__pstInsertNext_WithData(pstList, pstEndItem, pvData);
    }
    return (pstNewItem);
}

CSLinkedListItem_t*  CSLinkedList__pstInsertAtTail(CSLinkedList_t* pstList)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstEndItem = (CSLinkedListItem_t*) 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstEndItem = CSLinkedList__pstGetTail(pstList);
        pstNewItem = CSLinkedList__pstInsertNext(pstList, pstEndItem);
    }
    return (pstNewItem);
}

CSLinkedList_nERROR CSLinkedList__enInsertAtHead_WithData(CSLinkedList_t* pstList,
                                                CSLinkedListItem_t* pstNewItem,
                                                void* pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;

    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        enStatus = CSLinkedList__enInsertNext_WithData(pstList, (CSLinkedListItem_t*) 0UL, pstNewItem, pvData);
    }
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enInsertAtHead(CSLinkedList_t* pstList,
                                                CSLinkedListItem_t* pstNewItem)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;

    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        enStatus = CSLinkedList__enInsertNext(pstList, (CSLinkedListItem_t*) 0UL, pstNewItem);
    }
    return (enStatus);
}

CSLinkedListItem_t*  CSLinkedList__pstInsertAtHead_WithData(CSLinkedList_t* pstList, void* pvData)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstNewItem = CSLinkedList__pstInsertNext_WithData(pstList, (CSLinkedListItem_t*) 0UL, pvData);
    }
    return (pstNewItem);
}

CSLinkedListItem_t*  CSLinkedList__pstInsertAtHead(CSLinkedList_t* pstList)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        pstNewItem = CSLinkedList__pstInsertNext(pstList, (CSLinkedListItem_t*) 0UL);
    }
    return (pstNewItem);
}

CSLinkedList_nERROR CSLinkedList__enInsertPos_WithData(CSLinkedList_t* pstList,
                                            CSLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition,
                                            void* pvData)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstItem = (CSLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        if(uxPosition <= uxSizeList)
        {
            if(0UL == uxPosition)
            {
                enStatus = CSLinkedList__enInsertAtHead_WithData(pstList, pstNewItem, pvData);
            }
            else if((uxSizeList) == uxPosition)
            {
                enStatus = CSLinkedList__enInsertAtTail_WithData(pstList, pstNewItem, pvData);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                uxPosition--;
                while(0UL != uxPosition)
                {
                    pstItem = CSLinkedList_Item__pstGetNextItem(pstItem);
                    uxPosition--;
                }
                enStatus = CSLinkedList__enInsertNext_WithData(pstList, pstItem, pstNewItem, pvData);
            }
        }
    }
    return (enStatus);
}

CSLinkedList_nERROR CSLinkedList__enInsertPos(CSLinkedList_t* pstList,
                                            CSLinkedListItem_t* pstNewItem,
                                            UBase_t uxPosition)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    CSLinkedListItem_t* pstItem = (CSLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        if(uxPosition <= uxSizeList)
        {
            if(0UL == uxPosition)
            {
                enStatus = CSLinkedList__enInsertAtHead(pstList, pstNewItem);
            }
            else if((uxSizeList) == uxPosition)
            {
                enStatus = CSLinkedList__enInsertAtTail(pstList, pstNewItem);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                uxPosition--;
                while(0UL != uxPosition)
                {
                    pstItem = CSLinkedList_Item__pstGetNextItem(pstItem);
                    uxPosition--;
                }
                enStatus = CSLinkedList__enInsertNext(pstList, pstItem, pstNewItem);
            }
        }
    }
    return (enStatus);
}

CSLinkedListItem_t*  CSLinkedList__pstInsertPos_WithData(CSLinkedList_t* pstList, UBase_t uxPosition, void* pvData)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstItem = (CSLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        if(uxPosition <= uxSizeList)
        {
            if(0UL == uxPosition)
            {
                pstNewItem = CSLinkedList__pstInsertAtHead_WithData(pstList, pvData);
            }
            else if (uxPosition == uxSizeList)
            {
                pstNewItem = CSLinkedList__pstInsertAtTail_WithData(pstList, pvData);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                uxPosition--;
                while(0UL != uxPosition)
                {
                    pstItem = CSLinkedList_Item__pstGetNextItem(pstItem);
                    uxPosition--;
                }
                pstNewItem = CSLinkedList__pstInsertNext_WithData(pstList, pstItem, pvData);
            }
        }
    }
    return (pstNewItem);
}

CSLinkedListItem_t*  CSLinkedList__pstInsertPos(CSLinkedList_t* pstList, UBase_t uxPosition)
{
    CSLinkedListItem_t* pstNewItem = (CSLinkedListItem_t*) 0UL ;
    CSLinkedListItem_t* pstItem = (CSLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if(((UBase_t) 0UL != (UBase_t) pstList))
    {
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        if(uxPosition <= uxSizeList)
        {
            if(0UL == uxPosition)
            {
                pstNewItem = CSLinkedList__pstInsertAtHead(pstList);
            }
            else if (uxPosition == uxSizeList)
            {
                pstNewItem = CSLinkedList__pstInsertAtTail(pstList);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                uxPosition--;
                while(0UL != uxPosition)
                {
                    pstItem = CSLinkedList_Item__pstGetNextItem(pstItem);
                    uxPosition--;
                }
                pstNewItem = CSLinkedList__pstInsertNext(pstList, pstItem);
            }
        }
    }
    return (pstNewItem);
}
