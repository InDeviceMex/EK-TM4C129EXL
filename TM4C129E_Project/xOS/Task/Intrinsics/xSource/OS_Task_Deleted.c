/**
 *
 * @file OS_Task_Deleted.c
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
 * @verbatim 21 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Deleted.h>


static OS_Task_List_Typedef OS_Task_stTasksWaitingTermination;             /*< Tasks that have been deleted - but their memory not yet freed. */
static volatile uint32_t OS_Task_u32TasksDeleted = 0UL;

OS_Task_List_Typedef* OS_Task__pstGetTasksWaitingTermination(void)
{
    return (&OS_Task_stTasksWaitingTermination);
}

uint32_t OS_Task__u32GetTasksDeleted(void)
{
    return (OS_Task_u32TasksDeleted);
}

void OS_Task__vSetTasksDeleted(uint32_t u32ValueArg)
{
    OS_Task_u32TasksDeleted = u32ValueArg;
}

void OS_Task__vIncreaseTasksDeleted(void)
{
    ++OS_Task_u32TasksDeleted;
}

void OS_Task__vDecreaseTasksDeleted(void)
{
    --OS_Task_u32TasksDeleted;
}

void OS_Task__vInitialiseDeletedTaskLists(void)
{
    CDLinkedList__enInit( &OS_Task_stTasksWaitingTermination, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
}


