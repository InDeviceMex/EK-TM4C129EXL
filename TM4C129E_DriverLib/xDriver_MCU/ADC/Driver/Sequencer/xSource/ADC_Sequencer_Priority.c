/**
 *
 * @file ADC_Sequencer_Priority.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Priority.h>

#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Sequencer__vSetPriority(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence,
                                ADC_nSEQ_PRIORITY enSeqPriority)
{
    ADC_Sequencer__vSetGenericBit((uint32_t) enModule, ADC_SSPRI_OFFSET, (uint32_t) enSequence,
                                 (uint32_t) enSeqPriority, ADC_SSPRI_SS0_MASK,
                                 (ADC_SSPRI_R_SS1_BIT - ADC_SSPRI_R_SS0_BIT),
                                 ADC_SSPRI_R_SS0_BIT);
}

ADC_nSEQ_PRIORITY ADC_Sequencer__enGetPriority(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence)
{
    ADC_nSEQ_PRIORITY enSeqPriorityReg = ADC_enSEQ_PRIORITY_HIGH;
    enSeqPriorityReg = (ADC_nSEQ_PRIORITY) (ADC_Sequencer__u32GetGenericBit((uint32_t) enModule,
                                           ADC_SSPRI_OFFSET, (uint32_t) enSequence,
                                           ADC_SSPRI_SS0_MASK,
                                           (ADC_SSPRI_R_SS1_BIT - ADC_SSPRI_R_SS0_BIT),
                                           ADC_SSPRI_R_SS0_BIT));
    return (enSeqPriorityReg);
}
