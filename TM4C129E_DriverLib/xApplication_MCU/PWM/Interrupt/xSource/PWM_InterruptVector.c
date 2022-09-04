/**
 *
 * @file PWM_InterruptVector.c
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
#include <xApplication_MCU/PWM/Interrupt/xHeader/PWM_InterruptVector.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

static NVIC_nVECTOR PWM_Generator__enGetInterruptVector(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);
static NVIC_nVECTOR PWM_Fault__enGetInterruptVector(PWM_nMODULE enModule);

static NVIC_nVECTOR PWM_Generator__enGetInterruptVector(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{

    NVIC_nVECTOR enVector = NVIC_enVECTOR_PWM0GEN0;
    uint32_t u32Module = 0UL;
    uint32_t u32Generator = 0UL;
    NVIC_nVECTOR NVIC_VECTOR_PWM[(uint32_t) PWM_enMODULE_MAX][(uint32_t) PWM_enGEN_MAX] =
    {
        { NVIC_enVECTOR_PWM0GEN0, NVIC_enVECTOR_PWM0GEN1,
          NVIC_enVECTOR_PWM0GEN2, NVIC_enVECTOR_PWM0GEN3},
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32Generator = MCU__u32CheckParams((uint32_t) enGenerator, (uint32_t) PWM_enGEN_MAX);
    enVector = NVIC_VECTOR_PWM[u32Module][u32Generator];
    return (enVector);
}

static NVIC_nVECTOR PWM_Fault__enGetInterruptVector(PWM_nMODULE enModule)
{

    NVIC_nVECTOR enVector = NVIC_enVECTOR_PWM0FAULT;
    uint32_t u32Module = 0UL;
    NVIC_nVECTOR NVIC_VECTOR_PWM[(uint32_t) PWM_enMODULE_MAX] =
    {
         NVIC_enVECTOR_PWM0FAULT
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    enVector = NVIC_VECTOR_PWM[u32Module];
    return (enVector);
}

void PWM_Generator__vEnInterruptVector(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nPRIORITY enPWMPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_PWM0GEN0;
    enVector = PWM_Generator__enGetInterruptVector(enModule, enGenerator);
    NVIC__enEnableVector(NVIC_enMODULE_0, enVector, (NVIC_nPRIORITY) enPWMPriority);
}

void PWM_Generator__vDisInterruptVector(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_PWM0GEN0;
    enVector = PWM_Generator__enGetInterruptVector(enModule, enGenerator);
    NVIC__enDisableVector(NVIC_enMODULE_0, enVector);
}

void PWM_Fault__vEnInterruptVector(PWM_nMODULE enModule, PWM_nPRIORITY enPWMPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_PWM0FAULT;
    enVector = PWM_Fault__enGetInterruptVector(enModule);
    NVIC__enEnableVector(NVIC_enMODULE_0, enVector, (NVIC_nPRIORITY) enPWMPriority);
}

void PWM_Fault__vDisInterruptVector(PWM_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_PWM0FAULT;
    enVector = PWM_Fault__enGetInterruptVector(enModule);
    NVIC__enDisableVector(NVIC_enMODULE_0, enVector);
}
