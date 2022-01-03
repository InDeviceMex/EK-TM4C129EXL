/**
 *
 * @file ADC_Sequencer_Enable.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Enable.h>

#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Sequencer__vSetEnable(ADC_nMODULE enModule, ADC_nSEQMASK enSequence,
                              ADC_nSEQ_ENABLE enSeqEnable)
{
    ADC_Sequencer__vSetGeneric((uint32_t) enModule, ADC_ACTSS_OFFSET, (uint32_t) enSequence,
                              (uint32_t) enSeqEnable, 0UL);
}

ADC_nSEQ_ENABLE ADC_Sequencer__enGetEnable(ADC_nMODULE enModule, ADC_nSEQMASK enSequence)
{
    ADC_nSEQ_ENABLE enSeqEnableReg = ADC_enSEQ_ENABLE_DIS;
    enSeqEnableReg =(ADC_nSEQ_ENABLE) (ADC_Sequencer__u32GetGeneric((uint32_t) enModule,
                                           ADC_ACTSS_OFFSET, (uint32_t) enSequence, 0UL));
    return (enSeqEnableReg);
}

void ADC_Sequencer__vSetDMAEnable(ADC_nMODULE enModule, ADC_nSEQMASK enSequence,
                        ADC_nDMA_ENABLE enSeqDMAEnable)
{
    ADC_Sequencer__vSetGeneric((uint32_t) enModule, ADC_ACTSS_OFFSET,
                              (uint32_t) enSequence, (uint32_t) enSeqDMAEnable, 8UL);
}

ADC_nDMA_ENABLE ADC_Sequencer__enGetDMAEnable(ADC_nMODULE enModule, ADC_nSEQMASK enSequence)
{
    ADC_nDMA_ENABLE enDmaEnableReg = ADC_enDMA_ENABLE_DIS;
    enDmaEnableReg = (ADC_nDMA_ENABLE) (ADC_Sequencer__u32GetGeneric((uint32_t) enModule,
                                        ADC_ACTSS_OFFSET, (uint32_t) enSequence, 8UL));
    return (enDmaEnableReg);
}
