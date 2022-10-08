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

SLinkedListItem_t*  SLinkedList__pstGetItemPos(const SLinkedList_t* pstList, UBase_t uxPosition)
{
    SLinkedListItem_t* pstItem = (SLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = SLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL == uxPosition)
            {
                pstItem = SLinkedList__pstGetHead(pstList);
            }
            else if((UBase_t) (uxSizeList -1UL) == (UBase_t) uxPosition)
            {
                pstItem = SLinkedList__pstGetTail(pstList);
            }
            else
            {
                pstItem = SLinkedList__pstGetHead(pstList);
                while(0UL != uxPosition)
                {
                    pstItem = SLinkedList_Item__pstGetNextItem(pstItem);
                    uxPosition--;
                }
            }
        }
    }
    return (pstItem);
}

UBase_t SLinkedList__uxGetAllItem(const SLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength)
{
    SLinkedListItem_t *pstMember = (SLinkedListItem_t*) 0UL;
    SLinkedListItem_t *pstMemberTemp = (SLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength))
        {
            pvDataMember = SLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            pstMemberTemp = SLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t SLinkedList__uxGetNItem(const SLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength)
{
    SLinkedListItem_t *pstMember = (SLinkedListItem_t*) 0UL;
    SLinkedListItem_t *pstMemberTemp = (SLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength) && (0UL != uxItems))
        {
            pvDataMember = SLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = SLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}



UBase_t SLinkedList__uxGetAllItem_Value(const SLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength)
{
    SLinkedListItem_t *pstMember = (SLinkedListItem_t*) 0UL;
    SLinkedListItem_t *pstMemberTemp = (SLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength))
        {
            puxValueItemMember = SLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            pstMemberTemp = SLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t SLinkedList__uxGetNItem_Value(const SLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength)
{
    SLinkedListItem_t *pstMember = (SLinkedListItem_t*) 0UL;
    SLinkedListItem_t *pstMemberTemp = (SLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = SLinkedList__pstGetHead(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength) && (0UL != uxItems))
        {
            puxValueItemMember = SLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = SLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

