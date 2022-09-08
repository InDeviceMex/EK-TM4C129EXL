/**
 *
 * @file ADC_Sample_TempSelection.h
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
 * @verbatim 24 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_TEMPSELECTION_H_
#define XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_TEMPSELECTION_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Sample__enSetTempSelectionByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                ADC_nSAMPLE enSampleArg, ADC_nSTATE enStateArg);
ADC_nERROR ADC_Sample__enSetTempSelectionByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSTATE enStateArg);

ADC_nERROR ADC_Sample__enGetTempSelectionByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_TEMPSELECTION_H_ */
