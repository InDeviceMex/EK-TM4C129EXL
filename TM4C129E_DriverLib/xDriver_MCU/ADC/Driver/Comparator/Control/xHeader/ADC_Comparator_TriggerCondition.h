/**
 *
 * @file ADC_Comparator_TriggerCondition.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_TRIGGERCONDITION_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_TRIGGERCONDITION_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetCompTriggerCondition(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp, ADC_nCOMP_TRIGGER_COND enActCompTriggerCondition);
ADC_nCOMP_TRIGGER_COND ADC__enGetCompTriggerCondition(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_TRIGGERCONDITION_H_ */
