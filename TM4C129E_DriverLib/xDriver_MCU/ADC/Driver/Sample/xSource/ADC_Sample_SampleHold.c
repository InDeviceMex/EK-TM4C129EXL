/**
 *
 * @file ADC_Sample_SampleHold.c
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
 * @verbatim 6 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_SampleHold.h>

#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Sample__vSetSampleHold(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                               ADC_nMUX enMux, ADC_nSEQ_SAMPLE_HOLD enSampleSampleHold)
{
    ADC_Sample__vSetGeneric((uint32_t) enModule, (uint32_t) enSequencer, ADC_SS_TSH_OFFSET,
                           (uint32_t) enMux, (uint32_t) enSampleSampleHold,
                           ADC_SSTSH_TSH0_MASK, ADC_SSTSH_R_TSH0_BIT);
}

ADC_nSEQ_SAMPLE_HOLD ADC_Sample__enGetSampleHold(ADC_nMODULE enModule,
                                                ADC_nSEQUENCER enSequencer, ADC_nMUX enMux)
{
    ADC_nSEQ_SAMPLE_HOLD enSeqSampleHoldReg = ADC_enSEQ_SAMPLE_HOLD_4;
    enSeqSampleHoldReg = (ADC_nSEQ_SAMPLE_HOLD) ADC_Sample__u32GetGeneric((uint32_t) enModule,
                                                     (uint32_t) enSequencer,
                                                     ADC_SS_TSH_OFFSET, (uint32_t) enMux,
                                                     ADC_SSTSH_TSH0_MASK, ADC_SSTSH_R_TSH0_BIT);
    return (enSeqSampleHoldReg);
}



