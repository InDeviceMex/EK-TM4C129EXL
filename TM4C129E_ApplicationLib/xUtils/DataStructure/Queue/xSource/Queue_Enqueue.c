/**
 *
 * @file Queue_Enqueue.c
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
#include <xUtils/DataStructure/Queue/xHeader/Queue_Enqueue.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Insert.h>

Queue_nERROR Queue__enEnqueue(Queue_t* pstQueue, void* pvData)
{
    SLinkedListItem_t* pstNewElement;
    Queue_nERROR enErrorReg;
    pstNewElement = (SLinkedListItem_t*) 0UL ;
    enErrorReg = (Queue_nERROR) SLinkedList__enInsertAndCreateAtTail_WithData((SLinkedList_t*) pstQueue, &pstNewElement, pvData);
    return (enErrorReg);
}


