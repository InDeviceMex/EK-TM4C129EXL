/**
 *
 * @file PWM_DeadBand_Enable.c
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
#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_Enable.h>

#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_DeadBand__vSetEnable(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nDEADBAND_ENABLE enEnableArg)
{
    PWM_DeadBand__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_DBCTL_OFFSET,
                                       (uint32_t) enEnableArg,
                                       PWM_GEN_DBCTL_ENABLE_MASK,
                                       PWM_GEN_DBCTL_R_ENABLE_BIT);
}

PWM_nDEADBAND_ENABLE PWM_DeadBand__enGetEnable(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nDEADBAND_ENABLE enEnableReg = PWM_enDEADBAND_ENABLE_DIS;
    enEnableReg = (PWM_nDEADBAND_ENABLE) PWM_DeadBand__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_DBCTL_OFFSET,
                                       PWM_GEN_DBCTL_ENABLE_MASK,
                                       PWM_GEN_DBCTL_R_ENABLE_BIT);
    return (enEnableReg);
}
