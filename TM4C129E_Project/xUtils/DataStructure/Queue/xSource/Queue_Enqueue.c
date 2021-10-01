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

Queue_nSTATUS Queue__enEnqueue(Queue_TypeDef* pstQueue, void* pvData)
{
    Queue_nSTATUS enStatus = Queue_enSTATUS_ERROR;
    SLinkedListItem_TypeDef* pstNewElement = (SLinkedListItem_TypeDef*) 0UL ;
    pstNewElement = SLinkedList__pstInsertAtTail_WithData((SLinkedList_TypeDef*) pstQueue, pvData);
    if(0UL != (uint32_t) pstNewElement)
    {
        enStatus = Queue_enSTATUS_OK;
    }
    return enStatus;
}


