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
    ADC_nERROR enErrorReg;
    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (ADC_enSTATE_DIS == enStateArg) ? 0UL : (UBase_t) enSequencerMaskArg;

        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_ACTSS_R_ASEN0_BIT;
        stRegister.uxMask = (UBase_t) enSequencerMaskArg;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                             ADC_nSTATE enStateArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enSequencerArg;
        stRegister.uxShift += ADC_ACTSS_R_ASEN0_BIT;
        stRegister.uxMask = ADC_ACTSS_ASEN0_MASK;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


ADC_nERROR ADC_Sequencer__enGetStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                           ADC_nSEQMASK* penSequencerMaskReqArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penSequencerMaskReqArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_ACTSS_R_ASEN0_BIT;
        stRegister.uxMask = (UBase_t) enSequencerMaskArg;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penSequencerMaskReqArg = (ADC_nSEQMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enGetStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                           ADC_nSTATE* penStateArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enSequencerArg;
        stRegister.uxShift += ADC_ACTSS_R_ASEN0_BIT;
        stRegister.uxMask = ADC_ACTSS_ASEN0_MASK;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penStateArg = (ADC_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


ADC_nERROR ADC_Sequencer__enSetDMAStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                              ADC_nSTATE enDMAStateArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (ADC_enSTATE_DIS == enDMAStateArg) ? 0UL : (UBase_t) enSequencerMaskArg;

        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_ACTSS_R_ADEN0_BIT;
        stRegister.uxMask = (UBase_t) enSequencerMaskArg;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetDMAStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                ADC_nSTATE enDMAStateArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enSequencerArg;
        stRegister.uxShift += ADC_ACTSS_R_ADEN0_BIT;
        stRegister.uxMask = ADC_ACTSS_ADEN0_MASK;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        stRegister.uxValue = (UBase_t) enDMAStateArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


ADC_nERROR ADC_Sequencer__enGetDMAStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                              ADC_nSEQMASK* penSequencerMaskReqArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penSequencerMaskReqArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_ACTSS_R_ADEN0_BIT;
        stRegister.uxMask = (UBase_t) enSequencerMaskArg;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penSequencerMaskReqArg = (ADC_nSEQMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enGetDMAStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                              ADC_nSTATE* penDMAStateArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penDMAStateArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enSequencerArg;
        stRegister.uxShift += ADC_ACTSS_R_ADEN0_BIT;
        stRegister.uxMask = ADC_ACTSS_ADEN0_MASK;
        stRegister.uptrAddress = ADC_ACTSS_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penDMAStateArg = (ADC_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
