/**
 *
 * @file PWM_Generator_Count.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Count.h>

#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

uint32_t PWM_Generator__u32GetCount(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32CountReg = 0UL;
    u32CountReg = PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_COUNT_OFFSET,
                                       PWM_GEN_COUNT_COUNT_MASK,
                                       PWM_GEN_COUNT_R_COUNT_BIT);
    return (u32CountReg);
}
