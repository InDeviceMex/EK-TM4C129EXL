/**
 *
 * @file ADC_Sample_InputSelection.c
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
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_InputSelection.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Sample__enSetInputByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                ADC_nSAMPLE enSampleArg, ADC_nINPUT enInputArg)
{
    uint32_t u32SequencerReg;
    uint32_t u32SequencerMaskReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, ((uint32_t) ADC_enSEQMASK_ALL + 1UL));
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        u32SequencerReg = 0U;
        u32SequencerMaskReg = (uint32_t) enSequencerMaskArg;
        enErrorReg = ADC_enERROR_OK;
        while(0U != u32SequencerMaskReg)
        {
            if(0UL != (ADC_enSEQMASK_0 & u32SequencerMaskReg))
            {
                enErrorReg = ADC_Sample__enSetInputByNumber(enModuleArg, (ADC_nSEQUENCER) u32SequencerReg, enSampleArg, enInputArg);
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

ADC_nERROR ADC_Sample__enSetInputByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nINPUT enInputArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;
    uint32_t u32InputReg;
    uint32_t u32ExtendedInputReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enInputArg, (uint32_t) ADC_enINPUT_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32ExtendedInputReg = (uint32_t) enInputArg;
        u32ExtendedInputReg >>=  ADC_SS_MUX_R_MUX1_BIT;
        u32ExtendedInputReg &= ADC_SS_EMUX_EMUX0_MASK;

        stRegister.u32Shift = ADC_SS_EMUX_R_EMUX0_BIT;
        stRegister.u32Mask = ADC_SS_EMUX_EMUX0_MASK;
        stRegister.uptrAddress = ADC_SS_EMUX_OFFSET;
        stRegister.u32Value = (uint32_t) u32ExtendedInputReg;
        enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);

        if(ADC_enERROR_OK == enErrorReg)
        {

            u32InputReg = (uint32_t) enInputArg;
            u32InputReg &= ADC_SS_MUX_MUX0_MASK;

            stRegister.u32Shift = ADC_SS_MUX_R_MUX0_BIT;
            stRegister.u32Mask = ADC_SS_MUX_MUX0_MASK;
            stRegister.uptrAddress = ADC_SS_MUX_OFFSET;
            stRegister.u32Value = (uint32_t) u32InputReg;
            enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
        }
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sample__enGetInputByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nINPUT* penInputArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;
    uint32_t u32InputReg;

    if(0UL != (uintptr_t) penInputArg)
    {
        stRegister.u32Shift = ADC_SS_EMUX_R_EMUX0_BIT;
        stRegister.u32Mask = ADC_SS_EMUX_EMUX0_MASK;
        stRegister.uptrAddress = ADC_SS_EMUX_OFFSET;
        enErrorReg = ADC_Sample__enGetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            u32InputReg = stRegister.u32Value;
            u32InputReg <<= ADC_SS_MUX_R_MUX1_BIT;

            stRegister.u32Shift = ADC_SS_MUX_R_MUX0_BIT;
            stRegister.u32Mask = ADC_SS_MUX_MUX0_MASK;
            stRegister.uptrAddress = ADC_SS_MUX_OFFSET;
            enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                u32InputReg |= stRegister.u32Value;
                *penInputArg = (ADC_nINPUT) u32InputReg;
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    return (enErrorReg);
}
