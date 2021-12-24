/**
 *
 * @file ADC_Sample_Generic.c
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
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

static const uint32_t ADC_u32MuxMax[(uint32_t) ADC_enSEQ_MAX] =
{(uint32_t) ADC_enMUX_MAX, (uint32_t) ADC_enMUX_4,
 (uint32_t) ADC_enMUX_4, (uint32_t) ADC_enMUX_1};

void ADC__vSetSampleGeneric(uint32_t u32Module, uint32_t  u32Sequencer,
                            uint32_t u32OffsetRegister, uint32_t u32MuxInput,
                            uint32_t u32Feature, uint32_t u32FeatureMask,
                            uint32_t u32FeatureBitAdd)
{
    uint32_t u32SequencerReg = 0UL;
    uint32_t u32MuxInputReg = 0UL;
    uint32_t u32MuxMax = 0UL;

    u32SequencerReg = MCU__u32CheckParams(u32Sequencer, (uint32_t) ADC_enSEQ_MAX);
    u32MuxMax = ADC_u32MuxMax[u32SequencerReg];
    u32MuxInputReg = MCU__u32CheckParams(u32MuxInput, u32MuxMax);

    u32MuxInputReg *= 4UL; /* each mux have 4 bits*/
    u32MuxInputReg += u32FeatureBitAdd;

    u32SequencerReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
    u32SequencerReg *= 4UL;
    u32SequencerReg += ADC_SS_REGISTER_BASE_OFFSET;
    u32SequencerReg += u32OffsetRegister;

    ADC__vWriteRegister((ADC_nMODULE) u32Module , u32SequencerReg, u32Feature,
                        u32FeatureMask, u32MuxInputReg);
}

uint32_t ADC__u32GetSampleGeneric(uint32_t u32Module, uint32_t  u32Sequencer,
                                  uint32_t u32OffsetRegister, uint32_t u32MuxInput,
                                  uint32_t u32FeatureMask, uint32_t u32FeatureBitAdd)
{
    uint32_t u32Feature = 0UL;
    uint32_t u32SequencerReg = 0UL;
    uint32_t u32MuxInputReg = 0UL;
    uint32_t u32MuxMax = 0UL;

    u32SequencerReg = MCU__u32CheckParams(u32Sequencer, (uint32_t) ADC_enSEQ_MAX);
    u32MuxMax = ADC_u32MuxMax[u32SequencerReg];
    u32MuxInputReg = MCU__u32CheckParams(u32MuxInput, u32MuxMax);

    u32MuxInputReg *= 4UL; /* each mux have 4 bits*/
    u32MuxInputReg += u32FeatureBitAdd;

    u32SequencerReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
    u32SequencerReg *= 4UL;
    u32SequencerReg += ADC_SS_REGISTER_BASE_OFFSET;
    u32SequencerReg += u32OffsetRegister;

    u32Feature = ADC__u32ReadRegister((ADC_nMODULE) u32Module , u32SequencerReg,
                                      u32FeatureMask, u32MuxInputReg);
    return (u32Feature);
}
