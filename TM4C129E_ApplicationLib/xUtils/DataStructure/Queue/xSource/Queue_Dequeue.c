/**
 *
 * @file Queue_Dequeue.c
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
#include <xUtils/DataStructure/Queue/xHeader/Queue_Dequeue.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>

Queue_nERROR Queue__enDequeue(Queue_t* pstQueue, void** pvData)
{
    Queue_nERROR enErrorReg;
    enErrorReg = (Queue_nERROR) SLinkedList__enRemoveHead_GetData((SLinkedList_t*) pstQueue, pvData);
    return (enErrorReg);
}



