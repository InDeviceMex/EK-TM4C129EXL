/**
 *
 * @file PWM_DeadBand_Update.c
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
#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_Update.h>

#include <xDriver_MCU/PWM/Driver/DeadBand/xHeader/PWM_DeadBand_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_DeadBand__vSetEnableUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nDEADBAND_UPDATE enEnableUpdateArg)
{
    PWM_DeadBand__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       (uint32_t) enEnableUpdateArg,
                                       PWM_GEN_CTL_DBCTLUPD_MASK,
                                       PWM_GEN_CTL_R_DBCTLUPD_BIT);
}

PWM_nDEADBAND_UPDATE PWM_DeadBand__enGetEnableUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nDEADBAND_UPDATE enEnableUpdateReg = PWM_enDEADBAND_UPDATE_IMMEDIATE;
    enEnableUpdateReg = (PWM_nDEADBAND_UPDATE) PWM_DeadBand__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_DBCTLUPD_MASK,
                                       PWM_GEN_CTL_R_DBCTLUPD_BIT);
    return (enEnableUpdateReg);
}

void PWM_DeadBand__vSetRisingDelayUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nDEADBAND_UPDATE enRisingDelayUpdateArg)
{
    PWM_DeadBand__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       (uint32_t) enRisingDelayUpdateArg,
                                       PWM_GEN_CTL_DBRISEUPD_MASK,
                                       PWM_GEN_CTL_R_DBRISEUPD_BIT);
}

PWM_nDEADBAND_UPDATE PWM_DeadBand__enGetRisingDelayUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nDEADBAND_UPDATE enRisingDelayUpdateReg = PWM_enDEADBAND_UPDATE_IMMEDIATE;
    enRisingDelayUpdateReg = (PWM_nDEADBAND_UPDATE) PWM_DeadBand__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_DBRISEUPD_MASK,
                                       PWM_GEN_CTL_R_DBRISEUPD_BIT);
    return (enRisingDelayUpdateReg);
}

void PWM_DeadBand__vSetFallingDelayUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nDEADBAND_UPDATE enFallingDelayUpdateArg)
{
    PWM_DeadBand__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       (uint32_t) enFallingDelayUpdateArg,
                                       PWM_GEN_CTL_DBFALLUPD_MASK,
                                       PWM_GEN_CTL_R_DBFALLUPD_BIT);
}

PWM_nDEADBAND_UPDATE PWM_DeadBand__enGetFallingDelayUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nDEADBAND_UPDATE enFallingDelayUpdateReg = PWM_enDEADBAND_UPDATE_IMMEDIATE;
    enFallingDelayUpdateReg = (PWM_nDEADBAND_UPDATE) PWM_DeadBand__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_DBFALLUPD_MASK,
                                       PWM_GEN_CTL_R_DBFALLUPD_BIT);
    return (enFallingDelayUpdateReg);
}
