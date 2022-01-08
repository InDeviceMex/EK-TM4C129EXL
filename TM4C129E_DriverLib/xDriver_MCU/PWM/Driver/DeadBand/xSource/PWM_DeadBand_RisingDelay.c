/**
 *
 * @file PWM_DeadBand_RisingDelay.c
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
#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_RisingDelay.h>

#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_DeadBand__vSetRisingDelay(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               uint32_t u32RisingDelayArg)
{
    PWM_DeadBand__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_DBRISE_OFFSET,
                                       u32RisingDelayArg,
                                       PWM_GEN_DBRISE_RISEDELAY_MASK,
                                       PWM_GEN_DBRISE_R_RISEDELAY_BIT);
}

uint32_t PWM_DeadBand__u32GetRisingDelay(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32RisingDelayReg = 0UL;
    u32RisingDelayReg = PWM_DeadBand__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_DBRISE_OFFSET,
                                       PWM_GEN_DBRISE_RISEDELAY_MASK,
                                       PWM_GEN_DBRISE_R_RISEDELAY_BIT);
    return (u32RisingDelayReg);
}
