/**
 *
 * @file ADC_Sample_Operation.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_OPERATION_H_
#define XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_OPERATION_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Sample__enSetOperationModeByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                ADC_nSAMPLE enSampleArg, ADC_nSAMPLE_MODE enOperationModeArg);
ADC_nERROR ADC_Sample__enSetOperationModeByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSAMPLE_MODE enOperationModeArg);

ADC_nERROR ADC_Sample__enGetOperationModeByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSAMPLE_MODE* penOperationModeArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_OPERATION_H_ */
