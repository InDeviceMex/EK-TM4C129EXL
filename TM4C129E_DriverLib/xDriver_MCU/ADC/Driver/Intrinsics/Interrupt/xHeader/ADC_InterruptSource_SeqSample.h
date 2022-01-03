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

void ADC_Sample__vEnSeqInterrupt(ADC_nMODULE enModule,
                                ADC_nSEQUENCER  enSequencer,
                                ADC_nMUX enMuxInput);
void ADC_Sample__vEnSeqMaskInterrupt(ADC_nMODULE enModule, ADC_nSEQMASK enSequencerMask,
                                ADC_nMUX enMuxInput);
void ADC_Sample__vDisSeqInterrupt(ADC_nMODULE enModule,
                                 ADC_nSEQUENCER  enSequencer,
                                 ADC_nMUX enMuxInput);
void ADC_Sample__vDisSeqMaskInterrupt(ADC_nMODULE enModule, ADC_nSEQMASK enSequencerMask,
                                ADC_nMUX enMuxInput);
ADC_nSEQ_INPUT_INT ADC_Sample__enGetSeqInterrupt(ADC_nMODULE enModule,
                                                ADC_nSEQUENCER  enSequencer,
                                                ADC_nMUX enMuxInput);
ADC_nSEQMASK ADC_Sample__enGetSeqMaskInterrupt(ADC_nMODULE enModule,
                                                    ADC_nSEQMASK enSequencerMask,
                                                    ADC_nMUX enMuxInput);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQSAMPLE_H_ */
