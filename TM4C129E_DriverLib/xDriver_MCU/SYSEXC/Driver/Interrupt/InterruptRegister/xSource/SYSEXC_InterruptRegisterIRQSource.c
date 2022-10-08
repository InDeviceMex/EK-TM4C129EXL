/**
 *
 * @file SYSEXC_InterruptRegisterIRQSource.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Interrupt/InterruptRegister/xHeader/SYSEXC_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSEXC/Driver/Interrupt/InterruptRoutine/xHeader/SYSEXC_InterruptRoutine_Source.h>
#include <xDriver_MCU/SYSEXC/Peripheral/SYSEXC_Peripheral.h>

void SYSEXC__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                       SYSEXC_nINTERRUPT enInterruptSource)
{
    UBase_t uxInterruptSource = 0UL;
    if(0UL != (UBase_t) pfIrqSourceHandler)
    {
        uxInterruptSource = MCU__uxCheckParams( (UBase_t) enInterruptSource,
                                                  (UBase_t) SYSEXC_enINTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
               SYSEXC__pvfGetIRQSourceHandlerPointer((SYSEXC_nINTERRUPT) uxInterruptSource),
               0UL,
               1UL);
    }
}
