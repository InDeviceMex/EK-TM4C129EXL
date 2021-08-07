/**
 *
 * @file ADC_Sample_CompSelection.c
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
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_CompSelection.h>

#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetSampleCompSelection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, ADC_nCOMPARATOR enSampleComparator)
{
    ADC__vSetSampleGeneric((uint32_t) enModule, (uint32_t) enSequencer, ADC_SSDC_OFFSET, (uint32_t) enMux, (uint32_t) enSampleComparator, ADC_SSDC_S0DCSEL_MASK, ADC_SSDC_R_S0DCSEL_BIT);
}

ADC_nCOMPARATOR ADC__enGetSampleCompSelection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux)
{
    return (ADC_nCOMPARATOR) ADC__u32GetSampleGeneric((uint32_t) enModule, (uint32_t) enSequencer, ADC_SSDC_OFFSET, (uint32_t) enMux, ADC_SSDC_S0DCSEL_MASK, ADC_SSDC_R_S0DCSEL_BIT);
}
