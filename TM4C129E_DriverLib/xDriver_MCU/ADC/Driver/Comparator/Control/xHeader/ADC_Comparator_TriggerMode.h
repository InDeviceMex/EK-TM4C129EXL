/**
 *
 * @file ADC_Comparator_TriggerMode.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 5 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_TRIGGERMODE_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_TRIGGERMODE_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Comparator__enSetTriggerModeByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                         ADC_nCOMP_MODE enTriggerModeArg);
ADC_nERROR ADC_Comparator__enSetTriggerModeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                    ADC_nCOMP_MODE enTriggerModeArg);
ADC_nERROR ADC_Comparator__enGetTriggerModeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nCOMP_MODE* penTriggerModeArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_TRIGGERMODE_H_ */
