/**
 *
 * @file PWM_Generator_Enable.c
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
 * @verbatim 7 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Enable.h>

#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Generator__vSetEnable(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nGENERATOR_ENABLE enEnableArg)
{
    PWM_Generator__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       (uint32_t) enEnableArg,
                                       PWM_GEN_CTL_ENABLE_MASK,
                                       PWM_GEN_CTL_R_ENABLE_BIT);
}

PWM_nGENERATOR_ENABLE PWM_Generator__enGetEnable(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nGENERATOR_ENABLE enEnableReg = PWM_enGENERATOR_ENABLE_DIS;
    enEnableReg = (PWM_nGENERATOR_ENABLE) PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_ENABLE_MASK,
                                       PWM_GEN_CTL_R_ENABLE_BIT);
    return (enEnableReg);
}
