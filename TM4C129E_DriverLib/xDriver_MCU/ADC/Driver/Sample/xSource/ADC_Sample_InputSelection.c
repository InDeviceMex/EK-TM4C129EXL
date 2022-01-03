/**
 *
 * @file ADC_Sample_InputSelection.c
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
 * @verbatim 23 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_InputSelection.h>

#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Sample__vSetInputSelection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                   ADC_nMUX enMux, ADC_nSEQ_INPUT enSampleInputSelection)
{
    uint32_t u32InputSelection = (uint32_t) enSampleInputSelection;
    uint32_t u32ExtendedInputSelection = (uint32_t) enSampleInputSelection;

    u32ExtendedInputSelection >>= 4UL;
    u32ExtendedInputSelection &= 0x1UL;
    u32InputSelection &= 0xFUL;

    ADC_Sample__vSetGeneric((uint32_t) enModule, (uint32_t) enSequencer, ADC_SS_EMUX_OFFSET,
                           (uint32_t) enMux, u32ExtendedInputSelection,
                           ADC_SSEMUX_EMUX0_MASK, ADC_SSEMUX_R_EMUX0_BIT);

    ADC_Sample__vSetGeneric((uint32_t) enModule, (uint32_t) enSequencer, ADC_SS_MUX_OFFSET,
                           (uint32_t) enMux, u32InputSelection,
                           ADC_SSMUX_MUX0_MASK, ADC_SSMUX_R_MUX0_BIT);
}

ADC_nSEQ_INPUT ADC_Sample__enGetInputSelection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                              ADC_nMUX enMux)
{
    uint32_t u32Input = 0UL;
    uint32_t u32InputSelection = 0UL;
    uint32_t u32ExtendedInputSelection = 0UL;
    u32InputSelection = ADC_Sample__u32GetGeneric((uint32_t) enModule, (uint32_t) enSequencer,
                                                 ADC_SS_MUX_OFFSET, (uint32_t) enMux,
                                                 ADC_SSMUX_MUX0_MASK, ADC_SSMUX_R_MUX0_BIT);
    u32ExtendedInputSelection = ADC_Sample__u32GetGeneric((uint32_t) enModule,
                                                         (uint32_t) enSequencer,
                                                 ADC_SS_EMUX_OFFSET, (uint32_t) enMux,
                                                 ADC_SSEMUX_EMUX0_MASK, ADC_SSEMUX_R_EMUX0_BIT);
    u32ExtendedInputSelection &= 0x1UL;
    u32InputSelection &= 0xFUL;
    u32ExtendedInputSelection <<= 4UL;

    u32Input = u32ExtendedInputSelection;
    u32Input |= u32InputSelection;

    return ((ADC_nSEQ_INPUT) u32Input);
}
