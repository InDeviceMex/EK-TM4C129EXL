/**
 *
 * @file ADC_Comparator_ResetInterrupt.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RESET_XHEADER_ADC_COMPARATOR_RESETINTERRUPT_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RESET_XHEADER_ADC_COMPARATOR_RESETINTERRUPT_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Comparator__enResetInterruptConditionsByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg);
ADC_nERROR ADC_Comparator__enResetInterruptConditionsByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RESET_XHEADER_ADC_COMPARATOR_RESETINTERRUPT_H_ */
