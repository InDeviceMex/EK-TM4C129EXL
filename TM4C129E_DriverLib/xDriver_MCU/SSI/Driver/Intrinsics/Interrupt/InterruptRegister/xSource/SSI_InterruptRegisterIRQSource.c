/**
 *
 * @file SSI_InterruptRegisterIRQSource.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/SSI_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Source.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                    SSI_nMODULE enModule, SSI_nINT enInterruptSource)
{
    UBase_t uxModule = 0UL;
    UBase_t uxInterruptSource = 0UL;
    if(0UL != (UBase_t) pfIrqSourceHandler)
    {
        uxModule = MCU__uxCheckParams( (UBase_t) enModule,
                                         (UBase_t) SSI_enMODULE_MAX);
        uxInterruptSource = MCU__uxCheckParams( (UBase_t) enInterruptSource,
                                                  (UBase_t) SSI_enINT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                       SSI__pvfGetIRQSourceHandlerPointer((SSI_nMODULE) uxModule,
                                                          (SSI_nINT)uxInterruptSource),
                       0UL,
                       1UL);
    }
}
