/**
 *
 * @file DLinkedList_Item.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Item.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/DLinkedList_Intrinsics.h>

DLinkedList_nERROR  DLinkedList__enGetItemPosition(const DLinkedList_t* pstList, UBase_t uxPosition, DLinkedListItem_t** pstItemArg)
{
    DLinkedListItem_t* pstItemTemp;
    DLinkedListItem_t* pstItemReg;
    UBase_t uxSizeList;
    DLinkedList_nERROR enErrorReg;

    pstItemTemp = (DLinkedListItem_t*) 0UL;
    pstItemReg = (DLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstItemArg)
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition >= uxSizeList)
        {
            enErrorReg = DLinkedList_enERROR_RANGE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition)
        {
            enErrorReg = DLinkedList__enGetHead(pstList, &pstItemReg);
        }
        else if(uxPosition < (uxSizeList - 1UL))
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
                enErrorReg = DLinkedList__enGetHead(pstList, &pstItemReg);
                while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = DLinkedList_Item__enGetNextItem(pstItemReg, &pstItemTemp);
                    if(DLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItemReg = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            else /*Backward*/
            {
                enErrorReg = DLinkedList__enGetTail(pstList, &pstItemReg);
                while((0UL != uxSizeOptimum) && (DLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = DLinkedList_Item__enGetPreviousItem(pstItemReg, &pstItemTemp);
                    if(DLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItemReg = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
        }
        else
        {
            enErrorReg = DLinkedList__enGetTail(pstList, &pstItemReg);
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *pstItemArg = pstItemReg;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetAllItem(const DLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    DLinkedListItem_t *pstMemberTemp;
    DLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (DLinkedListItem_t*) 0UL;
    pstMember = (DLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetHead(pstList, &pstMember);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                enErrorReg = DLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetAllItem_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    DLinkedListItem_t *pstMemberTemp;
    DLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    puxValueItemMember = 0UL;
    pstMemberTemp = (DLinkedListItem_t*) 0UL;
    pstMember = (DLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetHead(pstList, &pstMember);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                enErrorReg = DLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}


DLinkedList_nERROR DLinkedList__enGetAllItemBackward(const DLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    DLinkedListItem_t *pstMemberTemp;
    DLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (DLinkedListItem_t*) 0UL;
    pstMember = (DLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetTail(pstList, &pstMember);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                enErrorReg = DLinkedList_Item__enGetPreviousItem(pstMember, &pstMemberTemp);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetAllItemBackward_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    DLinkedListItem_t *pstMemberTemp;
    DLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    puxValueItemMember = 0UL;
    pstMemberTemp = (DLinkedListItem_t*) 0UL;
    pstMember = (DLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetTail(pstList, &pstMember);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                enErrorReg = DLinkedList_Item__enGetPreviousItem(pstMember, &pstMemberTemp);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetNItem(const DLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    DLinkedListItem_t *pstMemberTemp;
    DLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (DLinkedListItem_t*) 0UL;
    pstMember = (DLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetHead(pstList, &pstMember);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                uxItems--;
                DLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetNItem_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    DLinkedListItem_t *pstMemberTemp;
    DLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    puxValueItemMember = 0UL;
    pstMemberTemp = (DLinkedListItem_t*) 0UL;
    pstMember = (DLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetHead(pstList, &pstMember);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                uxItems--;
                enErrorReg = DLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetNItemBackward(const DLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    DLinkedListItem_t *pstMemberTemp;
    DLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (DLinkedListItem_t*) 0UL;
    pstMember = (DLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetTail(pstList, &pstMember);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                uxItems--;
                DLinkedList_Item__enGetPreviousItem(pstMember, &pstMemberTemp);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

DLinkedList_nERROR DLinkedList__enGetNItemBackward_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    DLinkedListItem_t *pstMemberTemp;
    DLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    DLinkedList_nERROR enErrorReg;

    puxValueItemMember = 0UL;
    pstMemberTemp = (DLinkedListItem_t*) 0UL;
    pstMember = (DLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = DLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = DLinkedList_enERROR_POINTER;
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = DLinkedList_enERROR_VALUE;
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = DLinkedList__enGetTail(pstList, &pstMember);
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (DLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = DLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                uxItems--;
                enErrorReg = DLinkedList_Item__enGetPreviousItem(pstMember, &pstMemberTemp);
            }
            if(DLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(DLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

