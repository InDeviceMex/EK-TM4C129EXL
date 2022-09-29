/**
 *
 * @file PWM_Fault_Input.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_INPUT_H_
#define XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_INPUT_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Fault__vSetInputSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_INPUT enFaultInputSource);
void PWM_Fault__vEnableInputSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_INPUT enFaultInputSource,
                                PWM_nSTATE enFaultInputEnable);
PWM_nFAULT_INPUT PWM_Fault__enGetInputSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

void PWM_Fault__vSetInputSenseValue(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nFAULT_INPUT enFaultInputSource,
                                    PWM_nLEVEL enFaultInputSense);
PWM_nLEVEL PWM_Fault__enGetInputSenseValue(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                                       PWM_nFAULT_INPUT enFaultInputSource);

void PWM_Fault__vClearInputStatus(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_INPUT enFaultInputSource);
PWM_nFAULT_INPUT PWM_Fault__enGetInputStatus(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                             PWM_nFAULT_INPUT enFaultInputSource);

#endif /* XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_INPUT_H_ */
