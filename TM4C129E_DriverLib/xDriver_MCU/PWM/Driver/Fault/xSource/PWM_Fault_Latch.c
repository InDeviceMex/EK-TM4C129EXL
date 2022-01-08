/**
 *
 * @file PWM_Fault_Latch.c
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
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Latch.h>

#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Fault__vSetLatch(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nFAULT_LATCH_ENABLE enLatchArg)
{
    PWM_Fault__vSetGeneric((uint32_t) enModule,
                           (uint32_t) enGenerator,
                           PWM_GEN_CTL_OFFSET,
                           (uint32_t) enLatchArg,
                           PWM_GEN_CTL_LATCH_MASK,
                           PWM_GEN_CTL_R_LATCH_BIT);
}

PWM_nFAULT_LATCH_ENABLE PWM_Fault__enGetLatch(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nFAULT_LATCH_ENABLE enLatchReg = PWM_enFAULT_LATCH_ENABLE_DIS;
    enLatchReg = (PWM_nFAULT_LATCH_ENABLE) PWM_Fault__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_LATCH_MASK,
                                       PWM_GEN_CTL_R_LATCH_BIT);
    return (enLatchReg);
}
