/**
 *
 * @file SSI_InterruptRegisterIRQVector.c
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
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/SSI_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Dependencies.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/SSI_InterruptRoutine.h>

void SSI__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),SSI_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_SSI0;
    uint32_t u32Module = 0UL;
    const SCB_nVECISR SCB_enVECISR_SSI[(uint32_t) SSI_enMODULE_MAX]=
    {
        SCB_enVECISR_SSI0, SCB_enVECISR_SSI1, SCB_enVECISR_SSI2, SCB_enVECISR_SSI3,
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);
        enVector = SCB_enVECISR_SSI[u32Module];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler,
                                       SSI__pvfGetIRQVectorHandlerPointer((SSI_nMODULE) u32Module),
                                        enVector);
    }
}
