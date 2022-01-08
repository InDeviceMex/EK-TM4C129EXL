/**
 *
 * @file PWM_DeadBand_FallingDelay.c
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
#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_FallingDelay.h>

#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_DeadBand__vSetFallingDelay(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               uint32_t u32FallingDelayArg)
{
    PWM_DeadBand__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_DBFALL_OFFSET,
                                       u32FallingDelayArg,
                                       PWM_GEN_DBFALL_FALLDELAY_MASK,
                                       PWM_GEN_DBFALL_R_FALLDELAY_BIT);
}

uint32_t PWM_DeadBand__u32GetFallingDelay(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32FallingDelayReg = 0UL;
    u32FallingDelayReg = PWM_DeadBand__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_DBFALL_OFFSET,
                                       PWM_GEN_DBFALL_FALLDELAY_MASK,
                                       PWM_GEN_DBFALL_R_FALLDELAY_BIT);
    return (u32FallingDelayReg);
}




