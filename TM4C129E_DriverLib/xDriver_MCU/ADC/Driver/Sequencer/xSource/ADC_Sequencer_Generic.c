/**
 *
 * @file ADC_Sequencer_Generic.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Generic.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetSequencerGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32Feature, uint32_t u32FeatureBit)
{
    uint32_t u32SequencerReg = 0UL;
    u32SequencerReg = MCU__u32CheckParams(u32Sequence, (uint32_t) ADC_enSEQMASK_MAX);
    if(0UL != u32Feature)
    {
        ADC__vWriteRegister((ADC_nMODULE) u32Module, u32OffsetRegister, u32SequencerReg, u32SequencerReg, u32FeatureBit);
    }
    else
    {
        ADC__vWriteRegister((ADC_nMODULE) u32Module, u32OffsetRegister, 0UL, u32SequencerReg, u32FeatureBit);
    }
}

void ADC__vSetSequencerGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBitMult, uint32_t u32FeatureBitAdd)
{
    uint32_t u32SequencerReg = 0UL;
    u32SequencerReg = MCU__u32CheckParams(u32Sequence, (uint32_t) ADC_enSEQ_MAX);
    u32SequencerReg *= u32FeatureBitMult;
    u32SequencerReg += u32FeatureBitAdd;
    ADC__vWriteRegister((ADC_nMODULE) u32Module, u32OffsetRegister, u32Feature, u32FeatureMask, u32SequencerReg);
}

uint32_t ADC__u32GetSequencerGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32FeatureBit)
{
    uint32_t u32Feature = 0UL;
    uint32_t u32SequencerReg = 0UL;
    u32SequencerReg = MCU__u32CheckParams(u32Sequence, (uint32_t) ADC_enSEQMASK_MAX);
    u32Feature = ADC__u32ReadRegister((ADC_nMODULE) u32Module , u32OffsetRegister, u32SequencerReg, u32FeatureBit);

    if(0UL != u32Feature)
    {
        u32Feature = 1UL;
    }
    else
    {
        u32Feature = 0UL;
    }

    return (u32Feature);
}

uint32_t ADC__u32GetSequencerGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32FeatureMask, uint32_t u32FeatureBitMult, uint32_t u32FeatureBitAdd)
{
    uint32_t u32Feature = 0xFFFFFFFFU;
    uint32_t u32SequencerReg = 0UL;
    u32SequencerReg = MCU__u32CheckParams(u32Sequence, (uint32_t) ADC_enSEQ_MAX);
    u32SequencerReg *= u32FeatureBitMult;
    u32SequencerReg += u32FeatureBitAdd;
    u32Feature = ADC__u32ReadRegister((ADC_nMODULE) u32Module , u32OffsetRegister, u32FeatureMask, u32SequencerReg);
    return (u32Feature);
}
