/**
 *
 * @file UART_InterruptRegisterIRQSource.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/UART_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),UART_nMODULE enModule, UART_nINTERRUPT enInterruptSource)
{
    uint32_t u32Module = 0UL;
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,  (uint32_t) UART_enMODULE_MAX);
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptSource,  (uint32_t) UART_enINTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                                       UART__pvfGetIRQSourceHandlerPointer((UART_nMODULE) u32Module, (UART_nINTERRUPT)u32InterruptSource),
                                       0UL,
                                       1UL);
    }
}
