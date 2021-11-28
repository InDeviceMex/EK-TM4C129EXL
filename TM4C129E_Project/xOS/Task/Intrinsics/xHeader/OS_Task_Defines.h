/**
 *
 * @file OS_Task_Defines.h
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

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DEFINES_H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DEFINES_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Enum.h>
#include <xOS/List/OS_List.h>
#include "xOS/Adapt/OS_Adapt.h"

#define OS_TASK_MINIMAL_STACK_SIZE (100UL)
#define OS_TASK_IDLE_STACK_SIZE OS_TASK_MINIMAL_STACK_SIZE
#define OS_TASK_IDLE_PRIORITY    (0UL)

#define OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS (2UL)
#define OS_TASK_MAX_TASK_NAME_LEN (20UL)
#define OS_TASK_MAX_PRIORITIES (40UL)

#define OS_TASK_STACK_FILL_BYTE  (0xA5U)

#define OS_TASK_BLOCKED_CHAR     ('B')
#define OS_TASK_READY_CHAR       ('R')
#define OS_TASK_DELETED_CHAR     ('D')
#define OS_TASK_SUSPENDED_CHAR   ('S')

#define OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE    (0x80000000UL)
#define OS_TASK_EXPECTED_IDLE_TIME_BEFORE_SLEEP (10UL)

typedef void * OS_Task_Handle_t;

typedef OS_UBase_t (*OS_Task_HookFunction_t)(void* pvParameters);
typedef void (*OS_Task_Function_t)(void* pvParameters);

typedef struct
{
    OS_UBase_t uxOverflowCount;
    OS_UBase_t uxTimeOnEntering;
} OS_Task_TimeOut_t;

typedef struct
{
    OS_Task_Handle_t pvHandle;           /* The handle of the task to which the rest of the information in the structure relates. */
    const char *pcTaskName;         /* A pointer to the task's name.  This value will be invalid if the task was deleted since the structure was populated! */ /*lint !e971 Unqualified char types are allowed for strings and single characters only. */
    OS_UBase_t uxTaskNumber;        /* A number unique to the task. */
    OS_Task_eState enCurrentState;       /* The state in which the task existed when the structure was populated. */
    OS_UBase_t uxCurrentPriority;  /* The priority at which the task was running (may be inherited) when the structure was populated. */
    OS_UBase_t uxBasePriority;     /* The priority to which the task will return if the task's current priority has been inherited to avoid unbounded priority inversion when obtaining a mutex.  Only valid if configUSE_MUTEXES is defined as 1 in FreeRTOSConfig.h. */
    OS_UBase_t uxRunTimeCounter;      /* The total run time allocated to the task so far, as defined by the run time stats clock.  See http://www.freertos.org/rtos-run-time-stats.html.  Only valid when configGENERATE_RUN_TIME_STATS is defined as 1 in FreeRTOSConfig.h. */
    OS_UBase_t uxStackHighWaterMark;  /* The minimum amount of stack space that has remained for the task since the task was created.  The closer this value is to zero the closer the task has come to overflowing its stack. */
} OS_Task_Status_t;

typedef struct
{
    volatile OS_UBase_t* puxTopOfStack;

    OS_ListItem_t stGenericListItem;   /*< The list that the state list item of a task is reference from denotes the state of that task (Ready, Blocked, Suspended ). */
    OS_ListItem_t stEventListItem;     /*< Used to reference a task from an event list. */

    OS_UBase_t uxPriorityTask; /*< The priority of the task.  0 is the lowest priority. */
    OS_UBase_t* puxStack;
    OS_UBase_t* puxEndOfStack;
    char pcTaskName[OS_TASK_MAX_TASK_NAME_LEN]; /*< Descriptive name given to the task when created.  Facilitates debugging only. */ /*lint !e971 Unqualified char types are allowed for strings and single characters only. */
    OS_UBase_t uxCriticalNesting;  /*< Holds the critical section nesting depth for ports that do not maintain their own count in the port layer. */
    OS_UBase_t uxTCBNumber;        /*< Stores a number that increments each time a TCB is created.  It allows debuggers to determine when a task has been deleted and then recreated. */
    OS_UBase_t uxTaskNumber;       /*< Stores a number specifically for use by third party trace code. */
    OS_UBase_t uxBasePriority;     /*< The priority last assigned to the task - used by the priority inheritance mechanism. */
    OS_UBase_t uxMutexesHeld;
    OS_Task_HookFunction_t puxfTaskTag;
    void *pvThreadLocalStoragePointers[OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS];
    OS_UBase_t uxRunTimeCounter;   /*< Stores the amount of time the task has spent in the Running state. */
    volatile OS_UBase_t uxNotifiedValue;
    volatile OS_Task_eNotifyState enNotifyState;
} OS_Task_TCB_t;

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DEFINES_H_ */
