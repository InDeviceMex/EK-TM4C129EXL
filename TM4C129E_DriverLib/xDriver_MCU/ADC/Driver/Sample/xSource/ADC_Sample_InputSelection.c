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
                enErrorReg = ADC_Sample__enSetInputByNumber(enModuleArg, (ADC_nSEQUENCER) uxSequencerReg, enSampleArg, enInputArg);
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

ADC_nERROR ADC_Sample__enSetInputByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nINPUT enInputArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;
    UBase_t uxInputReg;
    UBase_t uxExtendedInputReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enInputArg, (UBase_t) ADC_enINPUT_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        uxExtendedInputReg = (UBase_t) enInputArg;
        uxExtendedInputReg >>=  ADC_SS_MUX_R_MUX1_BIT;
        uxExtendedInputReg &= ADC_SS_EMUX_EMUX0_MASK;

        stRegister.uxShift = ADC_SS_EMUX_R_EMUX0_BIT;
        stRegister.uxMask = ADC_SS_EMUX_EMUX0_MASK;
        stRegister.uptrAddress = ADC_SS_EMUX_OFFSET;
        stRegister.uxValue = (UBase_t) uxExtendedInputReg;
        enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    }

    if(ADC_enERROR_OK == enErrorReg)
    {

        uxInputReg = (UBase_t) enInputArg;
        uxInputReg &= ADC_SS_MUX_MUX0_MASK;

        stRegister.uxShift = ADC_SS_MUX_R_MUX0_BIT;
        stRegister.uxMask = ADC_SS_MUX_MUX0_MASK;
        stRegister.uptrAddress = ADC_SS_MUX_OFFSET;
        stRegister.uxValue = (UBase_t) uxInputReg;
        enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sample__enGetInputByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nSAMPLE enSampleArg, ADC_nINPUT* penInputArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;
    UBase_t uxInputReg;

    uxInputReg = 0UL;
    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penInputArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = ADC_SS_EMUX_R_EMUX0_BIT;
        stRegister.uxMask = ADC_SS_EMUX_EMUX0_MASK;
        stRegister.uptrAddress = ADC_SS_EMUX_OFFSET;
        enErrorReg = ADC_Sample__enGetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        uxInputReg = stRegister.uxValue;
        uxInputReg <<= ADC_SS_MUX_R_MUX1_BIT;

        stRegister.uxShift = ADC_SS_MUX_R_MUX0_BIT;
        stRegister.uxMask = ADC_SS_MUX_MUX0_MASK;
        stRegister.uptrAddress = ADC_SS_MUX_OFFSET;
        enErrorReg = ADC_Sample__enSetGeneric(enModuleArg, enSequencerArg, enSampleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        uxInputReg |= stRegister.uxValue;
        *penInputArg = (ADC_nINPUT) uxInputReg;
    }
    return (enErrorReg);
}
