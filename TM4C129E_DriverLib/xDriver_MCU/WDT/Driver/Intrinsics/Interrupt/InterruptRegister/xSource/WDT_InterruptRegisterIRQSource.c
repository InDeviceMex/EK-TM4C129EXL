/**
 *
 * @file WDT_InterruptRegisterIRQSource.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/WDT_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>
#include <xDriver_MCU/Common/MCU_Common.h>

void WDT__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                    WDT_nMODULE enModule,
                                    WDT_nINTERRUPT enInterruptParam)
{
    UBase_t uxInterruptSource = 0UL;
    UBase_t uxModule = 0UL;
    if(0U != (UBase_t) pfIrqSourceHandler )
    {
        uxInterruptSource = MCU__uxCheckParams((UBase_t) enInterruptParam,
                                              (UBase_t) WDT_enINTERRUPT_MAX);
        uxModule = MCU__uxCheckParams((UBase_t) enModule,
                                        (UBase_t) WDT_enMODULE_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
           WDT__pvfGetIRQSourceHandlerPointer((WDT_nMODULE) uxModule,
                                               (WDT_nINTERRUPT) uxInterruptSource),
           0UL,
           1UL);
    }
}
