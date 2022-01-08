/**
 *
 * @file PWM_Output_Update.h
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
 * @verbatim 6 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_UPDATE_H_
#define XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_UPDATE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Output__vSetEnableUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                            PWM_nOUTPUT enOutputArg, PWM_nOUTPUT_UPDATE enOutputUpdateArg);
PWM_nOUTPUT_UPDATE PWM_Output__enGetEnableUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                           PWM_nOUTPUT enOutputArg);


#endif /* XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_UPDATE_H_ */
