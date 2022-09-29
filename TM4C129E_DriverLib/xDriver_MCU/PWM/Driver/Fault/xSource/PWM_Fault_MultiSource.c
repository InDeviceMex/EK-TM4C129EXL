/**
 *
 * @file PWM_Fault_MultiSource.c
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
 * @verbatim 25 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_MultiSource.h>

#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Fault__vSetMultiSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                        PWM_nSTATE enEnableArg)
{
    PWM_Fault__vSetGeneric((uint32_t) enModule,
                           (uint32_t) enGenerator,
                           PWM_GEN_CTL_OFFSET,
                           (uint32_t) enEnableArg,
                           PWM_GEN_CTL_FLTSRC_MASK,
                           PWM_GEN_CTL_R_FLTSRC_BIT);
}

PWM_nSTATE PWM_Fault__enGetMultiSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nSTATE enEnableReg = PWM_enSTATE_DIS;
    enEnableReg = (PWM_nSTATE) PWM_Fault__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_FLTSRC_MASK,
                                       PWM_GEN_CTL_R_FLTSRC_BIT);
    return (enEnableReg);
}
