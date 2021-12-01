/**
 *
 * @file OS_CoRoutine_Tick.c
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
#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Tick.h>

static OS_UBase_t OS_CoRoutine_uxTickCount = 0UL;
static OS_UBase_t OS_CoRoutine_uxLastTickCount = 0UL;
static OS_UBase_t OS_CoRoutine_uxPassedTicks = 0UL;

OS_UBase_t OS_CoRoutine__uxGetTickCount_NotSafe(void)
{
    return (OS_CoRoutine_uxTickCount);
}

void OS_CoRoutine__vSetTickCount(OS_UBase_t uxValueArg)
{
    OS_CoRoutine_uxTickCount = uxValueArg;
}

void OS_CoRoutine__vIncreaseTickCount(void)
{
    OS_CoRoutine_uxTickCount++;
}

OS_UBase_t OS_CoRoutine__uxGetLastTickCount_NotSafe(void)
{
    return (OS_CoRoutine_uxLastTickCount);
}

void OS_CoRoutine__vSetLastTickCount(OS_UBase_t uxValueArg)
{
    OS_CoRoutine_uxLastTickCount = uxValueArg;
}

void OS_CoRoutine__vIncreaseLastTickCount(void)
{
    OS_CoRoutine_uxLastTickCount++;
}

OS_UBase_t OS_CoRoutine__uxGetPassedTicks_NotSafe(void)
{
    return (OS_CoRoutine_uxPassedTicks);
}

void OS_CoRoutine__vSetPassedTicks(OS_UBase_t uxValueArg)
{
    OS_CoRoutine_uxPassedTicks = uxValueArg;
}

void OS_CoRoutine__vIncreasePassedTicks(void)
{
    OS_CoRoutine_uxPassedTicks++;
}
