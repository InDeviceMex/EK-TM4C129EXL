/**
 *
 * @file PWM_Generator_Load.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Load.h>

#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Generator__vSetLoad(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32LoadArg)
{
    PWM_Generator__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_LOAD_OFFSET,
                               u32LoadArg, PWM_GEN_LOAD_LOAD_MASK, PWM_GEN_LOAD_R_LOAD_BIT);
}

uint32_t PWM_Generator__u32GetLoad(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32LoadReg = 0UL;
    u32LoadReg = PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_LOAD_OFFSET,
                                       PWM_GEN_LOAD_LOAD_MASK,
                                       PWM_GEN_LOAD_R_LOAD_BIT);
    return (u32LoadReg);
}

