/**
 *
 * @file ADC_Sequencer_Trigger.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Trigger.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Sequencer__enSetTriggerByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                             ADC_nTRIGGER enTriggerArg)
{
    uint32_t u32SequencerReg;
    uint32_t u32SequencerMaskReg;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, ((uint32_t) ADC_enSEQMASK_ALL + 1UL));
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32SequencerReg = 0U;
        u32SequencerMaskReg = (uint32_t) enSequencerMaskArg;
        while(0U != u32SequencerMaskReg)
        {
            if(0UL != (ADC_enSEQMASK_0 & u32SequencerMaskReg))
            {
                enErrorReg = ADC_Sequencer__enSetTriggerByNumber(enModuleArg, (ADC_nSEQUENCER) u32SequencerReg, enTriggerArg);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                break;
            }
            u32SequencerReg++;
            u32SequencerMaskReg >>= 1U;
        }
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetTriggerByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                ADC_nTRIGGER enTriggerArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enSequencerArg;
        stRegister.u32Shift *= (ADC_EMUX_R_EM1_BIT - ADC_EMUX_R_EM0_BIT);
        stRegister.u32Shift += ADC_EMUX_R_EM0_BIT;
        stRegister.u32Mask = ADC_EMUX_EM0_MASK;
        stRegister.uptrAddress = ADC_EMUX_OFFSET;
        stRegister.u32Value = (uint32_t) enTriggerArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enGetTriggerByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                               ADC_nTRIGGER* penTriggerArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penTriggerArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            stRegister.u32Shift = (uint32_t) enSequencerArg;
            stRegister.u32Shift *= (ADC_EMUX_R_EM1_BIT - ADC_EMUX_R_EM0_BIT);
            stRegister.u32Shift += ADC_EMUX_R_EM0_BIT;
            stRegister.u32Mask = ADC_EMUX_EM0_MASK;
            stRegister.uptrAddress = ADC_EMUX_OFFSET;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                *penTriggerArg = (ADC_nTRIGGER) stRegister.u32Value;
            }
        }
    }
    return (enErrorReg);
}

