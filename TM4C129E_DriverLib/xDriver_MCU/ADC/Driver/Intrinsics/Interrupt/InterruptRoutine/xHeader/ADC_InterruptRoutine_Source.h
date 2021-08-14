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

void (*ADC_Sample__pvfGetIRQSourceHandler(ADC_nMODULE enADCSubmodule,
                                          ADC_nSEQUENCER enADCSequencerNum,
                                          ADC_nINT_SOURCE enADCIntSource))(void);
void (**ADC_Sample__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enADCSubmodule,
                                                  ADC_nSEQUENCER enADCSequencerNum,
                                                  ADC_nINT_SOURCE enADCIntSource))(void);

void (*ADC_Comp__pvfGetIRQSourceHandler(ADC_nMODULE enADCSubmodule,
                                        ADC_nSEQUENCER enADCSequencerNum,
                                        ADC_nCOMPARATOR enComparatorArg))(void);
void (**ADC_Comp__pvfGetIRQSourceHandlerPointer(ADC_nMODULE enADCSubmodule,
                                                ADC_nSEQUENCER enADCSequencerNum,
                                                ADC_nCOMPARATOR enComparatorArg))(void);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ADC_INTERRUPTROUTINE_SOURCE_H_ */
