/**
 *
 * @file ADC_InterruptVector.c
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ADC/Interrupt/xHeader/ADC_InterruptVector.h>

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

static NVIC_nSTIR ADC__enGetInterruptVector(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence);

static NVIC_nSTIR ADC__enGetInterruptVector(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence)
{

    NVIC_nSTIR enVector = NVIC_enSTIR_ADC0SEQ0;
    uint32_t u32Module = 0UL;
    uint32_t u32Sequencer = 0UL;
    NVIC_nSTIR NVIC_VECTOR_ADC[(uint32_t) ADC_enMODULE_MAX][(uint32_t) ADC_enSEQ_MAX] =
    {
        { NVIC_enSTIR_ADC0SEQ0, NVIC_enSTIR_ADC0SEQ1, NVIC_enSTIR_ADC0SEQ2, NVIC_enSTIR_ADC0SEQ3},
        { NVIC_enSTIR_ADC1SEQ0, NVIC_enSTIR_ADC1SEQ1, NVIC_enSTIR_ADC1SEQ2, NVIC_enSTIR_ADC1SEQ3},
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequence, (uint32_t) ADC_enSEQ_MAX);
    enVector = NVIC_VECTOR_ADC[u32Module][u32Sequencer];
    return enVector;
}

void ADC__vEnInterruptVector(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence, ADC_nPRIORITY enADCPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_ADC0SEQ0;
    enVector = ADC__enGetInterruptVector(enModule, enSequence);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enADCPriority);
}

void ADC__vDisInterruptVector(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_ADC0SEQ0;
    enVector = ADC__enGetInterruptVector(enModule, enSequence);
    NVIC__vClearEnableIRQ(enVector);
}



