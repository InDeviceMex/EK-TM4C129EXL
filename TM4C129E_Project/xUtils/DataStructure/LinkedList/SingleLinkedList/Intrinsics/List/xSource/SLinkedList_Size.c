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
#include <stdlib.h>


uint32_t SLinkedList__u32GetSize(const SLinkedList_TypeDef* const pstList)
{
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = pstList->u32Size;
    return u32SizeReg;

}

void SLinkedList__vSetSize(SLinkedList_TypeDef*  pstList, uint32_t u32SizeArg)
{
    pstList->u32Size = u32SizeArg;
}



