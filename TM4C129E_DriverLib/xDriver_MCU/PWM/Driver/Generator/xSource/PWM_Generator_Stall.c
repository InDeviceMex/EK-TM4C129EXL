/**
 *
 * @file PWM_Generator_Stall.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Stall.h>

#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Generator__vSetStall(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nSTALL enStallArg)
{
    PWM_Generator__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       (uint32_t) enStallArg,
                                       PWM_GEN_CTL_DEBUG_MASK,
                                       PWM_GEN_CTL_R_DEBUG_BIT);
}

PWM_nSTALL PWM_Generator__enGetStall(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nSTALL enStallReg = PWM_enSTALL_FREEZE;
    enStallReg = (PWM_nSTALL) PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_DEBUG_MASK,
                                       PWM_GEN_CTL_R_DEBUG_BIT);
    return (enStallReg);
}



