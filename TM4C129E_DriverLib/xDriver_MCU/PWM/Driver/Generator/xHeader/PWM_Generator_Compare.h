/**
 *
 * @file PWM_Generator_Compare.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_COMPARE_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_COMPARE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Generator__vSetCompareA(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32CompareArg);
uint32_t PWM_Generator__u32GetCompareA(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

void PWM_Generator__vSetCompareB(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32CompareArg);
uint32_t PWM_Generator__u32GetCompareB(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

void PWM_Generator__vSetCompare(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, uint32_t u32CompareArg);
uint32_t PWM_Generator__u32GetCompare(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_COMPARE_H_ */
