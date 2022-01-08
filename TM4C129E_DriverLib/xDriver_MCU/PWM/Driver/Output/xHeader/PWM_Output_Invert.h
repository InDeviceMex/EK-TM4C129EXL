/**
 *
 * @file PWM_Output_Invert.h
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_INVERT_H_
#define XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_INVERT_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Output__vSetInvert(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                            PWM_nOUTPUT enOutputArg, PWM_nOUTPUT_ENABLE enInvertArg);
PWM_nOUTPUT PWM_Output__enGetInvert(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                                                                         PWM_nOUTPUT enOutputArg);
void PWM_Output__vSetInvertByNumber(PWM_nMODULE enModule, PWM_nOUTPUT_NUMBER enOutputNumberArg,
                            PWM_nOUTPUT_ENABLE enInvertArg);
PWM_nOUTPUT_NUMBER PWM_Output__enGetInvertByNumber(PWM_nMODULE enModule, PWM_nOUTPUT_NUMBER enOutputNumberArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_INVERT_H_ */
