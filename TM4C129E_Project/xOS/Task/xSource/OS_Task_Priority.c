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
#include <xOS/Task/xHeader/OS_Task_Priority.h>


static volatile uint32_t u32TopReadyPriority = OS_TASK_IDLE_PRIORITY;


uint32_t OS_Task__u32GetTopReadyPriority(void)
{
    return (u32TopReadyPriority);
}



void OS_Task__vRecordReadyPriority(uint32_t u32PriorityArg)
{
    OS_Adapt__vRecordReadyPriority(u32PriorityArg, &u32TopReadyPriority );
}

uint32_t OS_Task__u32GetHighestPriority(void)
{
    uint32_t u32TopPriorityReg = 0UL;
    OS_Adapt__vGetHighestPriority(&u32TopPriorityReg, u32TopReadyPriority);
    return (u32TopPriorityReg);
}

void OS_Task__vClearReadyPriority(uint32_t u32PriorityArg)
{
    OS_Adapt__vResetReadyPriority(u32PriorityArg, &u32TopReadyPriority );
}

