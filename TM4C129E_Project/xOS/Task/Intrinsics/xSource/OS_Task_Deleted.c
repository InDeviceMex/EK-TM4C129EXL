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
/*< Tasks that have been deleted - but their memory not yet freed. */
static OS_List_TypeDef OS_Task_stTasksWaitingTermination = (OS_List_TypeDef) {0UL} ;
static volatile OS_UBase_t OS_Task_uxTasksDeleted = 0UL;

OS_List_TypeDef* OS_Task__pstGetTasksWaitingTermination(void)
{
    return (&OS_Task_stTasksWaitingTermination);
}

OS_UBase_t OS_Task__uxGetTasksDeleted(void)
{
    return (OS_Task_uxTasksDeleted);
}

void OS_Task__vSetTasksDeleted(OS_UBase_t uxValueArg)
{
    OS_Task_uxTasksDeleted = uxValueArg;
}

void OS_Task__vIncreaseTasksDeleted(void)
{
    ++OS_Task_uxTasksDeleted;
}

void OS_Task__vDecreaseTasksDeleted(void)
{
    --OS_Task_uxTasksDeleted;
}

void OS_Task__vInitialiseDeletedTaskLists(void)
{
    OS_List__vInit(&OS_Task_stTasksWaitingTermination);
}
