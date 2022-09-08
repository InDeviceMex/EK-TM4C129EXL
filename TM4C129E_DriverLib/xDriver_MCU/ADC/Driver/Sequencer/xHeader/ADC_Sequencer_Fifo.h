/**
 *
 * @file ADC_Sequencer_Fifo.h
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
 * @verbatim 7 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_FIFO_H_
#define XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_FIFO_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Sequencer__enGetFifoStatusByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nFIFO* penFifoStatusArg);
ADC_nERROR ADC_Sequencer__enGetFifoHeadByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                uint32_t* pu32FifoHeadArg);
ADC_nERROR ADC_Sequencer__enGetFifoTailByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                uint32_t* pu32FifoTailArg);
ADC_nERROR ADC_Sequencer__enGetFifoDataByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                uint32_t* pu32FifoDataArg);
ADC_nERROR ADC_Sequencer__enGetAllFifoDataByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                   uint32_t* pu32FifoDataArg, uint32_t* pu32NumberArg);




#endif /* XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_FIFO_H_ */
