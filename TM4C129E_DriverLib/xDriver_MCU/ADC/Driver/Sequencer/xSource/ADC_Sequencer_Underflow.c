/**
 *
 * @file ADC_Sequencer_Underflow.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Underflow.h>

#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Sequencer__vClearUnderflow(ADC_nMODULE enModule, ADC_nSEQMASK enSequence)
{
    ADC_Sequencer__vSetGeneric((uint32_t) enModule, ADC_USTAT_OFFSET,
                              (uint32_t) enSequence, 1UL, 0UL);
}

ADC_nSTATUS ADC_Sequencer__enGetUnderflow(ADC_nMODULE enModule, ADC_nSEQMASK enSequence)
{
    ADC_nSTATUS enSeqUVReg = ADC_enSTATUS_INACTIVE;
    enSeqUVReg = (ADC_nSTATUS) (ADC_Sequencer__u32GetGeneric((uint32_t) enModule,
                                            ADC_USTAT_OFFSET, (uint32_t) enSequence, 0UL));
    return (enSeqUVReg);
}
