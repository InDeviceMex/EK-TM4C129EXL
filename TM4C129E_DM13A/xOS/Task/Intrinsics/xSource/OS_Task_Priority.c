/**
 *
 * @file OS_Task_Priority.c
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
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Priority.h>
#include <xOS/Adapt/xHeader/OS_Adapt_Priority.h>

static volatile OS_UBase_t OS_Task_uxTopReadyPriority = OS_TASK_IDLE_PRIORITY;

OS_UBase_t OS_Task__uxGetTopReadyPriority(void)
{
    return (OS_Task_uxTopReadyPriority);
}

void OS_Task__vRecordReadyPriority(OS_UBase_t uxPriorityArg)
{
    OS_Adapt__vRecordReadyPriority(uxPriorityArg, &OS_Task_uxTopReadyPriority);
}

void OS_Task__vAdaptResetReadyPriority(OS_UBase_t uxPriorityArg)
{
    OS_Adapt__vResetReadyPriority(uxPriorityArg, &OS_Task_uxTopReadyPriority);
}

OS_UBase_t OS_Task__uxGetHighestPriority(void)
{
    OS_UBase_t uxTopPriorityReg = 0UL;

    uxTopPriorityReg = OS_Adapt__uxGetHighestPriority(OS_Task_uxTopReadyPriority);
    return (uxTopPriorityReg);
}
