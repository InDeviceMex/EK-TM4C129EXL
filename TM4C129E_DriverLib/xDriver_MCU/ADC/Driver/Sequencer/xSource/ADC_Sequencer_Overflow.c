/**
 *
 * @file ADC_Sequencer_Overflow.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Overflow.h>

#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vClearSequencerOverflow(ADC_nMODULE enModule, ADC_nSEQMASK enSequence)
{
    ADC__vSetSequencerGeneric((uint32_t) enModule, ADC_OSTAT_OFFSET, (uint32_t) enSequence, (uint32_t) 1U, 0UL);
}

ADC_nSEQ_OV ADC__enGetSequencerOverflow(ADC_nMODULE enModule, ADC_nSEQMASK enSequence)
{
    return (ADC_nSEQ_OV) (ADC__u32GetSequencerGeneric((uint32_t) enModule, ADC_OSTAT_OFFSET, (uint32_t) enSequence, 0UL));
}
