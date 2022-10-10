/**
 *
 * @file Queue_Size.c
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
#include <xUtils/DataStructure/Queue/xHeader/Queue_Size.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Size.h>

Queue_nERROR Queue__enGetSize(const Queue_t* const pstQueue, UBase_t* uxSizeArg)
{
    Queue_nERROR enErrorReg;
    enErrorReg = (Queue_nERROR) SLinkedList__enGetSize((const SLinkedList_t*) pstQueue, uxSizeArg);
    return (enErrorReg);
}

Queue_nERROR Queue__enIsEmpty(const Queue_t* const pstQueue, boolean_t* pboStatus)
{
    Queue_nERROR enErrorReg;
    enErrorReg = (Queue_nERROR) SLinkedList__enIsEmpty(pstQueue, pboStatus);
    return (enErrorReg);
}


