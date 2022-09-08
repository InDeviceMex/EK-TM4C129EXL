/**
 *
 * @file ADC_InterruptSource_Sequencer.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQUENCER_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQUENCER_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Sequencer__enSetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATE enStateArg);
ADC_nERROR ADC_Sequencer__enSetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                            ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATE enStateArg);

ADC_nERROR ADC_Sequencer__enGetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg);
ADC_nERROR ADC_Sequencer__enGetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                            ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATE* penStateArg);

ADC_nERROR ADC_Sequencer__enEnableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                        ADC_nINT_TYPE enInterruptTypeArg);
ADC_nERROR ADC_Sequencer__enEnableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg);

ADC_nERROR ADC_Sequencer__enDisableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                         ADC_nINT_TYPE enInterruptTypeArg);
ADC_nERROR ADC_Sequencer__enDisableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                           ADC_nINT_TYPE enInterruptTypeArg);

ADC_nERROR ADC_Sequencer__enClearInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                       ADC_nINT_TYPE enInterruptTypeArg);
ADC_nERROR ADC_Sequencer__enClearInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                               ADC_nINT_TYPE enInterruptTypeArg);

ADC_nERROR ADC_Sequencer__enStatusInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                        ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg);
ADC_nERROR ADC_Sequencer__enStatusInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATUS* penStatusArg);

ADC_nERROR ADC_Sequencer__enStatusMaskedInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                    ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg);
ADC_nERROR ADC_Sequencer__enStatusMaskedInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                                ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQUENCER_H_ */
