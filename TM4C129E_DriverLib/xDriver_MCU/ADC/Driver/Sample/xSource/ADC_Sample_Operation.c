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
    ADC_nERROR enErrorMemoryReg;
    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        UBase_t uxSequencerReg = 0U;
        UBase_t uxSequencerMaskReg = (UBase_t) enSequencerMaskArg;
        ADC_nERROR enErrorReg = ADC_enERROR_OK;
        while(0U != uxSequencerMaskReg)
        {
            if(0UL != ((UBase_t) ADC_enSEQMASK_0 & uxSequencerMaskReg))
            {
                enErrorReg = ADC_Sample__enSetOperationModeByNumber(enModuleArg, (ADC_nSEQUENCER) uxSequencerReg, enSampleArg, enOperationModeArg);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                enErrorMemoryReg = enErrorReg;
            }
            uxSequencerReg++;
            uxSequencerMaskReg >>= 1U;
        }
    }
    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Sample__enSetOperationModeByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSAMPLE_MODE enOperationModeArg)
{
    ADC_Register_t stRegister;
    stRegister.uxShift = ADC_SS_OP_R_S0DCOP_BIT;
    stRegister.uxMask = ADC_SS_OP_S0DCOP_MASK;
    stRegister.uptrAddress = ADC_SS_OP_OFFSET;
    stRegister.uxValue = (UBase_t) enOperationModeArg;

    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    return (enErrorReg);
}

ADC_nERROR ADC_Sample__enGetOperationModeByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSAMPLE_MODE* penOperationModeArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penOperationModeArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_SS_OP_R_S0DCOP_BIT;
        stRegister.uxMask = ADC_SS_OP_S0DCOP_MASK;
        stRegister.uptrAddress = ADC_SS_OP_OFFSET;
        enErrorReg = ADC_Sample__enGetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penOperationModeArg = (ADC_nSAMPLE_MODE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
