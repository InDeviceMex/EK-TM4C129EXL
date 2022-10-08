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

DLinkedListItem_t*  DLinkedList__pstGetItemPos(const DLinkedList_t* pstList, UBase_t uxPosition)
{
    DLinkedListItem_t* pstItem = (DLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = DLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL == uxPosition)
            {
                pstItem = DLinkedList__pstGetHead(pstList);
            }
            else if((UBase_t) uxPosition == (UBase_t) (uxSizeList - 1UL))
            {
                pstItem = DLinkedList__pstGetTail(pstList);
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
                    pstItem = DLinkedList__pstGetHead(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                }
                else /*Backward*/
                {
                    pstItem = DLinkedList__pstGetTail(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = DLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                }
            }
        }
    }
    return (pstItem);
}

UBase_t DLinkedList__uxGetAllItem(const DLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength)
{
    DLinkedListItem_t *pstMember = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t *pstMemberTemp = (DLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength))
        {
            pvDataMember = DLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            pstMemberTemp = DLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t DLinkedList__uxGetAllItem_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength)
{
    DLinkedListItem_t *pstMember = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t *pstMemberTemp = (DLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength))
        {
            puxValueItemMember = DLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            pstMemberTemp = DLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}


UBase_t DLinkedList__uxGetAllItemBackward(const DLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength)
{
    DLinkedListItem_t *pstMember = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t *pstMemberTemp = (DLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength))
        {
            pvDataMember = DLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            pstMemberTemp = DLinkedList_Item__pstGetPreviousItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t DLinkedList__uxGetAllItemBackward_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength)
{
    DLinkedListItem_t *pstMember = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t *pstMemberTemp = (DLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength))
        {
            puxValueItemMember = DLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            pstMemberTemp = DLinkedList_Item__pstGetPreviousItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t DLinkedList__uxGetNItem(const DLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength)
{
    DLinkedListItem_t *pstMember = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t *pstMemberTemp = (DLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength) && (0UL != uxItems))
        {
            pvDataMember = DLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = DLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t DLinkedList__uxGetNItem_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength)
{
    DLinkedListItem_t *pstMember = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t *pstMemberTemp = (DLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = DLinkedList__pstGetHead(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength) && (0UL != uxItems))
        {
            puxValueItemMember = DLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = DLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t DLinkedList__uxGetNItemBackward(const DLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength)
{
    DLinkedListItem_t *pstMember = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t *pstMemberTemp = (DLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength) && (0UL != uxItems))
        {
            pvDataMember = DLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = DLinkedList_Item__pstGetPreviousItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t DLinkedList__uxGetNItemBackward_Value(const DLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength)
{
    DLinkedListItem_t *pstMember = (DLinkedListItem_t*) 0UL;
    DLinkedListItem_t *pstMemberTemp = (DLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = DLinkedList__pstGetTail(pstList);
        while(((UBase_t) 0UL != (UBase_t) pstMember) && (0UL != uxMaxLength) && (0UL != uxItems))
        {
            puxValueItemMember = DLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = DLinkedList_Item__pstGetPreviousItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

