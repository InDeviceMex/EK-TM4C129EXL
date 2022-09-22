/**
 *
 * @file ADC_Sample_Config.c
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ADC/xHeader/ADC_Sample_Config.h>

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

ADC_nERROR ADC_Sample__enSetConfig(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nSAMPLE enSampleArg, const ADC_SAMPLE_CONFIG_t* pstSampleConfigArg)
{
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pstSampleConfigArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetInputByNumber(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg->enInput);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetSampleHoldByNumber(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg->enSampleHold);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetTempSelectionByNumber(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg->enTempSensor);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetEndOfSequenceByNumber(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg->enEnded);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetDifferentialByNumber(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg->enDifferential);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetOperationModeByNumber(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg->enOperation);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetComparatorByNumber(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg->enComparator);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetInterruptSourceStateByNumber(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg->enInterrupt);
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sample__enSetConfigGpio(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nSAMPLE enSampleArg, const ADC_SAMPLE_CONFIG_t* pstSampleConfigArg)
{
    ADC_nINPUT_GPIO enAdcGpioInput [(uint32_t) ADC_enINPUT_MAX] =
    {
        ADC_enINPUT_GPIO_0 , ADC_enINPUT_GPIO_1 , ADC_enINPUT_GPIO_2 , ADC_enINPUT_GPIO_3 , ADC_enINPUT_GPIO_4 , ADC_enINPUT_GPIO_5 , ADC_enINPUT_GPIO_6 , ADC_enINPUT_GPIO_7 ,
        ADC_enINPUT_GPIO_8 , ADC_enINPUT_GPIO_9 , ADC_enINPUT_GPIO_10, ADC_enINPUT_GPIO_11, ADC_enINPUT_GPIO_12, ADC_enINPUT_GPIO_13, ADC_enINPUT_GPIO_14, ADC_enINPUT_GPIO_15,
        ADC_enINPUT_GPIO_16, ADC_enINPUT_GPIO_17, ADC_enINPUT_GPIO_18, ADC_enINPUT_GPIO_19
    };
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pstSampleConfigArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) pstSampleConfigArg->enInput, (uint32_t) ADC_enINPUT_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) GPIO__enSetAnalogFunction((GPIO_nANALOG_FUNCTION) enAdcGpioInput[(uint32_t) pstSampleConfigArg->enInput]);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enSetConfig(enModuleArg, enSequencerArg, enSampleArg, pstSampleConfigArg);
    }
    return (enErrorReg);
}


ADC_nERROR ADC_Sample__enGetConfig(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nSAMPLE enSampleArg, ADC_SAMPLE_CONFIG_t* pstSampleConfigArg)
{
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pstSampleConfigArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enGetInputByNumber(enModuleArg, enSequencerArg, enSampleArg, &pstSampleConfigArg->enInput);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enGetSampleHoldByNumber(enModuleArg, enSequencerArg, enSampleArg, &pstSampleConfigArg->enSampleHold);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enGetTempSelectionByNumber(enModuleArg, enSequencerArg, enSampleArg, &pstSampleConfigArg->enTempSensor);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enGetEndOfSequenceByNumber(enModuleArg, enSequencerArg, enSampleArg, &pstSampleConfigArg->enEnded);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enGetDifferentialByNumber(enModuleArg, enSequencerArg, enSampleArg, &pstSampleConfigArg->enDifferential);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enGetOperationModeByNumber(enModuleArg, enSequencerArg, enSampleArg, &pstSampleConfigArg->enOperation);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enGetComparatorByNumber(enModuleArg, enSequencerArg, enSampleArg, &pstSampleConfigArg->enComparator);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Sample__enGetInterruptSourceStateByNumber(enModuleArg, enSequencerArg, enSampleArg, &pstSampleConfigArg->enInterrupt);
    }
    return (enErrorReg);
}



