/**
 *
 * @file ADC_Sample_InputSelection.h
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
 * @verbatim 23 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_INPUTSELECTION_H_
#define XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_INPUTSELECTION_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Sample__enSetInputByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                ADC_nSAMPLE enSampleArg, ADC_nINPUT enInputArg);
ADC_nERROR ADC_Sample__enSetInputByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nINPUT enInputArg);
ADC_nERROR ADC_Sample__enGetInputByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nINPUT* penInputArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_INPUTSELECTION_H_ */
