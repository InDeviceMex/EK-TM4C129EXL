/**
 *
 * @file SLinkedList_Item.c
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Item.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/SLinkedList_Intrinsics.h>

SLinkedList_nERROR  SLinkedList__enGetItemPosition(const SLinkedList_t* pstList, UBase_t uxPosition, SLinkedListItem_t** pstItemArg)
{
    SLinkedListItem_t* pstItemTemp;
    SLinkedListItem_t* pstItemReg;
    UBase_t uxSizeList;
    SLinkedList_nERROR enErrorReg;

    pstItemTemp = (SLinkedListItem_t*) 0UL;
    pstItemReg = (SLinkedListItem_t*) 0UL;
    uxSizeList = 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if(0UL == (uintptr_t) pstItemArg)
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetSize(pstList, &uxSizeList);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(uxPosition >= uxSizeList)
        {
            enErrorReg = SLinkedList_enERROR_RANGE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxPosition)
        {
            enErrorReg = SLinkedList__enGetHead(pstList, &pstItemReg);
        }
        else if(uxPosition < (uxSizeList - 1UL))
        {
            enErrorReg = SLinkedList__enGetHead(pstList, &pstItemReg);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
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
        }
        else
        {
            enErrorReg = SLinkedList__enGetTail(pstList, &pstItemReg);
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *pstItemArg = pstItemReg;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enGetAllItem(const SLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    SLinkedListItem_t *pstMemberTemp;
    SLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    SLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (SLinkedListItem_t*) 0UL;
    pstMember = (SLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = SLinkedList_enERROR_VALUE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetHead(pstList, &pstMember);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) && (0UL != uxMaxLength) && (SLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = SLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                enErrorReg = SLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enGetNItem(const SLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    SLinkedListItem_t *pstMemberTemp;
    SLinkedListItem_t *pstMember;
    void* pvDataMember;
    UBase_t uxSizeReg;
    SLinkedList_nERROR enErrorReg;

    pvDataMember = (void*)0UL;
    pstMemberTemp = (SLinkedListItem_t*) 0UL;
    pstMember = (SLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) pvData)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = SLinkedList_enERROR_VALUE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetHead(pstList, &pstMember);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (SLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = SLinkedList_Item__enGetData(pstMember, &pvDataMember);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                *pvData = pvDataMember;
                uxSizeReg++;
                pvData += 1U;
                uxMaxLength--;
                uxItems--;
                enErrorReg = SLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}



SLinkedList_nERROR SLinkedList__enGetAllItem_Value(const SLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    SLinkedListItem_t *pstMemberTemp;
    SLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    SLinkedList_nERROR enErrorReg;

    puxValueItemMember = 0UL;
    pstMemberTemp = (SLinkedListItem_t*) 0UL;
    pstMember = (SLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if(0UL == uxMaxLength)
        {
            enErrorReg = SLinkedList_enERROR_VALUE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetHead(pstList, &pstMember);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (SLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = SLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                enErrorReg = SLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

SLinkedList_nERROR SLinkedList__enGetNItem_Value(const SLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength, UBase_t* uxSizeArg)
{
    SLinkedListItem_t *pstMemberTemp;
    SLinkedListItem_t *pstMember;
    UBase_t puxValueItemMember;
    UBase_t uxSizeReg;
    SLinkedList_nERROR enErrorReg;

    puxValueItemMember = 0UL;
    pstMemberTemp = (SLinkedListItem_t*) 0UL;
    pstMember = (SLinkedListItem_t*) 0UL;
    uxSizeReg = 0UL;
    enErrorReg = SLinkedList_enERROR_OK;
    if((0UL == (uintptr_t) puxValueItem)|| (0UL == (uintptr_t) uxSizeArg))
    {
        enErrorReg = SLinkedList_enERROR_POINTER;
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        if((0UL == uxMaxLength) || (0UL != uxItems))
        {
            enErrorReg = SLinkedList_enERROR_VALUE;
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        enErrorReg = SLinkedList__enGetHead(pstList, &pstMember);
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        while((0UL != (uintptr_t) pstMember) &&
              (0UL != uxMaxLength) &&
              (0UL != uxItems) &&
              (SLinkedList_enERROR_OK == enErrorReg))
        {
            enErrorReg = SLinkedList_Item__enGetValue(pstMember, &puxValueItemMember);
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                *puxValueItem = puxValueItemMember;
                uxSizeReg++;
                puxValueItem += 1U;
                uxMaxLength--;
                uxItems--;
                enErrorReg = SLinkedList_Item__enGetNextItem(pstMember, &pstMemberTemp);
            }
            if(SLinkedList_enERROR_OK == enErrorReg)
            {
                pstMember = pstMemberTemp;
            }
        }
    }
    if(SLinkedList_enERROR_OK == enErrorReg)
    {
        *uxSizeArg = (UBase_t) uxSizeReg;
    }
    return (enErrorReg);
}

