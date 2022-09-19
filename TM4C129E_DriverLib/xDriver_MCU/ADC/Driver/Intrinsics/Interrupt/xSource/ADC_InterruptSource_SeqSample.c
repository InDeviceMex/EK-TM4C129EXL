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

static const uint32_t ADC_u32SampleMax[(uint32_t) ADC_enSEQ_MAX] =
{
    (uint32_t) ADC_enSAMPLE_MAX, (uint32_t) ADC_enSAMPLE_4, (uint32_t) ADC_enSAMPLE_4, (uint32_t) ADC_enSAMPLE_1
};

ADC_nERROR ADC_Sample__enSetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                       ADC_nSAMPLE enSampleArg, ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32SequencerMaskReg;
    uint32_t u32SampleReg;
    uint32_t u32SampleMaxReg;
    uint32_t u32SequencerOffsetReg;
    uint32_t u32SequencerNumReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, (uint32_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        enErrorReg = ADC_enERROR_OK;
        u32SequencerNumReg = 0U;
        u32SequencerMaskReg = (uint32_t) enSequencerMaskArg;
        while(0UL != u32SequencerMaskReg)
        {
            if(0UL != (((uint32_t) ADC_enSEQMASK_0) & u32SequencerMaskReg))
            {
                u32SampleMaxReg = ADC_u32SampleMax[u32SequencerNumReg];
                enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSampleArg, u32SampleMaxReg);
                if(ADC_enERROR_OK == enErrorReg)
                {
                    u32SampleReg = (uint32_t) enSampleArg;
                    u32SampleReg <<= 2UL; /* each mux have 4 bits*/
                    u32SampleReg += ADC_SS_CTL_R_IE0_BIT;

                    u32SequencerOffsetReg = u32SequencerNumReg;
                    u32SequencerOffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
                    u32SequencerOffsetReg <<= 2UL;
                    u32SequencerOffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
                    u32SequencerOffsetReg += ADC_SS_CTL_OFFSET;

                    stRegister.u32Shift = (uint32_t) u32SampleReg;
                    stRegister.u32Mask = ADC_SS_CTL_IE0_MASK;
                    stRegister.u32Value = (uint32_t) enStateArg;
                    stRegister.uptrAddress = (uintptr_t) u32SequencerOffsetReg;
                    enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
                }
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                enErrorMemoryReg = enErrorReg;
            }

            u32SequencerMaskReg >>= 1U;
            u32SequencerNumReg++;
        }
    }
    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Sample__enSetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                         ADC_nSAMPLE enSampleArg, ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32SampleReg;
    uint32_t u32SampleMaxReg;
    uint32_t u32SequencerOffsetReg;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32SampleMaxReg = ADC_u32SampleMax[(uint32_t) enSequencerArg];
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSampleArg, u32SampleMaxReg);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32SampleReg = (uint32_t) enSampleArg;
        u32SampleReg <<= 2UL; /* each mux have 4 bits*/
        u32SampleReg += ADC_SS_CTL_R_IE0_BIT;

        u32SequencerOffsetReg = (uint32_t) enSequencerArg;
        u32SequencerOffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
        u32SequencerOffsetReg <<= 2UL;
        u32SequencerOffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
        u32SequencerOffsetReg += ADC_SS_CTL_OFFSET;

        stRegister.u32Shift = (uint32_t) u32SampleReg;
        stRegister.u32Mask = ADC_SS_CTL_IE0_MASK;
        stRegister.u32Value = (uint32_t) enStateArg;
        stRegister.uptrAddress = (uintptr_t) u32SequencerOffsetReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


ADC_nERROR ADC_Sample__enGetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                       ADC_nSAMPLE enSampleArg, ADC_nSEQMASK* penSequencerGetArg)
{
    ADC_Register_t stRegister;
    uint32_t u32SequencerMaskReg;
    uint32_t u32SampleReg;
    uint32_t u32SampleMaxReg;
    uint32_t u32SequencerOffsetReg;
    uint32_t u32SequencerNumReg;
    uint32_t u32SequencerGetReg;
    uint32_t u32ValueReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penSequencerGetArg)
    {
        enErrorMemoryReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, (uint32_t) ADC_enSEQMASK_MAX);
    }
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        u32SequencerGetReg = 0U;
        u32ValueReg = (uint32_t) ADC_enSEQMASK_0;
        u32SequencerNumReg = 0U;
        u32SequencerMaskReg = (uint32_t) enSequencerMaskArg;
        enErrorReg = ADC_enERROR_OK;
        while(0UL != u32SequencerMaskReg)
        {
            if(0UL != (((uint32_t) ADC_enSEQMASK_0) & u32SequencerMaskReg))
            {
                u32SampleMaxReg = ADC_u32SampleMax[u32SequencerNumReg];
                enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSampleArg, u32SampleMaxReg);
                if(ADC_enERROR_OK == enErrorReg)
                {
                    u32SampleReg = (uint32_t) enSampleArg;
                    u32SampleReg <<= 2UL; /* each mux have 4 bits*/
                    u32SampleReg += ADC_SS_CTL_R_IE0_BIT;

                    u32SequencerOffsetReg = u32SequencerNumReg;
                    u32SequencerOffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
                    u32SequencerOffsetReg <<= 2UL;
                    u32SequencerOffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
                    u32SequencerOffsetReg += ADC_SS_CTL_OFFSET;

                    stRegister.u32Shift = (uint32_t) u32SampleReg;
                    stRegister.u32Mask = ADC_SS_CTL_IE0_MASK;
                    stRegister.uptrAddress = (uintptr_t) u32SequencerOffsetReg;
                    enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
                }
                if(ADC_enERROR_OK == enErrorReg)
                {
                    if(0UL != stRegister.u32Value)
                    {
                        u32SequencerGetReg |= u32ValueReg;
                    }
                }
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                enErrorMemoryReg = enErrorReg;
            }

            u32ValueReg <<= 1U;
            u32SequencerMaskReg >>= 1U;
            u32SequencerNumReg++;
        }

        if(ADC_enERROR_OK == enErrorMemoryReg)
        {
            *penSequencerGetArg = (ADC_nSEQMASK ) u32SequencerGetReg;
        }
    }
    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Sample__enGetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                         ADC_nSAMPLE enSampleArg, ADC_nSTATE* penStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32SampleReg;
    uint32_t u32SampleMaxReg;
    uint32_t u32SequencerOffsetReg;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32SampleMaxReg = ADC_u32SampleMax[(uint32_t) enSequencerArg];
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSampleArg, u32SampleMaxReg);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32SampleReg = (uint32_t) enSampleArg;
        u32SampleReg <<= 2UL; /* each mux have 4 bits*/
        u32SampleReg += ADC_SS_CTL_R_IE0_BIT;

        u32SequencerOffsetReg = (uint32_t) enSequencerArg;
        u32SequencerOffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
        u32SequencerOffsetReg <<= 2UL;
        u32SequencerOffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
        u32SequencerOffsetReg += ADC_SS_CTL_OFFSET;

        stRegister.u32Shift = (uint32_t) u32SampleReg;
        stRegister.u32Mask = ADC_SS_CTL_IE0_MASK;
        stRegister.uptrAddress = (uintptr_t) u32SequencerOffsetReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penStateArg = (ADC_nSTATE) stRegister.u32Value;
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sample__enEnableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                     ADC_nSAMPLE enSampleArg)
{
    ADC_nERROR enReturnReg;

    enReturnReg = ADC_Sample__enSetInterruptSourceStateByMask(enModuleArg, enSequencerMaskArg, enSampleArg, ADC_enSTATE_ENA);

    return (enReturnReg);
}

ADC_nERROR ADC_Sample__enEnableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                       ADC_nSAMPLE enSampleArg)
{
    ADC_nERROR enReturnReg;

    enReturnReg = ADC_Sample__enSetInterruptSourceStateByNumber(enModuleArg, enSequencerArg, enSampleArg, ADC_enSTATE_ENA);

    return (enReturnReg);
}

ADC_nERROR ADC_Sample__enDisableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                      ADC_nSAMPLE enSampleArg)
{
    ADC_nERROR enReturnReg;

    enReturnReg = ADC_Sample__enSetInterruptSourceStateByMask(enModuleArg, enSequencerMaskArg, enSampleArg, ADC_enSTATE_DIS);

    return (enReturnReg);
}

ADC_nERROR ADC_Sample__enDisableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                        ADC_nSAMPLE enSampleArg)
{
    ADC_nERROR enReturnReg;

    enReturnReg = ADC_Sample__enSetInterruptSourceStateByNumber(enModuleArg, enSequencerArg, enSampleArg, ADC_enSTATE_DIS);

    return (enReturnReg);
}

