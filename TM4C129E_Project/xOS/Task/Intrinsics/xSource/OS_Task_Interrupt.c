/**
 *
 * @file OS_Task_Interrupt.c
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
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Interrupt.h>

#include <xOS/Task/Adapt/OS_Task_Adapt.h>

void OS_Task__vYield(void)
{
    OS_Adapt__vYield();
}

void OS_Task__vYieldWithinAPI(void)
{
    OS_Adapt__vYieldWithinAPI();
}

void OS_Task__vYieldIfUsingPreemption(void)
{
    OS_Task__vYieldWithinAPI();
}

void OS_Task__vYieldFromISR(OS_Boolean_t boSwitch)
{
    OS_Adapt__vYieldFromISR(boSwitch);
}

void OS_Task__vEndSwitchingISR(OS_Boolean_t boSwitchRequired)
{
    OS_Adapt__vEndSwitchingISR(boSwitchRequired);
}

void OS_Task__vDisableInterrupts(void)
{
    OS_Adapt__vDisableInterrupts();
}

void OS_Task__vEnableInterrupts(void)
{
    OS_Adapt__vEnableInterrupts();
}

OS_Boolean_t OS_Task__boIsInterruptActive(void)
{
    OS_Boolean_t boIrqActive = FALSE;

    boIrqActive = OS_Adapt__boIsInterruptActive();
    return (boIrqActive);
}

OS_UBase_t OS_Task__uxSetInterruptMaskFromISR(void)
{
    OS_UBase_t uxReturnMaskReg = 0UL;

    uxReturnMaskReg = OS_Adapt__uxSetInterruptMaskFromISR();
    return (uxReturnMaskReg);
}

void OS_Task__vClearInterruptMaskFromISR(OS_UBase_t uxMask)
{
    OS_Adapt__vClearInterruptMaskFromISR(uxMask);
}
