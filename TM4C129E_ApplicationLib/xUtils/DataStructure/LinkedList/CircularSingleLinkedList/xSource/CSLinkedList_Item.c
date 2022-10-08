/**
 *
 * @file CSLinkedList_Item.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Item.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/CSLinkedList_Intrinsics.h>

CSLinkedListItem_t*  CSLinkedList__pstGetItemPos(const CSLinkedList_t* pstList, UBase_t uxPosition)
{
    CSLinkedListItem_t* pstItem = (CSLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL == uxPosition)
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
            }
            else if((UBase_t) (uxSizeList -1UL) == (UBase_t) uxPosition)
            {
                pstItem = CSLinkedList__pstGetTail(pstList);
            }
            else
            {
                pstItem = CSLinkedList__pstGetHead(pstList);
                while(0UL != uxPosition)
                {
                    pstItem = CSLinkedList_Item__pstGetNextItem(pstItem);
                    uxPosition--;
                }
            }
        }
    }
    return (pstItem);
}

UBase_t CSLinkedList__uxGetAllItem(const CSLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength)
{
    CSLinkedListItem_t *pstMember = (CSLinkedListItem_t*) 0UL;
    CSLinkedListItem_t *pstMemberTemp = (CSLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList))
        {
            pvDataMember = CSLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            pstMemberTemp = CSLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CSLinkedList__uxGetAllItem_Value(const CSLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength)
{
    CSLinkedListItem_t *pstMember = (CSLinkedListItem_t*) 0UL;
    CSLinkedListItem_t *pstMemberTemp = (CSLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList))
        {
            puxValueItemMember = CSLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            pstMemberTemp = CSLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CSLinkedList__uxGetNItem(const CSLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength)
{
    CSLinkedListItem_t *pstMember = (CSLinkedListItem_t*) 0UL;
    CSLinkedListItem_t *pstMemberTemp = (CSLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList) && (0UL != uxItems))
        {
            pvDataMember = CSLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = CSLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CSLinkedList__uxGetNItem_Value(const CSLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength)
{
    CSLinkedListItem_t *pstMember = (CSLinkedListItem_t*) 0UL;
    CSLinkedListItem_t *pstMemberTemp = (CSLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = CSLinkedList__pstGetHead(pstList);
        uxSizeList = CSLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList) && (0UL != uxItems))
        {
            puxValueItemMember = CSLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = CSLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}
