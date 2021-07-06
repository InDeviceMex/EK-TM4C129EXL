/**
 *
 * @file SYSCTL_InterruptRegisterIRQSource.c
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
 * @verbatim 16 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRegister/xHeader/SYSCTL_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), SYSCTL_nINTERRUPT enInterruptSource)
{
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptSource,
                                                  (uint32_t) SYSCTL_enINTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                                       SYSCTL__pvfGetIRQSourceHandlerPointer((SYSCTL_nINTERRUPT) u32InterruptSource),
                                       0UL,
                                       1UL);
    }
}




