/**
 *
 * @file PWM_Compare.h
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
 * @verbatim 27 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_PWM_XHEADER_PWM_COMPARE_H_
#define XAPPLICATION_MCU_PWM_XHEADER_PWM_COMPARE_H_

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Defines.h>

void PWM_Generator__vSetCompareAPercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32CompareArg);
uint32_t PWM_Generator__u32GetCompareAPercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

void PWM_Generator__vSetCompareBPercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32CompareArg);
uint32_t PWM_Generator__u32GetCompareBPercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

void PWM_Generator__vSetComparePercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, uint32_t u32CompareArg);
uint32_t PWM_Generator__u32GetComparePercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg);

#endif /* XAPPLICATION_MCU_PWM_XHEADER_PWM_COMPARE_H_ */
