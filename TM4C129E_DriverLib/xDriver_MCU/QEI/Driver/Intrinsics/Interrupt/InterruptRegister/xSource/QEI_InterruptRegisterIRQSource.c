/**
 *
 * @file QEI_InterruptRegisterIRQSource.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/QEI_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Source.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),QEI_nMODULE enModule, QEI_nINTERRUPT enInterruptSource)
{
    UBase_t uxModule = 0UL;
    UBase_t uxInterruptSource = 0UL;
    if(0UL != (UBase_t) pfIrqSourceHandler)
    {
        uxModule = MCU__uxCheckParams( (UBase_t) enModule,
                                         (UBase_t) QEI_enMODULE_MAX);
        uxInterruptSource = MCU__uxCheckParams( (UBase_t) enInterruptSource,
                                                  (UBase_t) QEI_enINTERRUPT_MAX);

        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                       QEI__pvfGetIRQSourceHandlerPointer((QEI_nMODULE) uxModule,
                                                          (QEI_nINTERRUPT)uxInterruptSource),
                       0UL,
                       1UL);
    }
}
