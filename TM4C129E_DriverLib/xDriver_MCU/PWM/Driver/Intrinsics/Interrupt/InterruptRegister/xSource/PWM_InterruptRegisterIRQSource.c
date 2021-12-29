/**
 *
 * @file PWM_InterruptRegisterIRQSource.c
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
 * @verbatim 28 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/PWM_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/PWM_InterruptRoutine_Source.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Fault__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                           PWM_nMODULE enModule,
                                           PWM_nFAULT enFaultArg,
                                           PWM_nFAULT_INTERRUPT enFaultIntSourceArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32FaultReg = 0UL;
    uint32_t u32FaultIntSourceReg = 0UL;

    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,
                                         (uint32_t) PWM_enMODULE_MAX);
        u32FaultReg = MCU__u32CheckParams( (uint32_t) enFaultArg,
                                            (uint32_t) PWM_enFAULT_MAX);
        u32FaultIntSourceReg = MCU__u32CheckParams( (uint32_t) enFaultIntSourceArg,
                                               (uint32_t) PWM_enFAULT_INTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                   PWM_Fault__pvfGetIRQSourceHandlerPointer((PWM_nMODULE) u32Module,
                                                             (PWM_nFAULT) u32FaultReg,
                                                             (PWM_nFAULT_INTERRUPT) u32FaultIntSourceReg),
                   0UL,
                   1UL);
    }
}

void PWM_Generator__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                           PWM_nMODULE enModule,
                                           PWM_nGENERATOR enGeneratorArg,
                                           PWM_nGEN_INTERRUPT enGeneratorIntSourceArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    uint32_t u32GeneratorIntSourceReg = 0UL;

    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,
                                         (uint32_t) PWM_enMODULE_MAX);
        u32GeneratorReg = MCU__u32CheckParams( (uint32_t) enGeneratorArg,
                                            (uint32_t) PWM_enGEN_MAX);
        u32GeneratorIntSourceReg = MCU__u32CheckParams( (uint32_t) enGeneratorIntSourceArg,
                                               (uint32_t) PWM_enGEN_INTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                   PWM_Generator__pvfGetIRQSourceHandlerPointer((PWM_nMODULE) u32Module,
                                                             (PWM_nGENERATOR) u32GeneratorReg,
                                                             (PWM_nGEN_INTERRUPT) u32GeneratorIntSourceReg),
                   0UL,
                   1UL);
    }
}
