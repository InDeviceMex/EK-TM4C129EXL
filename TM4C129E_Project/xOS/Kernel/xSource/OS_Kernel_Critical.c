/**
 *
 * @file OS_Kernel_Critical.c
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
 * @verbatim 8 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Kernel/xHeader/OS_Kernel_Critical.h>
#include <xDriver_MCU/Common/MCU_Common.h>

static uint32_t u32CriticalNesting = 0xaaaaaaaa;


void OS_Kernel__vEnterCritical(void)
{
    MCU__vSetBasePriorityInterrupt(OS_KERNEL_SYSCALL_PRIORITY);
    u32CriticalNesting++;
}


void OS_Kernel__vExitCritical(void)
{
    if(0UL != u32CriticalNesting)
    {
        u32CriticalNesting--;
        if(0UL == u32CriticalNesting)
        {
            MCU__vSetBasePriorityInterrupt(OS_KERNEL_INTERRUPT_PRIORITY);
        }
    }
}

