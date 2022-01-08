/**
 *
 * @file PWM_Fault_MinimumPeriod.c
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
 * @verbatim 8 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_MinimumPeriod.h>

#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Fault__vSetMinimumPeriod(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32MinimumPeriodArg)
{
    PWM_Fault__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_MINFLTPER_OFFSET,
                               u32MinimumPeriodArg, PWM_GEN_MINFLTPER_MFP_MASK, PWM_GEN_MINFLTPER_R_MFP_BIT);
}

uint32_t PWM_Fault__u32GetMinimumPeriod(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32MinimumPeriodReg = 0UL;
    u32MinimumPeriodReg = PWM_Fault__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_MINFLTPER_OFFSET,
                                       PWM_GEN_MINFLTPER_MFP_MASK,
                                       PWM_GEN_MINFLTPER_R_MFP_BIT);
    return (u32MinimumPeriodReg);
}

void PWM_Fault__vSetEnableMinimumPeriod(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                        PWM_nFAULT_MINPERIOD_ENABLE enEnableArg)
{
    PWM_Fault__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_CTL_OFFSET,
                           (uint32_t) enEnableArg,
                           PWM_GEN_CTL_MINFLTPER_MASK,
                           PWM_GEN_CTL_R_MINFLTPER_BIT);
}

PWM_nFAULT_MINPERIOD_ENABLE PWM_Fault__enGetEnableMinimumPeriod(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nFAULT_MINPERIOD_ENABLE enEnableReg = PWM_enFAULT_MINPERIOD_ENABLE_DIS;
    enEnableReg = (PWM_nFAULT_MINPERIOD_ENABLE) PWM_Fault__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_MINFLTPER_MASK,
                                       PWM_GEN_CTL_R_MINFLTPER_BIT);
    return (enEnableReg);
}
