/**
 *
 * @file CDLinkedList_Item.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Item.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/CDLinkedList_Intrinsics.h>

CDLinkedList_nERROR  CDLinkedList__enGetItemPosition(const CDLinkedList_t* pstList, UBase_t uxPosition, CDLinkedListItem_t** pstItemArg)
{
    CDLinkedListItem_t* pstItemTemp;
    CDLinkedListItem_t* pstItemReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pstItemTemp = (CDLinkedListItem_t*) 0UL;
    pstItemReg = (CDLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstItemArg)
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition >= uxSizeList)
        {
            enErrorReg = CDLinkedList_enERROR_RANGE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition)
        {
            enErrorReg = CDLinkedList__enGetHead(pstList, &pstItemReg);
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
                enErrorReg = CDLinkedList__enGetHead(pstList, &pstItemReg);
                while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = CDLinkedList_Item__enGetNextItem(pstItemReg, &pstItemTemp);
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItemReg = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
            else /*Backward*/
            {
                enErrorReg = CDLinkedList__enGetTail(pstList, &pstItemReg);
                while((0UL != uxSizeOptimum) && (CDLinkedList_enERROR_OK == enErrorReg))
                {
                    enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstItemReg, &pstItemTemp);
                    if(CDLinkedList_enERROR_OK == enErrorReg)
                    {
                        pstItemReg = pstItemTemp;
                        uxSizeOptimum--;
                    }
                }
            }
        }
        else
        {
            CDLinkedList__enGetTail(pstList, &pstItemReg);
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *pstItemArg = pstItemReg;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetAllItem(const CDLinkedList_t* pstList, const void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    CDLinkedListItem_t *pstMemberTemp;
    CDLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    pstMember = (CDLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetHead(pstList, &pstMember);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != uxMaxLength) &&
              (uxSizeReg != uxSizeList) &&
              (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                enErrorReg = CDLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetAllItem_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    CDLinkedListItem_t *pstMemberTemp;
    CDLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    puxValueItemMember = (UBase_t)0UL;
    pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    pstMember = (CDLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetHead(pstList, &pstMember);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != uxMaxLength) &&
              (uxSizeReg != uxSizeList) &&
              (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                enErrorReg = CDLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetAllItemBackward(const CDLinkedList_t* pstList, const void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    CDLinkedListItem_t *pstMemberTemp;
    CDLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    pstMember = (CDLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetTail(pstList, &pstMember);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != uxMaxLength) &&
              (uxSizeReg != uxSizeList) &&
              (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstMember, &pstMemberTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetAllItemBackward_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    CDLinkedListItem_t *pstMemberTemp;
    CDLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    puxValueItemMember = (UBase_t)0UL;
    pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    pstMember = (CDLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetTail(pstList, &pstMember);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != uxMaxLength) &&
              (uxSizeReg != uxSizeList) &&
              (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstMember, &pstMemberTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}



CDLinkedList_nERROR CDLinkedList__enGetNItem(const CDLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    CDLinkedListItem_t *pstMemberTemp;
    CDLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    pstMember = (CDLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetHead(pstList, &pstMember);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (uxSizeReg != uxSizeList) &&
              (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                uxItems--;
                enErrorReg = CDLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}


CDLinkedList_nERROR CDLinkedList__enGetNItem_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    CDLinkedListItem_t *pstMemberTemp;
    CDLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    puxValueItemMember = (UBase_t)0UL;
    pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    pstMember = (CDLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetHead(pstList, &pstMember);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (uxSizeReg != uxSizeList) &&
              (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                uxItems--;
                enErrorReg = CDLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}



CDLinkedList_nERROR CDLinkedList__enGetNItemBackward(const CDLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    CDLinkedListItem_t *pstMemberTemp;
    CDLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    pstMember = (CDLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetTail(pstList, &pstMember);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (uxSizeReg != uxSizeList) &&
              (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                uxItems--;
                enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstMember, &pstMemberTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

CDLinkedList_nERROR CDLinkedList__enGetNItemBackward_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    CDLinkedListItem_t *pstMemberTemp;
    CDLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    UBase_t uxSizeList;
    CDLinkedList_nERROR enErrorReg;

    puxValueItemMember = (UBase_t)0UL;
    pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    pstMember = (CDLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    uxSizeList = 0UL;
    enErrorReg = CDLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = CDLinkedList_enERROR_POINTER;
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = CDLinkedList_enERROR_VALUE;
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetTail(pstList, &pstMember);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = CDLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (uxSizeReg != uxSizeList) &&
              (CDLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = CDLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                uxItems--;
                enErrorReg = CDLinkedList_Item__enGetPreviousItem(pstMember, &pstMemberTemp);
            }
            if(CDLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(CDLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

