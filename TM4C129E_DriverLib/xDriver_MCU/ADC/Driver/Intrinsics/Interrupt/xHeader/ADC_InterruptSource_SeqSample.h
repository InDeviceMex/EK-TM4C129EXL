/**
 *
 * @file ADC_InterruptSource_SeqSample.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQSAMPLE_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQSAMPLE_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vEnSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput);
void ADC__vDisSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput);
ADC_nSEQ_INPUT_INT ADC__enGetSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQSAMPLE_H_ */
