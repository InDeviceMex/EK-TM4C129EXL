/**
 *
 * @file ADC_Sequencer_Enable.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Enable.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Sequencer__enSetStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                     ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32ValueReg;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, ((uint32_t) ADC_enSEQMASK_ALL + 1UL));
    if(ADC_enERROR_OK == enErrorReg)
    {
        if(ADC_enSTATE_DIS == enStateArg)
        {
            u32ValueReg = 0UL;
        }
        else
        {
            u32ValueReg = (uint32_t) enSequencerMaskArg;
        }
        stRegister.u32Shift = ADC_ACTSS_R_ASEN0_BIT;
        stRegister.u32Mask = (uint32_t) enSequencerMaskArg;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                             ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enSequencerArg;
        stRegister.u32Shift += ADC_ACTSS_R_ASEN0_BIT;
        stRegister.u32Mask = ADC_ACTSS_ASEN0_MASK;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


ADC_nERROR ADC_Sequencer__enGetStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                           ADC_nSEQMASK* penSequencerMaskReqArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penSequencerMaskReqArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, ((uint32_t) ADC_enSEQMASK_ALL + 1UL));
        if(ADC_enERROR_OK == enErrorReg)
        {
            stRegister.u32Shift = ADC_ACTSS_R_ASEN0_BIT;
            stRegister.u32Mask = (uint32_t) enSequencerMaskArg;
            stRegister.uptrAddress = ADC_ACTSS_OFFSET;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                *penSequencerMaskReqArg = (ADC_nSEQMASK) stRegister.u32Value;
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__GetStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                           ADC_nSTATE* penStateArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penStateArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            stRegister.u32Shift = (uint32_t) enSequencerArg;
            stRegister.u32Shift += ADC_ACTSS_R_ASEN0_BIT;
            stRegister.u32Mask = ADC_ACTSS_ASEN0_MASK;
            stRegister.uptrAddress = ADC_ACTSS_OFFSET;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                *penStateArg = (ADC_nSTATE) stRegister.u32Value;
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}


ADC_nERROR ADC_Sequencer__enSetDMAStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                              ADC_nSTATE enDMAStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32ValueReg;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, ((uint32_t) ADC_enSEQMASK_ALL + 1UL));
    if(ADC_enERROR_OK == enErrorReg)
    {
        if(ADC_enSTATE_DIS == enDMAStateArg)
        {
            u32ValueReg = 0UL;
        }
        else
        {
            u32ValueReg = (uint32_t) enSequencerMaskArg;
        }
        stRegister.u32Shift = ADC_ACTSS_R_ADEN0_BIT;
        stRegister.u32Mask = (uint32_t) enSequencerMaskArg;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetDMAStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                ADC_nSTATE enDMAStateArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enSequencerArg;
        stRegister.u32Shift += ADC_ACTSS_R_ADEN0_BIT;
        stRegister.u32Mask = ADC_ACTSS_ADEN0_MASK;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        stRegister.u32Value = (uint32_t) enDMAStateArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


ADC_nERROR ADC_Sequencer__enGetDMAStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                              ADC_nSEQMASK* penSequencerMaskReqArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penSequencerMaskReqArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, ((uint32_t) ADC_enSEQMASK_ALL + 1UL));
        if(ADC_enERROR_OK == enErrorReg)
        {
            stRegister.u32Shift = ADC_ACTSS_R_ADEN0_BIT;
            stRegister.u32Mask = (uint32_t) enSequencerMaskArg;
            stRegister.uptrAddress = ADC_ACTSS_OFFSET;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                *penSequencerMaskReqArg = (ADC_nSEQMASK) stRegister.u32Value;
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__GetDMAStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                              ADC_nSTATE* penDMAStateArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penDMAStateArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            stRegister.u32Shift = (uint32_t) enSequencerArg;
            stRegister.u32Shift += ADC_ACTSS_R_ADEN0_BIT;
            stRegister.u32Mask = ADC_ACTSS_ADEN0_MASK;
            stRegister.uptrAddress = ADC_ACTSS_OFFSET;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                *penDMAStateArg = (ADC_nSTATE) stRegister.u32Value;
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}
