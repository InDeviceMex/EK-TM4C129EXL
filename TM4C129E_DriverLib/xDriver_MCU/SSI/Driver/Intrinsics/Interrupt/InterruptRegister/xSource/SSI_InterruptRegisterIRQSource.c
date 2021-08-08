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

void SSI__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),SSI_nMODULE enModule, SSI_nINTERRUPT enInterruptSource)
{
    uint32_t u32Module = 0UL;
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,  (uint32_t) SSI_enMODULE_MAX);
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptSource,  (uint32_t) SSI_enINTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                                       SSI__pvfGetIRQSourceHandlerPointer((SSI_nMODULE) u32Module, (SSI_nINTERRUPT)u32InterruptSource),
                                       0UL,
                                       1UL);
    }
}
