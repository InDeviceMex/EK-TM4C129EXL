/**
 *
 * @file OS_Queue_Enum.h
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

#ifndef XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_ENUM_H_
#define XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_ENUM_H_

#include <xOS/Variables/OS_Variables.h>

typedef enum
{
/* For internal use only. */
    OS_Queue_enPos_SEND_TO_BACK = 0UL,
    OS_Queue_enPos_SEND_TO_FRONT = 1UL,
    OS_Queue_enPos_OVERWRITE = 2UL,
    OS_Queue_enPos_UNDEF = UNDEF_VALUE,
}OS_Queue_nPos;

typedef enum
{
    /* For internal use only.  These definitions *must* match those in queue.c. */
    OS_Queue_enType_BASE = 0UL,
    OS_Queue_enType_SET = 0UL,
    OS_Queue_enType_MUTEX = 1UL,
    OS_Queue_enType_COUNTING_SEMAPHORE = 2UL,
    OS_Queue_enType_BINARY_SEMAPHORE = 3UL,
    OS_Queue_enType_RECURSIVE_MUTEX = 4UL,
    OS_Queue_enType_UNDEF = UNDEF_VALUE,
}OS_Queue_nType;

#endif /* XOS_QUEUE_INTRINSICS_XHEADER_OS_QUEUE_ENUM_H_ */
