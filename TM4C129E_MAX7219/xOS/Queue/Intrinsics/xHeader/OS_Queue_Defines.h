/**
 *
 * @file OS_Queue_Defines.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 5 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_DEFINES_H_
#define XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_DEFINES_H_

#include <xOS/Variables/OS_Variables.h>
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Enum.h>
#include <xOS/List/OS_List.h>

#define OS_QUEUE_UNLOCKED    ((OS_UBase_t) -1)
#define OS_QUEUE_LOCKED_UNMODIFIED    (0UL)

#define OS_QUEUE_IS_MUTEX    (0UL)

#define OS_QUEUE_SEMAPHORE_ITEM_LENGTH    (0UL)
#define OS_QUEUE_MUTEX_GIVE_BLOCK_TIME    (0UL)

typedef void* OS_Queue_Handle_t;
typedef void* OS_Queue_SetHandle_t;
typedef void* OS_Queue_SetMemberHandle_t;

typedef struct OS_Queue_Definition
{
    union
    {
        int8_t* ps8Head;                 /*< Points to the beginning of the queue storage area. */
        OS_UBase_t uxQueueType;
    };
    union
    {
        int8_t* ps8Tail;                 /*< Points to the byte at the end of the queue storage area.  Once more byte is allocated than necessary to store the queue items, this is used as a marker. */
        void* pvMutexHolder;
    };
    int8_t *ps8WriteTo;              /*< Points to the free next place in the storage area. */

    union                           /* Use of a union is an exception to the coding standard to ensure two mutually exclusive structure members don't appear simultaneously (wasting RAM). */
    {
        int8_t *ps8ReadFrom;         /*< Points to the last place that a queued item was read from when the structure is used as a queue. */
        OS_UBase_t uxRecursiveCallCount;/*< Maintains a count of the number of times a recursive mutex has been recursively 'taken' when the structure is used as a mutex. */
    };

    OS_List_t stTasksWaitingToSend;     /*< List of tasks that are blocked waiting to post onto this queue.  Stored in priority order. */
    OS_List_t stTasksWaitingToReceive;  /*< List of tasks that are blocked waiting to read from this queue.  Stored in priority order. */

    volatile OS_UBase_t uxMessagesWaiting;/*< The number of items currently in the queue. */
    uint8_t u8Length;           /*< The length of the queue defined as the number of items it will hold, not the number of bytes. */
    OS_UBase_t uxItemSize;         /*< The size of each items that the queue will hold. */

    volatile OS_UBase_t xRxLock;    /*< Stores the number of items received from the queue (removed from the queue) while the queue was locked.  Set to queueUNLOCKED when the queue is not locked. */
    volatile OS_UBase_t xTxLock;    /*< Stores the number of items transmitted to the queue (added to the queue) while the queue was locked.  Set to queueUNLOCKED when the queue is not locked. */

    OS_UBase_t uxQueueNumber;
    OS_Queue_nType enQueueTypeTrace;

    struct OS_Queue_Definition *pstQueueSetContainer;

}OS_Queue_t;


#endif /* XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_DEFINES_H_ */
