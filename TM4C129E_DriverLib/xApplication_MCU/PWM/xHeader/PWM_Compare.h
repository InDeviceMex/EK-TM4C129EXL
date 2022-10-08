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

PWM_nERROR PWM_Generator__enSetComparePorcentageByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, UBase_t uxPorcentageArg);
PWM_nERROR PWM_Generator__enSetComparePorcentageByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg, UBase_t uxPorcentageArg);

PWM_nERROR PWM_Generator__enGetComparePorcentageByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, UBase_t* puxPorcentageArg);

#endif /* XAPPLICATION_MCU_PWM_XHEADER_PWM_COMPARE_H_ */
