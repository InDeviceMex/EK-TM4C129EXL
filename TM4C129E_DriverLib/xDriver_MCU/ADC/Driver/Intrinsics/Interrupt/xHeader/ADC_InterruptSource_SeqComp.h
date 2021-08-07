/**
 *
 * @file ADC_InterruptSource_SeqComp.h
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQCOMP_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQCOMP_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vEnInterruptComp(ADC_nMODULE enModule, ADC_nCOMPARATOR  enSeqComparator);
void ADC__vDisInterruptComp(ADC_nMODULE enModule, ADC_nCOMPARATOR  enSeqComparator);
void ADC__vClearInterruptComp(ADC_nMODULE enModule, ADC_nCOMPARATOR  enSeqComparator);
ADC_nCOMP_INT_STATUS ADC__enStatusInterruptComp(ADC_nMODULE enModule, ADC_nCOMPARATOR  enSeqComparator);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQCOMP_H_ */
