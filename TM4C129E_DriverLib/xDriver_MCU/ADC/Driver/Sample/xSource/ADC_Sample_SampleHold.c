/**
 *
 * @file ADC_Sample_SampleHold.c
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
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_SampleHold.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Sample__enSetSampleHoldByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                ADC_nSAMPLE enSampleArg, ADC_nSH enSampleHoldArg)
{
    UBase_t uxSequencerReg;
    UBase_t uxSequencerMaskReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        uxSequencerReg = 0U;
        uxSequencerMaskReg = (UBase_t) enSequencerMaskArg;
        enErrorReg = ADC_enERROR_OK;
        while(0U != uxSequencerMaskReg)
        {
            if(0UL != ((UBase_t) ADC_enSEQMASK_0 & uxSequencerMaskReg))
            {
                enErrorReg = ADC_Sample__enSetSampleHoldByNumber(enModuleArg, (ADC_nSEQUENCER) uxSequencerReg, enSampleArg, enSampleHoldArg);
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

ADC_nERROR ADC_Sample__enSetSampleHoldByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSH enSampleHoldArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.uxShift = ADC_SS_TSH_R_TSH0_BIT;
    stRegister.uxMask = ADC_SS_TSH_TSH0_MASK;
    stRegister.uptrAddress = ADC_SS_TSH_OFFSET;
    stRegister.uxValue = (UBase_t) enSampleHoldArg;
    enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    return (enErrorReg);
}

ADC_nERROR ADC_Sample__enGetSampleHoldByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nSH* penSampleHoldArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penSampleHoldArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = ADC_SS_TSH_R_TSH0_BIT;
        stRegister.uxMask = ADC_SS_TSH_TSH0_MASK;
        stRegister.uptrAddress = ADC_SS_TSH_OFFSET;
        enErrorReg = ADC_Sample__enGetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penSampleHoldArg = (ADC_nSH) stRegister.uxValue;
    }
    return (enErrorReg);
}
