/**
 *
 * @file ADC_Sequencer_Enable.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_ENABLE_H_
#define XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_ENABLE_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC_Sequencer__vSetEnable(ADC_nMODULE enModule,
                              ADC_nSEQMASK enSequence,
                              ADC_nSEQ_ENABLE enSeqEnable);
ADC_nSEQ_ENABLE ADC_Sequencer__enGetEnable(ADC_nMODULE enModule,
                                          ADC_nSEQMASK enSequence);

void ADC_Sequencer__vSetDMAEnable(ADC_nMODULE enModule,
                        ADC_nSEQMASK enSequence,
                        ADC_nDMA_ENABLE enSeqDMAEnable);
ADC_nDMA_ENABLE ADC_Sequencer__enGetDMAEnable(ADC_nMODULE enModule,
                                    ADC_nSEQMASK enSequence);

#endif /* XDRIVER_MCU_ADC_DRIVER_SEQUENCER_XHEADER_ADC_SEQUENCER_ENABLE_H_ */
