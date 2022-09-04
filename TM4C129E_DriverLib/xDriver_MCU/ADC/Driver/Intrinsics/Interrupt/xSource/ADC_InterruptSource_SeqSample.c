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

static const uint32_t ADC_u32MuxMax[(uint32_t) ADC_enSEQ_MAX] =
{(uint32_t) ADC_enMUX_MAX, (uint32_t) ADC_enMUX_4,
 (uint32_t) ADC_enMUX_4, (uint32_t) ADC_enMUX_0};

void ADC_Sample__vEnSeqInterrupt(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                ADC_nMUX enMuxInput)
{
    uint32_t u32Sequencer = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

    u32MuxInput *= 4UL; /* each mux have 4 bits*/
    u32MuxInput += ADC_SSCTL_R_IE0_BIT;

    u32Sequencer *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
    u32Sequencer *= 4UL;
    u32Sequencer += ADC_SS_REGISTER_BASE_OFFSET;
    u32Sequencer += ADC_SS_CTL_OFFSET;

    ADC__vWriteRegister(enModule , u32Sequencer, ADC_SSCTL_IE0_ENA,
                        ADC_SSCTL_IE0_MASK, u32MuxInput);
}

void ADC_Sample__vEnSeqMaskInterrupt(ADC_nMODULE enModule, ADC_nSEQMASK enSequencerMask,
                                ADC_nMUX enMuxInput)
{
    uint32_t u32SequencerMask = 0UL;
    uint32_t u32Sequencer = 0UL;
    uint32_t u32SequencerReg = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    u32SequencerMask = (uint32_t) enSequencerMask;
    u32SequencerMask &= (uint32_t) ADC_enSEQMASK_MAX;
    while(0UL != u32SequencerMask)
    {
        if(1UL & u32SequencerMask)
        {
            u32MuxMax = ADC_u32MuxMax[u32Sequencer];
            u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

            u32MuxInput *= 4UL; /* each mux have 4 bits*/
            u32MuxInput += ADC_SSCTL_R_IE0_BIT;

            u32SequencerReg = u32Sequencer;
            u32SequencerReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
            u32SequencerReg *= 4UL;
            u32SequencerReg += ADC_SS_REGISTER_BASE_OFFSET;
            u32SequencerReg += ADC_SS_CTL_OFFSET;

            ADC__vWriteRegister(enModule , u32SequencerReg, ADC_SSCTL_IE0_ENA,
                                ADC_SSCTL_IE0_MASK, u32MuxInput);
        }
        u32SequencerMask >>= 1UL;
        u32Sequencer++;
    }
}

void ADC_Sample__vDisSeqInterrupt(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                 ADC_nMUX enMuxInput)
{
    uint32_t u32Sequencer = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);
    u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

    u32MuxInput *= 4UL; /* each mux have 4 bits*/
    u32MuxInput += ADC_SSCTL_R_IE0_BIT;

    u32Sequencer *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
    u32Sequencer *= 4UL;
    u32Sequencer += ADC_SS_REGISTER_BASE_OFFSET;
    u32Sequencer += ADC_SS_CTL_OFFSET;

    ADC__vWriteRegister(enModule , u32Sequencer, ADC_SSCTL_IE0_DIS,
                        ADC_SSCTL_IE0_MASK, u32MuxInput);
}

void ADC_Sample__vDisSeqMaskInterrupt(ADC_nMODULE enModule, ADC_nSEQMASK enSequencerMask,
                                ADC_nMUX enMuxInput)
{
    uint32_t u32SequencerMask = 0UL;
    uint32_t u32Sequencer = 0UL;
    uint32_t u32SequencerReg = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    u32SequencerMask = (uint32_t) enSequencerMask;
    u32SequencerMask &= (uint32_t) ADC_enSEQMASK_MAX;
    while(0UL != u32SequencerMask)
    {
        if(1UL & u32SequencerMask)
        {
            u32MuxMax = ADC_u32MuxMax[u32Sequencer];
            u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

            u32MuxInput *= 4UL; /* each mux have 4 bits*/
            u32MuxInput += ADC_SSCTL_R_IE0_BIT;

            u32SequencerReg = u32Sequencer;
            u32SequencerReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
            u32SequencerReg *= 4UL;
            u32SequencerReg += ADC_SS_REGISTER_BASE_OFFSET;
            u32SequencerReg += ADC_SS_CTL_OFFSET;

            ADC__vWriteRegister(enModule , u32SequencerReg, ADC_SSCTL_IE0_DIS,
                                ADC_SSCTL_IE0_MASK, u32MuxInput);
        }
        u32SequencerMask >>= 1UL;
        u32Sequencer++;
    }
}

ADC_nSTATE ADC_Sample__enGetSeqInterrupt(ADC_nMODULE enModule,
                                                ADC_nSEQUENCER enSequencer,
                                                ADC_nMUX enMuxInput)
{
    ADC_nSTATE enIntInputState = ADC_enSTATE_UNDEF;
    uint32_t u32Sequencer = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);
    u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

    u32MuxInput *= 4UL; /* each mux have 4 bits*/
    u32MuxInput += ADC_SSCTL_R_IE0_BIT;

    u32Sequencer *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
    u32Sequencer *= 4UL;
    u32Sequencer += ADC_SS_REGISTER_BASE_OFFSET;
    u32Sequencer += ADC_SS_CTL_OFFSET;

    enIntInputState = (ADC_nSTATE) ADC__u32ReadRegister(enModule, u32Sequencer,
                                                        ADC_SSCTL_IE0_MASK, u32MuxInput);
    return (enIntInputState);
}


ADC_nSEQMASK ADC_Sample__enGetSeqMaskInterrupt(ADC_nMODULE enModule,
                                                    ADC_nSEQMASK enSequencerMask,
                                                    ADC_nMUX enMuxInput)
{
    uint32_t u32SequencerMask = 0UL;
    uint32_t u32Sequencer = 3UL;
    uint32_t u32SequencerReg = 0UL;
    uint32_t u32MuxInput = 0UL;
    uint32_t u32MuxMax = 0U;
    ADC_nSEQMASK enResult = ADC_enSEQMASK_NONE;
    uint32_t u32Result = 0U;
    u32SequencerMask = (uint32_t) enSequencerMask;
    u32SequencerMask &= (uint32_t) ADC_enSEQMASK_MAX;
    while(0UL != u32SequencerMask)
    {
        if(8UL & u32SequencerMask)
        {
            u32MuxMax = ADC_u32MuxMax[u32Sequencer];
            u32MuxInput = MCU__u32CheckParams((uint32_t) enMuxInput, u32MuxMax);

            u32MuxInput *= 4UL; /* each mux have 4 bits*/
            u32MuxInput += ADC_SSCTL_R_IE0_BIT;

            u32SequencerReg = u32Sequencer;
            u32SequencerReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
            u32SequencerReg *= 4UL;
            u32SequencerReg += ADC_SS_REGISTER_BASE_OFFSET;
            u32SequencerReg += ADC_SS_CTL_OFFSET;

            u32Result |= ADC__u32ReadRegister(enModule, u32SequencerReg,
                                ADC_SSCTL_IE0_MASK, u32MuxInput);

        }
        u32Result <<= 1UL;
        u32SequencerMask <<= 1UL;
        u32SequencerMask &= (uint32_t) ADC_enSEQMASK_MAX;
        u32Sequencer--;
    }

    enResult = (ADC_nSEQMASK) u32Result;

    return (enResult);
}

