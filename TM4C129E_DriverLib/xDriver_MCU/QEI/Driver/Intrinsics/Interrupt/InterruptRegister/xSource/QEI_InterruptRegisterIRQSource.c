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
    uint32_t u32Module = 0UL;
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,
                                         (uint32_t) QEI_enMODULE_MAX);
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptSource,
                                                  (uint32_t) QEI_enINTERRUPT_MAX);

        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                       QEI__pvfGetIRQSourceHandlerPointer((QEI_nMODULE) u32Module,
                                                          (QEI_nINTERRUPT)u32InterruptSource),
                       0UL,
                       1UL);
    }
}
