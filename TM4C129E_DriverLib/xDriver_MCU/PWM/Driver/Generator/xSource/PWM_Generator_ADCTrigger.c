/**
 *
 * @file PWM_Generator_ADCTrigger.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_ADCTrigger.h>

#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Generator__vSetADCTrigger(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg, PWM_nGENERATOR_ENABLE enEnableArg)
{
    uint32_t u32BitOffset = 0UL;

    u32BitOffset = PWM_GEN_INTEN_R_TRCNTZERO_BIT;
    u32BitOffset += (uint32_t) enEventArg;
    PWM_Generator__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_INTEN_OFFSET,
                               (uint32_t) enEnableArg, PWM_GEN_INTEN_TRCNTZERO_MASK, u32BitOffset);
}

PWM_nGENERATOR_ENABLE PWM_Generator__enGetADCTrigger(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg)
{
    PWM_nGENERATOR_ENABLE enEnableReg = PWM_enGENERATOR_ENABLE_DIS;
    uint32_t u32BitOffset = 0UL;

    u32BitOffset = PWM_GEN_INTEN_R_TRCNTZERO_BIT;
    u32BitOffset += (uint32_t) enEventArg;
    enEnableReg = (PWM_nGENERATOR_ENABLE) PWM_Generator__u32GetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_INTEN_OFFSET,
                                                             PWM_GEN_INTEN_TRCNTZERO_MASK, u32BitOffset);
    return (enEnableReg);
}
