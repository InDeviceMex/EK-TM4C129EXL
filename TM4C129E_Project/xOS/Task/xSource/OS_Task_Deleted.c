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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Deleted.h>

#include <xOS/Task/xHeader/OS_Task_Defines.h>

#include <xOS/Task/xHeader/OS_Task_Suspended.h>

static OS_Task_List_Typedef OS_Task_stTasksWaitingTermination;             /*< Tasks that have been deleted - but their memory not yet freed. */
static volatile uint32_t OS_Task_u32TasksDeleted = 0UL;


void OS_Task__vInitialiseDeletedTaskLists(void)
{
    CDLinkedList__enInit( &OS_Task_stTasksWaitingTermination, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
}

void OS_Task__vCheckTasksWaitingTermination(void)
{
    CDLinkedList_nSTATUS enListIsEmpty = CDLinkedList_enSTATUS_OK;

    while(0UL < OS_Task_u32TasksDeleted)
    {
        OS_Task__vTaskSuspendAll();
        {
            enListIsEmpty = CDLinkedList__enIsEmpty(&OS_Task_stTasksWaitingTermination);
        }
    }
}

