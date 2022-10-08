/**
 *
 * @file DLinkedList_Size.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Size.h>

UBase_t DLinkedList__uxGetSize(const DLinkedList_t* const pstList)
{
    UBase_t uxSizeReg = 0UL;
    if(0UL != (UBase_t) pstList)
    {
        uxSizeReg = pstList->uxSize;
    }
    return (uxSizeReg);

}

void DLinkedList__vSetSize(DLinkedList_t*  pstList, UBase_t uxSizeArg)
{
    if(0UL != (UBase_t) pstList)
    {
        pstList->uxSize = uxSizeArg;
    }
}

DLinkedList_nSTATUS DLinkedList__enIsEmpty(const DLinkedList_t*  pstList)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    if(0UL  == pstList->uxSize)
    {
        enStatus = DLinkedList_enSTATUS_OK;
    }
    return (enStatus);
}
