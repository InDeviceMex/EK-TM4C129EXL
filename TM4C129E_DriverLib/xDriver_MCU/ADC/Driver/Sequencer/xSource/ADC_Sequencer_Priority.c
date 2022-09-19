/**
 *
 * @file ADC_Sequencer_Priority.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Priority.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Sequencer__enSetPriorityByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                              ADC_nSEQ_PRIORITY enPriorityArg)
{
    uint32_t u32SequencerReg;
    uint32_t u32SequencerMaskReg;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, (uint32_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32SequencerReg = 0U;
        u32SequencerMaskReg = (uint32_t) enSequencerMaskArg;
        while((0U != u32SequencerMaskReg) && (ADC_enERROR_OK == enErrorReg))
        {
            if(0UL != (ADC_enSEQMASK_0 & u32SequencerMaskReg))
            {
                enErrorReg = ADC_Sequencer__enSetPriorityByNumber(enModuleArg, (ADC_nSEQUENCER) u32SequencerReg, enPriorityArg);
            }
            u32SequencerReg++;
            u32SequencerMaskReg >>= 1U;
        }
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetPriorityByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                ADC_nSEQ_PRIORITY enPriorityArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enSequencerArg;
        stRegister.u32Shift *= (ADC_SSPRI_R_SS1_BIT - ADC_SSPRI_R_SS0_BIT);
        stRegister.u32Shift += ADC_SSPRI_R_SS0_BIT;
        stRegister.u32Mask = ADC_SSPRI_SS0_MASK;
        stRegister.uptrAddress = ADC_SSPRI_OFFSET;
        stRegister.u32Value = (uint32_t) enPriorityArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enGetPriorityByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                       ADC_nSEQ_PRIORITY* penPriorityArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penPriorityArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enSequencerArg;
        stRegister.u32Shift *= (ADC_SSPRI_R_SS1_BIT - ADC_SSPRI_R_SS0_BIT);
        stRegister.u32Shift += ADC_SSPRI_R_SS0_BIT;
        stRegister.u32Mask = ADC_SSPRI_SS0_MASK;
        stRegister.uptrAddress = ADC_SSPRI_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penPriorityArg = (ADC_nSEQ_PRIORITY) stRegister.u32Value;
    }
    return (enErrorReg);
}
