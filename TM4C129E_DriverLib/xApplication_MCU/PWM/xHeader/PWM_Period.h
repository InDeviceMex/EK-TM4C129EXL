/**
 *
 * @file PWM_Period.h
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

#ifndef XAPPLICATION_MCU_PWM_XHEADER_PWM_PERIOD_H_
#define XAPPLICATION_MCU_PWM_XHEADER_PWM_PERIOD_H_

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Defines.h>

PWM_nERROR PWM_Generator__enSetPeriod_us(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                             UBase_t uxPeriodArg);
PWM_nERROR PWM_Generator__enGetPeriod_us(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t* puxPeriodArg);


#endif /* XAPPLICATION_MCU_PWM_XHEADER_PWM_PERIOD_H_ */
