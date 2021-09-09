/**
 *
 * @file OS_Task_Critical.c
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
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Critical.h>

#include <xOS/Task/Adapt/OS_Task_Adapt.h>

void OS_Task__vEnterCritical(void)
{
    OS_Adapt__vEnterCritical();
}

void OS_Task__vEnterCriticalFromISR(void)
{
    OS_Adapt__uxSetInterruptMaskFromISR();
}

void OS_Task__vExitCritical(void)
{
    OS_Adapt__vExitCritical();
}

void OS_Task__vExitCriticalFromISR(OS_UBase_t uxMask)
{
    OS_Adapt__vClearInterruptMaskFromISR(uxMask);
}
