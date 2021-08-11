/**
 *
 * @file ADC_InterruptSource_SeqSample.c
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
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/xHeader/ADC_InterruptSource_SeqSample.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

static const uint32_t ADC_u32MuxMax[(uint32_t) ADC_enSEQ_MAX] = {(uint32_t) ADC_enMUX_MAX, (uint32_t) ADC_enMUX_4, (uint32_t) ADC_enMUX_4, (uint32_t) ADC_enMUX_0};

void ADC__vEnSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput)
{
    uint32_t u32Sequencer = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

    u32MuxInput *= 4UL; /* each mux have 4 bits*/
    u32MuxInput += ADC_SSCTL_R_IE0_BIT;

    u32Sequencer *= ADC_INPUT_REGISTER_NUM; /*Add offset for input sequencer*/
    u32Sequencer *= 4UL;
    u32Sequencer += ADC_SSMUX0_OFFSET;
    u32Sequencer += ADC_SSCTL_OFFSET;

    ADC__vWriteRegister(enModule , u32Sequencer, ADC_SSCTL_IE0_ENA, ADC_SSCTL_IE0_MASK, u32MuxInput);
}

void ADC__vDisSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput)
{
    uint32_t u32Sequencer = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);
    u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

    u32MuxInput *= 4UL; /* each mux have 4 bits*/
    u32MuxInput += ADC_SSCTL_R_IE0_BIT;

    u32Sequencer *= ADC_INPUT_REGISTER_NUM; /*Add offset for input sequencer*/
    u32Sequencer *= 4UL;
    u32Sequencer += ADC_SSMUX0_OFFSET;
    u32Sequencer += ADC_SSCTL_OFFSET;

    ADC__vWriteRegister(enModule , u32Sequencer, ADC_SSCTL_IE0_DIS, ADC_SSCTL_IE0_MASK, u32MuxInput);
}

ADC_nSEQ_INPUT_INT ADC__enGetSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput)
{
    ADC_nSEQ_INPUT_INT enIntInputState = ADC_enSEQ_INPUT_INT_UNDEF;
    uint32_t u32Sequencer = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);
    u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

    u32MuxInput *= 4UL; /* each mux have 4 bits*/
    u32MuxInput += ADC_SSCTL_R_IE0_BIT;

    u32Sequencer *= ADC_INPUT_REGISTER_NUM; /*Add offset for input sequencer*/
    u32Sequencer *= 4UL;
    u32Sequencer += ADC_SSMUX0_OFFSET;
    u32Sequencer += ADC_SSCTL_OFFSET;

    enIntInputState = (ADC_nSEQ_INPUT_INT) ADC__u32ReadRegister(enModule, u32Sequencer, ADC_SSCTL_IE0_MASK, u32MuxInput);
    return (enIntInputState);
}

