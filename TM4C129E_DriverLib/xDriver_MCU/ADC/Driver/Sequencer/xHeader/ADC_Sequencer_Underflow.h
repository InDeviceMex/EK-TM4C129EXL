/**
 *
 * @file ADC_Sequencer_Underflow.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_UNDERFLOW_H_
#define XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_UNDERFLOW_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Sequencer__enClearUnderflowByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg);
ADC_nERROR ADC_Sequencer__enClearUnderflowByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg);

ADC_nERROR ADC_Sequencer__enGetUnderflowByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                              ADC_nSEQMASK* penStatusArg);
ADC_nERROR ADC_Sequencer__GetUnderflowByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                              ADC_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_UNDERFLOW_H_ */
