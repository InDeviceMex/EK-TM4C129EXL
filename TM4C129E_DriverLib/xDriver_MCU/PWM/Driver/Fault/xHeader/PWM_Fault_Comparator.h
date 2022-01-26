/**
 *
 * @file PWM_Fault_Comparator.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_COMPARATOR_H_
#define XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_COMPARATOR_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Fault__vSetDigitalComparatorSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_DCOMP enFaultDCompSource);
void PWM_Fault__vEnableDigitalComparatorSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                               PWM_nFAULT_DCOMP enFaultDCompSource,
                                               PWM_nFAULT_ENABLE enFaultDCompEnable);
PWM_nFAULT_DCOMP PWM_Fault__enGetDigitalComparatorSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

void PWM_Fault__vClearDigitalComparatorStatus(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_DCOMP enFaultDCompSource);
PWM_nFAULT_DCOMP PWM_Fault__enGetDigitalComparatorStatus(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                             PWM_nFAULT_DCOMP enFaultDCompSource);

#endif /* XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_COMPARATOR_H_ */
