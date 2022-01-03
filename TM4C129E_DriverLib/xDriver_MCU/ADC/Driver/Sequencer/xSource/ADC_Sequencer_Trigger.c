/**
 *
 * @file ADC_Sequencer_Trigger.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Trigger.h>

#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Sequencer__vSetTrigger(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence,
                               ADC_nSEQ_TRIGGER enSeqTrigger)
{
    ADC_Sequencer__vSetGenericBit((uint32_t) enModule, ADC_EMUX_OFFSET, (uint32_t) enSequence,
                                 (uint32_t) enSeqTrigger, ADC_EMUX_EM0_MASK,
                                 (ADC_EMUX_R_EM1_BIT - ADC_EMUX_R_EM0_BIT),
                                 ADC_EMUX_R_EM0_BIT);
}

ADC_nSEQ_TRIGGER ADC_Sequencer__enGetTrigger(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence)
{
    ADC_nSEQ_TRIGGER enSeqTriggerReg = ADC_enSEQ_TRIGGER_SOFTWARE;
    enSeqTriggerReg = (ADC_nSEQ_TRIGGER) (ADC_Sequencer__u32GetGenericBit((uint32_t) enModule,
                                                 ADC_EMUX_OFFSET, (uint32_t) enSequence,
                                                 ADC_EMUX_EM0_MASK,
                                                 (ADC_EMUX_R_EM1_BIT - ADC_EMUX_R_EM0_BIT),
                                                 ADC_EMUX_R_EM0_BIT));
    return (enSeqTriggerReg);
}
