/**
 *
 * @file OS_Task_Tick.c
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
 * @verbatim 28 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Tick.h>

static volatile OS_UBase_t OS_Task_uxTickCount = 0UL;
static volatile OS_UBase_t OS_Task_uxPendedTicks = 0UL;

OS_UBase_t OS_Task__uxGetTickCount_NotSafe(void)
{
    return (OS_Task_uxTickCount);
}

void OS_Task__vSetTickCount(OS_UBase_t uxValueArg)
{
    OS_Task_uxTickCount = uxValueArg;
}

void OS_Task__vIncreaseTickCount(void)
{
    OS_Task_uxTickCount++;
}

OS_UBase_t OS_Task__uxGetPendedTicks(void)
{
    return (OS_Task_uxPendedTicks);
}

void OS_Task__vSetPendedTicks(OS_UBase_t uxValueArg)
{
    OS_Task_uxPendedTicks = uxValueArg;
}

void OS_Task__vIncreasePendedTicks(void)
{
    ++OS_Task_uxPendedTicks;
}
