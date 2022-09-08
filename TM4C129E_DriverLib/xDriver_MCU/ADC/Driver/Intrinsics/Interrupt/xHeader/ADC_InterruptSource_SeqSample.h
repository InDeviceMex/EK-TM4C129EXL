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

ADC_nERROR ADC_Sample__enSetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                       ADC_nSAMPLE enSampleArg, ADC_nSTATE enStateArg);
ADC_nERROR ADC_Sample__enSetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                         ADC_nSAMPLE enSampleArg, ADC_nSTATE enStateArg);

ADC_nERROR ADC_Sample__enGetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                       ADC_nSAMPLE enSampleArg, ADC_nSEQMASK* penSequencerGetArg);
ADC_nERROR ADC_Sample__enGetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                         ADC_nSAMPLE enSampleArg, ADC_nSTATE* penStateArg);

ADC_nERROR ADC_Sample__enEnableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                     ADC_nSAMPLE enSampleArg);
ADC_nERROR ADC_Sample__enEnableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                       ADC_nSAMPLE enSampleArg);
ADC_nERROR ADC_Sample__enDisableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                      ADC_nSAMPLE enSampleArg);
ADC_nERROR ADC_Sample__enDisableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                        ADC_nSAMPLE enSampleArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQSAMPLE_H_ */
