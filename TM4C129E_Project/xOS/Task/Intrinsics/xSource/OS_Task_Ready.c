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
/*< Prioritised ready tasks. */
static OS_List_TypeDef OS_Task_pstReadyTasksLists[OS_TASK_MAX_PRIORITIES];

OS_List_TypeDef* OS_Task__pstGetReadyTasksLists(OS_UBase_t uxIndex)
{
    OS_List_TypeDef* pstReadyTaskReg = (OS_List_TypeDef*) 0UL;
    if(OS_TASK_MAX_PRIORITIES > uxIndex)
    {
        pstReadyTaskReg = &OS_Task_pstReadyTasksLists[uxIndex];
    }
    return (pstReadyTaskReg);
}


void OS_Task__vInitialiseReadyTaskLists(void)
{
    OS_UBase_t uxPriorityReg = 0UL;
    for( uxPriorityReg = 0UL;
         uxPriorityReg < OS_TASK_MAX_PRIORITIES;
         uxPriorityReg++ )
    {
        OS_List__vInit(&(OS_Task_pstReadyTasksLists[uxPriorityReg]));
    }
}
