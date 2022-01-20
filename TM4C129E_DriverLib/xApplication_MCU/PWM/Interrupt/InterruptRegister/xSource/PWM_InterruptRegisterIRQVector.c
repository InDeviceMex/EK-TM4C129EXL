/**
 *
 * @file PWM_InterruptRegisterIRQVector.c
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
 * @verbatim 9 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/PWM/Interrupt/InterruptRegister/xHeader/PWM_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/PWM/Interrupt/InterruptRoutine/PWM_InterruptRoutine.h>
#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

void PWM_Generator__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), PWM_nMODULE enModule,
                                    PWM_nGENERATOR enGenerator)
{
    SCB_nVECISR enVector = SCB_enVECISR_PWM0GEN0;
    uint32_t u32Module = 0UL;
    uint32_t u32Generator = 0UL;

    const SCB_nVECISR SCB_enVECISR_PWM[(uint32_t)PWM_enMODULE_MAX][(uint32_t)PWM_enGEN_MAX] =
    {
        { SCB_enVECISR_PWM0GEN0, SCB_enVECISR_PWM0GEN1,
          SCB_enVECISR_PWM0GEN2, SCB_enVECISR_PWM0GEN3},
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
        u32Generator = MCU__u32CheckParams((uint32_t) enGenerator, (uint32_t) PWM_enGEN_MAX);
        enVector = SCB_enVECISR_PWM[u32Module][u32Generator];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler,
           PWM_Generator__pvfGetIRQVectorHandlerPointer((PWM_nMODULE) u32Module,
                                              (PWM_nGENERATOR) u32Generator),
            enVector);
    }
}

void PWM_Fault__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), PWM_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_PWM0FAULT;
    uint32_t u32Module = 0UL;

    const SCB_nVECISR SCB_enVECISR_PWM[(uint32_t)PWM_enMODULE_MAX] =
    {
        SCB_enVECISR_PWM0FAULT
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
        enVector = SCB_enVECISR_PWM[u32Module];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler,
           PWM_Fault__pvfGetIRQVectorHandlerPointer((PWM_nMODULE) u32Module),
            enVector);
    }
}

