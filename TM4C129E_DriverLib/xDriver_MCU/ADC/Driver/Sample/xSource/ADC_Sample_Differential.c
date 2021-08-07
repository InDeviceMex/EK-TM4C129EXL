/**
 *
 * @file ADC_Sample_Differential.c
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
 * @verbatim 24 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Differential.h>

#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetSampleDifferential(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, ADC_nSEQ_INPUT_DIFF enSampleDifferential)
{
    ADC__vSetSampleGeneric((uint32_t) enModule, (uint32_t) enSequencer, ADC_SSCTL_OFFSET, (uint32_t) enMux, (uint32_t) enSampleDifferential, ADC_SSCTL_D0_MASK, ADC_SSCTL_R_D0_BIT);
}

ADC_nSEQ_INPUT_DIFF ADC__enGetSampleDifferential(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux)
{
    return (ADC_nSEQ_INPUT_DIFF) ADC__u32GetSampleGeneric((uint32_t) enModule, (uint32_t) enSequencer, ADC_SSCTL_OFFSET, (uint32_t) enMux, ADC_SSCTL_D0_MASK, ADC_SSCTL_R_D0_BIT);
}
