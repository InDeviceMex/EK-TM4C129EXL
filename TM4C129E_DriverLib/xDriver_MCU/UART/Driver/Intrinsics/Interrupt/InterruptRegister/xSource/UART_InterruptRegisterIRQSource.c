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

void UART__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),UART_nMODULE enModule,
                                     UART_nINTERRUPT enInterruptSource)
{
    UBase_t uxModule = 0UL;
    UBase_t uxInterruptSource = 0UL;
    if(0UL != (UBase_t) pfIrqSourceHandler)
    {
        uxModule = MCU__uxCheckParams( (UBase_t) enModule,  (UBase_t) UART_enMODULE_MAX);
        uxInterruptSource = MCU__uxCheckParams( (UBase_t) enInterruptSource,
                                                  (UBase_t) UART_enINTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
           UART__pvfGetIRQSourceHandlerPointer((UART_nMODULE) uxModule,
                                               (UART_nINTERRUPT)uxInterruptSource),
           0UL,
           1UL);
    }
}
