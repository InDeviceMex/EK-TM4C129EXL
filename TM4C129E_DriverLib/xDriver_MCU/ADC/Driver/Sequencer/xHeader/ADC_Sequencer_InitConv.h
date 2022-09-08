/**
 *
 * @file ADC_Sequencer_InitConv.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_INITCONV_H_
#define XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_INITCONV_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Sequencer__enInitConversionByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg);
ADC_nERROR ADC_Sequencer__enInitConversionByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_INITCONV_H_ */
