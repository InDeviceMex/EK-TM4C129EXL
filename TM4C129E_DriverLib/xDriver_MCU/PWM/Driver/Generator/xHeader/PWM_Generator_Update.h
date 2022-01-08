/**
 *
 * @file PWM_Generator_Update.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_UPDATE_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_UPDATE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Generator__vSetLoadUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enLoadUpdateArg);
PWM_nGENERATOR_UPDATE PWM_Generator__enGetLoadUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

void PWM_Generator__vSetCompareAUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enCompareUpdateArg);
PWM_nGENERATOR_UPDATE PWM_Generator__enGetCompareAUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);
void PWM_Generator__vSetCompareBUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enCompareUpdateArg);
PWM_nGENERATOR_UPDATE PWM_Generator__enGetCompareBUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);
void PWM_Generator__vSetCompareUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, PWM_nGENERATOR_UPDATE enCompareUpdateArg);
PWM_nGENERATOR_UPDATE PWM_Generator_enGetCompareUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg);

void PWM_Generator__vSetActionAUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enActionUpdateArg);
PWM_nGENERATOR_UPDATE PWM_Generator__enGetActionAUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);
void PWM_Generator__vSetActionBUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enActionUpdateArg);
PWM_nGENERATOR_UPDATE PWM_Generator__enGetActionBUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);
void PWM_Generator__vSetActionUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, PWM_nGENERATOR_UPDATE enActionUpdateArg);
PWM_nGENERATOR_UPDATE PWM_Generator_enGetActionUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_UPDATE_H_ */
