/**
 *
 * @file ADC_Comparator_IntCondition.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_INTCONDITION_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_INTCONDITION_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetCompIntCondition(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp, ADC_nCOMP_INT_COND enActCompIntCondition);
ADC_nCOMP_INT_COND ADC__enGetCompIntCondition(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_INTCONDITION_H_ */
