/**
 *
 * @file CDLinkedList_Size.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Size.h>

UBase_t CDLinkedList__uxGetSize(const CDLinkedList_t* const pstList)
{
    UBase_t uxSizeReg = 0UL;
    if(0UL != (UBase_t) pstList)
    {
        uxSizeReg = pstList->uxSize;
    }
    return (uxSizeReg);

}

void CDLinkedList__vSetSize(CDLinkedList_t*  pstList, UBase_t uxSizeArg)
{
    if(0UL != (UBase_t) pstList)
    {
        pstList->uxSize = uxSizeArg;
    }
}

CDLinkedList_nERROR CDLinkedList__enIsEmpty(const CDLinkedList_t*  pstList)
{
    CDLinkedList_nERROR enStatus = CDLinkedList_enERROR_POINTER;
    if(0UL  == pstList->uxSize)
    {
        enStatus = CDLinkedList_enERROR_OK;
    }
    return (enStatus);
}
