/**
 *
 * @file OS_Task_Ready.c
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
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Ready.h>

static OS_Task_List_Typedef OS_Task_pstReadyTasksLists[OS_TASK_MAX_PRIORITIES];/*< Prioritised ready tasks. */

OS_Task_List_Typedef* OS_Task__pstGetReadyTasksLists(uint32_t u32Index)
{
    OS_Task_List_Typedef* pstReadyTaskReg = (OS_Task_List_Typedef*) 0UL;
    if(OS_TASK_MAX_PRIORITIES > u32Index)
    {
        pstReadyTaskReg = &OS_Task_pstReadyTasksLists[u32Index];
    }

    return (pstReadyTaskReg);
}


void OS_Task__vInitialiseReadyTaskLists(void)
{
    uint32_t u32PriorityReg = 0UL;

    for( u32PriorityReg = ( uint32_t ) 0U; u32PriorityReg < ( uint32_t ) OS_TASK_MAX_PRIORITIES; u32PriorityReg++ )
    {
        CDLinkedList__enInit( &(OS_Task_pstReadyTasksLists[u32PriorityReg]), (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
    }
}
