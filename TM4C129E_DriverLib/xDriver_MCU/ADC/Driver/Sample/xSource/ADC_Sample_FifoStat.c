/**
 *
 * @file ADC_Sample_FifoStat.c
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
 * @verbatim 26 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_FifoStat.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nSEQ_FIFO ADC__enGetSampleFifoStat(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer)
{
    uint32_t u32RegEmpty = 0UL;
    uint32_t u32RegFull = 0UL;

    ADC_nSEQ_FIFO enFeature = ADC_enSEQ_FIFO_FULL;
    uint32_t u32SequencerReg = 0UL;

    u32SequencerReg = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);

    u32SequencerReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
    u32SequencerReg *= 4UL;
    u32SequencerReg += ADC_SS_REGISTER_BASE_OFFSET;
    u32SequencerReg += ADC_SS_FSTAT_OFFSET;

    u32RegEmpty = ADC__u32ReadRegister(enModule , u32SequencerReg,
                                       ADC_SSFSTAT_EMPTY_MASK, ADC_SSFSTAT_R_EMPTY_BIT);

    if(ADC_SSFSTAT_EMPTY_EMPTY == u32RegEmpty)
    {
        enFeature = ADC_enSEQ_FIFO_EMPTY;
    }
    else
    {
        u32RegFull = ADC__u32ReadRegister(enModule , u32SequencerReg,
                                          ADC_SSFSTAT_FULL_MASK, ADC_SSFSTAT_R_FULL_BIT);
        if (ADC_SSFSTAT_FULL_FULL == u32RegFull)
        {
            enFeature = ADC_enSEQ_FIFO_FULL;
        }
        else
        {
            enFeature = ADC_enSEQ_FIFO_VALUES;
        }
    }
    return (enFeature);
}

uint32_t ADC__u32GetSampleFifoValues(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                     uint32_t* pu32FifoArray)
{
    ADC_nSEQ_FIFO enFeature = ADC_enSEQ_FIFO_FULL;

    uint32_t u32AdcBase = 0UL;
    volatile uint32_t* pu32AdcSeq = 0U;

    uint32_t u32Module = 0UL;
    uint32_t u32Sequencer = 0UL;
    uint32_t u32SequencerReg = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequencer, enSequencer);

    if((uint32_t) 0UL != (uint32_t) pu32FifoArray)
    {
        u32AdcBase = ADC__u32BlockBaseAddress((ADC_nMODULE) u32Module);
        u32SequencerReg = u32Sequencer;
        u32SequencerReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
        u32SequencerReg *= 4UL;
        u32SequencerReg += ADC_SS_REGISTER_BASE_OFFSET;
        u32SequencerReg += ADC_SS_FIFO_OFFSET;
        u32AdcBase += u32SequencerReg;
        pu32AdcSeq = (volatile uint32_t*) u32AdcBase;

        enFeature = ADC__enGetSampleFifoStat((ADC_nMODULE)u32Module,
                                             (ADC_nSEQUENCER)u32Sequencer);
        while(ADC_enSEQ_FIFO_EMPTY != enFeature)
        {
            *pu32FifoArray = *pu32AdcSeq;
            pu32FifoArray += 0x1U;
            u32Count++;
            enFeature = ADC__enGetSampleFifoStat((ADC_nMODULE)u32Module,
                                                 (ADC_nSEQUENCER)u32Sequencer);
        }

    }
    return (u32Count);
}

uint32_t ADC__u32GetSampleValue(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer)
{
    ADC_nSEQ_FIFO enFeature = ADC_enSEQ_FIFO_FULL;

    uint32_t u32AdcBase = 0UL;

    uint32_t u32Module = 0UL;
    uint32_t u32Sequencer = 0UL;
    uint32_t u32Value = 0UL;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    u32Sequencer = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);

    u32AdcBase = ADC__u32BlockBaseAddress((ADC_nMODULE) u32Module);
    enFeature = ADC__enGetSampleFifoStat((ADC_nMODULE)u32Module, (ADC_nSEQUENCER)u32Sequencer);
    if(ADC_enSEQ_FIFO_EMPTY != enFeature)
    {
        switch(u32Sequencer)
        {
        case (uint32_t) ADC_enSEQ_0:
            u32AdcBase += ADC_SS0_FIFO_OFFSET;
            u32Value = *((volatile uint32_t*)u32AdcBase);
            break;
        case (uint32_t) ADC_enSEQ_1:
                u32AdcBase += ADC_SS1_FIFO_OFFSET;
                u32Value = *((volatile uint32_t*)u32AdcBase);
            break;
        case (uint32_t) ADC_enSEQ_2:
                u32AdcBase += ADC_SS2_FIFO_OFFSET;
                u32Value = *((volatile uint32_t*)u32AdcBase);
            break;
        case (uint32_t) ADC_enSEQ_3:
                u32AdcBase += ADC_SS3_FIFO_OFFSET;
                u32Value = *((volatile uint32_t*)u32AdcBase);
            break;
        default:
            break;
        }
    }

    return (u32Value);
}
