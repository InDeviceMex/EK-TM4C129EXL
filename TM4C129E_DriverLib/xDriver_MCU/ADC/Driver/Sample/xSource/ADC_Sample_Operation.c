/**
 *
 * @file ADC_Sample_Operation.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 6 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Operation.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Sample__enSetOperationModeByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                ADC_nSAMPLE enSampleArg, ADC_nSAMPLE_MODE enOperationModeArg)
{
    uint32_t u32SequencerReg;
    uint32_t u32SequencerMaskReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, (uint32_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        u32SequencerReg = 0U;
        u32SequencerMaskReg = (uint32_t) enSequencerMaskArg;
        enErrorReg = ADC_enERROR_OK;
        while(0U != u32SequencerMaskReg)
        {
            if(0UL != (ADC_enSEQMASK_0 & u32SequencerMaskReg))
            {
                enErrorReg = ADC_Sample__enSetOperationModeByNumber(enModuleArg, (ADC_nSEQUENCER) u32SequencerReg, enSampleArg, enOperationModeArg);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                enErrorMemoryReg = enErrorReg;
            }
            u32SequencerReg++;
            u32SequencerMaskReg >>= 1U;
        }
    }

    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Sample__enSetOperationModeByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSAMPLE_MODE enOperationModeArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_SS_OP_R_S0DCOP_BIT;
    stRegister.u32Mask = ADC_SS_OP_S0DCOP_MASK;
    stRegister.uptrAddress = ADC_SS_OP_OFFSET;
    stRegister.u32Value = (uint32_t) enOperationModeArg;
    enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    return (enErrorReg);
}

ADC_nERROR ADC_Sample__enGetOperationModeByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSAMPLE_MODE* penOperationModeArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penOperationModeArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = ADC_SS_OP_R_S0DCOP_BIT;
        stRegister.u32Mask = ADC_SS_OP_S0DCOP_MASK;
        stRegister.uptrAddress = ADC_SS_OP_OFFSET;
        enErrorReg = ADC_Sample__enGetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penOperationModeArg = (ADC_nSAMPLE_MODE) stRegister.u32Value;
    }
    return (enErrorReg);
}
