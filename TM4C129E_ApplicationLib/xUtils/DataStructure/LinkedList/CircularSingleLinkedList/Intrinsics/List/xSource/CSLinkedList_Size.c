/**
 *
 * @file CSLinkedList_Size.c
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Size.h>

UBase_t CSLinkedList__uxGetSize(const CSLinkedList_t* const pstList)
{
    UBase_t uxSizeReg = 0UL;
    if(0UL != (UBase_t) pstList)
    {
        uxSizeReg = pstList->uxSize;
    }
    return (uxSizeReg);

}

void CSLinkedList__vSetSize(CSLinkedList_t*  pstList, UBase_t uxSizeArg)
{
    if(0UL != (UBase_t) pstList)
    {
        pstList->uxSize = uxSizeArg;
    }
}

CSLinkedList_nERROR CSLinkedList__enIsEmpty(const CSLinkedList_t*  pstList)
{
    CSLinkedList_nERROR enStatus = CSLinkedList_enERROR_UNDEF;
    if(0UL  == pstList->uxSize)
    {
        enStatus = CSLinkedList_enERROR_OK;
    }
    return (enStatus);
}
