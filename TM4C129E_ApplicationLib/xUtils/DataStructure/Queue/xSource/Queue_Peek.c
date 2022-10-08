/**
 *
 * @file Queue_Peek.c
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
 * @verbatim 13 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/Queue/xHeader/Queue_Peek.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Data.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Item.h>

void * Queue__pvPeek(const Queue_t* pstQueue)
{
    return SLinkedList__pvGetDataHead((const SLinkedList_t*)pstQueue);
}

UBase_t Queue__uxGetNMember(const Queue_t* pstQueue, void** pvData, UBase_t uxMembers, UBase_t uxMaxSize)
{
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstQueue) && ((UBase_t) 0UL != (UBase_t) pvData ) && (0UL != uxMembers ) && (0UL != uxMaxSize ))
    {
        uxSizeReg = SLinkedList__uxGetNItem((const SLinkedList_t*)pstQueue, pvData, uxMembers, uxMaxSize);
    }
    return uxSizeReg;
}

UBase_t Queue__uxGetAllMember(const Queue_t* pstQueue, void** pvData, UBase_t uxMaxSize)
{
    UBase_t uxSizeReg = 0UL;

    if(((UBase_t) 0UL != (UBase_t) pstQueue) && ((UBase_t) 0UL != (UBase_t) pvData ) && ((UBase_t) 0UL != uxMaxSize ))
    {
        uxSizeReg = SLinkedList__uxGetAllItem((const SLinkedList_t*)pstQueue, pvData, uxMaxSize);
    }
    return uxSizeReg;
}

