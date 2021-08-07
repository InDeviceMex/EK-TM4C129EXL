/**
 *
 * @file ADC_Comparator_ResetTrigger.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RESET_XHEADER_ADC_COMPARATOR_RESETTRIGGER_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RESET_XHEADER_ADC_COMPARATOR_RESETTRIGGER_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vResetCompTriggerConditions(ADC_nMODULE enModule, ADC_nCOMPMASK  enActCompMask);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RESET_XHEADER_ADC_COMPARATOR_RESETTRIGGER_H_ */
