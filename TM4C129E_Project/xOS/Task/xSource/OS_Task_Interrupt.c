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
 * @verbatim 17 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Interrupt.h>

#include <xOS/Adapt/OS_Adapt.h>

void OS_Task__vYield(void)
{
    OS_Adapt__vYield();
}

void OS_Task__vYieldWithinAPI(void)
{
    OS_Adapt__vYieldWithinAPI();
}

void OS_Task__vYieldFromISR(uint32_t u32Switch)
{
    OS_Adapt__vYieldFromISR(u32Switch);
}

void OS_Task__vEndSwitchingISR( uint32_t u32SwitchRequired)
{
    OS_Adapt__vEndSwitchingISR(u32SwitchRequired);
}

void OS_Task__vDisableInterrupts(void)
{
    OS_Adapt__vDisableInterrupts();
}

void OS_Task__vEnableInterrupts(void)
{
    OS_Adapt__vEnableInterrupts();
}

uint32_t OS_Task__u32IsInterruptActive(void)
{
    uint32_t u32IrqActive = 0UL;
    u32IrqActive = OS_Adapt__u32IsInterruptActive();
    return u32IrqActive;
}

void OS_Task__vSetInterruptMaskFromISR(void)
{
    OS_Adapt__vSetInterruptMaskFromISR();
}


void OS_Task__vClearInterruptMaskFromISR(uint32_t u32Mask)
{
    OS_Adapt__vClearInterruptMaskFromISR(u32Mask);
}



