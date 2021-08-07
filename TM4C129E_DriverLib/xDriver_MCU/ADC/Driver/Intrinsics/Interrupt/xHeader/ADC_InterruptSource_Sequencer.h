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

void ADC__vEnSeqInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt);
void ADC__vDisSeqInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt);
void ADC__vClearSeqInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt);
ADC_nSEQ_INT_STATUS ADC__enStatusSeqInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQUENCER_H_ */
