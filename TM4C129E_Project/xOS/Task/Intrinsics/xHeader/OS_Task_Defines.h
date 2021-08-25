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

#include <xOS/Adapt/OS_Adapt.h>
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Enum.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/CircularDoubleLinkedList.h>

#define OS_TASK_MINIMAL_STACK_SIZE (100UL)
#define OS_TASK_IDLE_STACK_SIZE OS_TASK_MINIMAL_STACK_SIZE
#define OS_TASK_IDLE_PRIORITY    ((uint32_t) 0UL)

#define OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS (2UL)
#define OS_TASK_MAX_TASK_NAME_LEN (20UL)
#define OS_TASK_MAX_PRIORITIES (40UL)


#define OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE    (0x80000000UL)
#define OS_TASK_EXPECTED_IDLE_TIME_BEFORE_SLEEP (10UL)

typedef void * OS_Task_Handle_TypeDef;

typedef uint32_t (*OS_Task_HookFunction_Typedef)( void * pvParameters);
typedef void (*OS_Task_Function_Typedef)( void * pvParameters );

typedef CDLinkedList_TypeDef OS_Task_List_Typedef;
typedef CDLinkedListItem_TypeDef OS_Task_ListItem_TypeDef;

typedef struct
{
    uint32_t u32OverflowCount;
    uint32_t u32TimeOnEntering;
} OS_Task_TimeOut_TypeDef;

typedef struct
{
    OS_Task_Handle_TypeDef pvHandle;           /* The handle of the task to which the rest of the information in the structure relates. */
    const char *pcTaskName;         /* A pointer to the task's name.  This value will be invalid if the task was deleted since the structure was populated! */ /*lint !e971 Unqualified char types are allowed for strings and single characters only. */
    uint32_t u32TaskNumber;        /* A number unique to the task. */
    OS_Task_eState enCurrentState;       /* The state in which the task existed when the structure was populated. */
    uint32_t u32CurrentPriority;  /* The priority at which the task was running (may be inherited) when the structure was populated. */
    uint32_t u32BasePriority;     /* The priority to which the task will return if the task's current priority has been inherited to avoid unbounded priority inversion when obtaining a mutex.  Only valid if configUSE_MUTEXES is defined as 1 in FreeRTOSConfig.h. */
    uint32_t u32RunTimeCounter;      /* The total run time allocated to the task so far, as defined by the run time stats clock.  See http://www.freertos.org/rtos-run-time-stats.html.  Only valid when configGENERATE_RUN_TIME_STATS is defined as 1 in FreeRTOSConfig.h. */
    uint32_t u32StackHighWaterMark;  /* The minimum amount of stack space that has remained for the task since the task was created.  The closer this value is to zero the closer the task has come to overflowing its stack. */
} OS_Task_Status_TypeDef;

typedef struct
{
    volatile uint32_t* pu32TopOfStack;

    OS_Task_ListItem_TypeDef stGenericListItem;   /*< The list that the state list item of a task is reference from denotes the state of that task (Ready, Blocked, Suspended ). */
    OS_Task_ListItem_TypeDef stEventListItem;     /*< Used to reference a task from an event list. */

    uint32_t u32PriorityTask; /*< The priority of the task.  0 is the lowest priority. */
    uint32_t* pu32Stack;
    uint32_t* pu32EndOfStack;
    char pcTaskName[OS_TASK_MAX_TASK_NAME_LEN]; /*< Descriptive name given to the task when created.  Facilitates debugging only. */ /*lint !e971 Unqualified char types are allowed for strings and single characters only. */
    uint32_t u32CriticalNesting;  /*< Holds the critical section nesting depth for ports that do not maintain their own count in the port layer. */
    uint32_t u32TCBNumber;        /*< Stores a number that increments each time a TCB is created.  It allows debuggers to determine when a task has been deleted and then recreated. */
    uint32_t u32BasePriority;     /*< The priority last assigned to the task - used by the priority inheritance mechanism. */
    uint32_t u32MutexesHeld;
    OS_Task_HookFunction_Typedef pu32fHookFunction;
    void *pvThreadLocalStoragePointers[OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS];
    volatile uint32_t u32NotifiedValue;
    volatile OS_Task_eNotifyValue enNotifyState;
} OS_TASK_TCB;

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DEFINES_H_ */
