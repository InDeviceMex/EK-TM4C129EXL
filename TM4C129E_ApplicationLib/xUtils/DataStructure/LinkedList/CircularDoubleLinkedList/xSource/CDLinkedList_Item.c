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

CDLinkedListItem_t*  CDLinkedList__pstGetItemPos(const CDLinkedList_t* pstList, UBase_t uxPosition)
{
    CDLinkedListItem_t* pstItem = (CDLinkedListItem_t*) 0UL;
    UBase_t uxSizeList = 0UL;
    UBase_t uxSizeForward = 0UL;
    UBase_t uxSizeBackward = 0UL;
    UBase_t uxSizeOptimum = 0UL;
    UBase_t uxDirection = 0UL;
    if((UBase_t) 0UL != (UBase_t) pstList)
    {
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        if(uxPosition < uxSizeList)
        {
            if(0UL == uxPosition)
            {
                pstItem = CDLinkedList__pstGetHead(pstList);
            }
            else if((UBase_t) uxPosition == (UBase_t) (uxSizeList - 1UL))
            {
                pstItem = CDLinkedList__pstGetTail(pstList);
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
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetNextItem(pstItem);
                        uxSizeOptimum--;
                    }
                }
                else /*Backward*/
                {
                    pstItem = CDLinkedList__pstGetTail(pstList);
                    while(0UL != uxSizeOptimum)
                    {
                        pstItem = CDLinkedList_Item__pstGetPreviousItem(pstItem);
                        uxSizeOptimum--;
                    }
                }
            }
        }
    }
    return (pstItem);
}

UBase_t CDLinkedList__uxGetAllItem(const CDLinkedList_t* pstList, const void** pvData, UBase_t uxMaxLength)
{
    CDLinkedListItem_t *pstMember = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t *pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength))
    {
        pstMember = CDLinkedList__pstGetHead(pstList);
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList))
        {
            pvDataMember = CDLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            pstMemberTemp = CDLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CDLinkedList__uxGetAllItem_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength)
{
    CDLinkedListItem_t *pstMember = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t *pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength))
    {
        pstMember = CDLinkedList__pstGetHead(pstList);
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList))
        {
            puxValueItemMember = CDLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            pstMemberTemp = CDLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CDLinkedList__uxGetAllItemBackward(const CDLinkedList_t* pstList, void** pvData, UBase_t uxMaxLength)
{
    CDLinkedListItem_t *pstMember = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t *pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength))
    {
        pstMember = CDLinkedList__pstGetTail(pstList);
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList))
        {
            pvDataMember = CDLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            pstMemberTemp = CDLinkedList_Item__pstGetPreviousItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CDLinkedList__uxGetAllItemBackward_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxMaxLength)
{
    CDLinkedListItem_t *pstMember = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t *pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength))
    {
        pstMember = CDLinkedList__pstGetTail(pstList);
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList))
        {
            puxValueItemMember = CDLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            pstMemberTemp = CDLinkedList_Item__pstGetPreviousItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CDLinkedList__uxGetNItem(const CDLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength)
{
    CDLinkedListItem_t *pstMember = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t *pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = CDLinkedList__pstGetHead(pstList);
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList) && (0UL != uxItems))
        {
            pvDataMember = CDLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = CDLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CDLinkedList__uxGetNItem_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength)
{
    CDLinkedListItem_t *pstMember = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t *pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = CDLinkedList__pstGetHead(pstList);
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList) && (0UL != uxItems))
        {
            puxValueItemMember = CDLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = CDLinkedList_Item__pstGetNextItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CDLinkedList__uxGetNItemBackward(const CDLinkedList_t* pstList, void** pvData, UBase_t uxItems, UBase_t uxMaxLength)
{
    CDLinkedListItem_t *pstMember = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t *pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    void* pvDataMember = (void*)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = CDLinkedList__pstGetTail(pstList);
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList) && (0UL != uxItems))
        {
            pvDataMember = CDLinkedList_Item__pvGetData(pstMember);
            *pvData = pvDataMember;
            uxSizeReg++;
            pvData += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = CDLinkedList_Item__pstGetPreviousItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}

UBase_t CDLinkedList__uxGetNItemBackward_Value(const CDLinkedList_t* pstList, UBase_t* puxValueItem, UBase_t uxItems, UBase_t uxMaxLength)
{
    CDLinkedListItem_t *pstMember = (CDLinkedListItem_t*) 0UL;
    CDLinkedListItem_t *pstMemberTemp = (CDLinkedListItem_t*) 0UL;
    UBase_t puxValueItemMember = (UBase_t)0UL;
    UBase_t uxSizeReg = 0UL;
    UBase_t uxSizeList = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstList) && ((UBase_t) 0UL != (UBase_t) puxValueItem ) && (0UL != uxMaxLength) && (0UL != uxItems))
    {
        pstMember = CDLinkedList__pstGetTail(pstList);
        uxSizeList = CDLinkedList__uxGetSize(pstList);
        while((0UL != uxMaxLength) && (uxSizeReg != uxSizeList) && (0UL != uxItems))
        {
            puxValueItemMember = CDLinkedList_Item__uxGetValue(pstMember);
            *puxValueItem = puxValueItemMember;
            uxSizeReg++;
            puxValueItem += 1U;
            uxMaxLength--;
            uxItems--;
            pstMemberTemp = CDLinkedList_Item__pstGetPreviousItem(pstMember);
            pstMember = pstMemberTemp;
        }
    }
    return (uxSizeReg);
}
