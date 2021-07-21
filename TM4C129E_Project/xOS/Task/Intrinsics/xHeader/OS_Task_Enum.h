/**
 *
 * @file OS_Task_Enum.h
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
 * @verbatim 20 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_ENUM_H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    OS_Task_enStatus_Ok = 0UL,
    OS_Task_enStatus_Error = 1UL,
    OS_Task_enStatus_Undef = 0xFFFFFFFFUL
} OS_Task_eStatus;

typedef enum
{
    OS_Task_enState_Running = 0UL,   /* A task is querying the state of itself, so must be running. */
    OS_Task_enState_Ready = 1UL,         /* The task being queried is in a read or pending ready list. */
    OS_Task_enState_Blocked = 2UL,       /* The task being queried is in the Blocked state. */
    OS_Task_enState_Suspended = 3UL,     /* The task being queried is in the Suspended state, or is in the Blocked state with an infinite time out. */
    OS_Task_enState_Deleted = 4UL,        /* The task being queried has been deleted, but its TCB has not yet been freed. */
    OS_Task_enState_Undef = 0xFFFFFFFFUL
} OS_Task_eState;

typedef enum
{
    OS_Task_enNotifyAction_NoAction = 0UL,              /* Notify the task without updating its notify value. */
    OS_Task_enNotifyAction_SetBits = 1UL,                   /* Set bits in the task's notification value. */
    OS_Task_enNotifyAction_Increment = 2UL,                 /* Increment the task's notification value. */
    OS_Task_enNotifyAction_SetValueWithOverwrite = 3UL,     /* Set the task's notification value to a specific value even if the previous value has not yet been read by the task. */
    OS_Task_enNotifyAction_SetValueWithoutOverwrite = 4UL,   /* Set the task's notification value if the previous value has been read by the task. */
    OS_Task_enNotifyAction_Undef = 0xFFFFFFFFUL,   /* Set the task's notification value if the previous value has been read by the task. */
} OS_Task_eNotifyAction;

typedef enum
{
    OS_Task_enNotifyValue_NotWaitingNotification = 0UL,
    OS_Task_enNotifyValue_WaitingNotification = 1UL,
    OS_Task_enNotifyValue_Notified = 2UL,
    OS_Task_enNotifyValue_Undef = 0xFFFFFFFFUL,
} OS_Task_eNotifyValue;

typedef enum
{
    OS_Task_enSleepModeStatus_AbortSleep = 0UL,        /* A task has been made ready or a context switch pended since portSUPPORESS_TICKS_AND_SLEEP() was called - abort entering a sleep mode. */
    OS_Task_enSleepModeStatus_StandardSleep = 1UL,         /* Enter a sleep mode that will not last any longer than the expected idle time. */
    OS_Task_enSleepModeStatus_NoTasksWaitingTimeout = 2UL,  /* No tasks are waiting for a timeout so it is safe to enter a sleep mode that can only be exited by an external interrupt. */
    OS_Task_enSleepModeStatus_Undef = 0xFFFFFFFFUL
} OS_Task_eSleepModeStatus;

typedef enum
{
    OS_Task_enScheduler_Suspended = 0UL,
    OS_Task_enScheduler_Not_Started = 1UL,
    OS_Task_enScheduler_Running = 2UL,
    OS_Task_enScheduler_Undef = 0xFFFFFFFFUL
} OS_Task_eScheduler;

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_ENUM_H_ */
