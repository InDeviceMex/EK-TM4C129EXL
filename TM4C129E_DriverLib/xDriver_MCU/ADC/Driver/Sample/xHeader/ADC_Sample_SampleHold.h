/**
 *
 * @file ADC_Sample_SampleHold.h
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
 * @verbatim 6 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_SAMPLEHOLD_H_
#define XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_SAMPLEHOLD_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetSampleSampleHold(ADC_nMODULE enModule,
                               ADC_nSEQUENCER enSequencer,
                               ADC_nMUX enMux,
                               ADC_nSEQ_SAMPLE_HOLD enSampleSampleHold);
ADC_nSEQ_SAMPLE_HOLD ADC__enGetSampleSampleHold(ADC_nMODULE enModule,
                                                ADC_nSEQUENCER enSequencer,
                                                ADC_nMUX enMux);

#endif /* XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_SAMPLEHOLD_H_ */
