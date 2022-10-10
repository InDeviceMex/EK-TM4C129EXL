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

Queue_nERROR Queue__enPeek(const Queue_t* pstQueue, void ** pvItemDataArg)
{
    Queue_nERROR enErrorReg;
    enErrorReg = (Queue_nERROR) SLinkedList__enGetDataHead(pstQueue, pvItemDataArg);
    return (enErrorReg);
}

Queue_nERROR Queue__enGetNMember(const Queue_t* pstQueue, void** pvData, UBase_t uxMembers, UBase_t uxMaxSize, UBase_t* uxSizeArg)
{
    Queue_nERROR enErrorReg;
    enErrorReg = (Queue_nERROR) SLinkedList__enGetNItem(pstQueue, pvData, uxMembers, uxMaxSize, uxSizeArg);
    return (enErrorReg);
}

Queue_nERROR Queue__enGetAllMember(const Queue_t* pstQueue, void** pvData, UBase_t uxMaxSize, UBase_t* uxSizeArg)
{
    Queue_nERROR enErrorReg;
    enErrorReg = (Queue_nERROR) SLinkedList__enGetAllItem(pstQueue, pvData, uxMaxSize, uxSizeArg);
    return (enErrorReg);
}

