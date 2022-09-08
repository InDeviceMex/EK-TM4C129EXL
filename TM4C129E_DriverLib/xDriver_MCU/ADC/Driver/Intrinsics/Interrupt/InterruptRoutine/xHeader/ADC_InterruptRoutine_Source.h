/**
 *
 * @file ADC_InterruptRoutine_Source.h
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
 * @verbatim 19 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ADC_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ADC_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_pvfIRQSourceHandler_t ADC_SW__pvfGetIRQSourceHandler(ADC_nMODULE enModuleArg,
                                                         ADC_nSEQUENCER enSequencerArg);
ADC_pvfIRQSourceHandler_t* ADC_SW__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enModuleArg,
                                                                 ADC_nSEQUENCER enSequencerArg);

ADC_pvfIRQSourceHandler_t ADC_Sequencer__pvfGetIRQSourceHandler(ADC_nMODULE enModuleArg,
                                                             ADC_nSEQUENCER enSequencerArg,
                                                             ADC_nINT_TYPE enIntTypeArg);
ADC_pvfIRQSourceHandler_t* ADC_Sequencer__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enModuleArg,
                                                                     ADC_nSEQUENCER enSequencerArg,
                                                                     ADC_nINT_TYPE enIntTypeArg);

ADC_pvfIRQSourceHandler_t ADC_Comparator__pvfGetIRQSourceHandler(ADC_nMODULE enModuleArg,
                                                             ADC_nSEQUENCER enSequencerArg,
                                                             ADC_nCOMPARATOR enComparatorArg);
ADC_pvfIRQSourceHandler_t* ADC_Comparator__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enModuleArg,
                                                                     ADC_nSEQUENCER enSequencerArg,
                                                                     ADC_nCOMPARATOR enComparatorArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ADC_INTERRUPTROUTINE_SOURCE_H_ */
