/**
 *
 * @file SLinkedList_Size.c
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Size.h>

UBase_t SLinkedList__uxGetSize(const SLinkedList_t* const pstList)
{
    UBase_t uxSizeReg = 0UL;
    if(0UL != (UBase_t) pstList)
    {
        uxSizeReg = pstList->uxSize;
    }
    return (uxSizeReg);

}

void SLinkedList__vSetSize(SLinkedList_t*  pstList, UBase_t uxSizeArg)
{
    if(0UL != (UBase_t) pstList)
    {
        pstList->uxSize = uxSizeArg;
    }
}

SLinkedList_nERROR SLinkedList__enIsEmpty(const SLinkedList_t*  pstList)
{
    SLinkedList_nERROR enStatus = SLinkedList_enSTATUS_UNDEF;
    if(0UL  == pstList->uxSize)
    {
        enStatus = SLinkedList_enERROR_OK;
    }
    return (enStatus);
}


