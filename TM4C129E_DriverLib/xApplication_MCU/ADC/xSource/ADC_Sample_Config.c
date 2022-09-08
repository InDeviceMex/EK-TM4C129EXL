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

ADC_nERROR ADC_Sample__enSetConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                   ADC_nSAMPLE enMux,
                                   const ADC_SAMPLE_CONFIG_t* pstSampleConfig)
{
    ADC_nERROR enReturn = ADC_enERROR_UNDEF;
    if(0UL != (uint32_t) pstSampleConfig)
    {
        ADC_Sample__enSetInputByNumber(enModule, enSequencer, enMux, pstSampleConfig->enInput);
        ADC_Sample__enSetSampleHoldByNumber(enModule, enSequencer, enMux, pstSampleConfig->enSampleHold);
        ADC_Sample__enSetTempSelectionByNumber(enModule, enSequencer, enMux, pstSampleConfig->enTempSensor);
        ADC_Sample__enSetEndOfSequenceByNumber(enModule, enSequencer, enMux, pstSampleConfig->enEnded);
        ADC_Sample__enSetDifferentialByNumber(enModule, enSequencer, enMux, pstSampleConfig->enDifferential);
        ADC_Sample__enSetOperationModeByNumber(enModule, enSequencer, enMux, pstSampleConfig->enOperation);
        ADC_Sample__enSetComparatorByNumber(enModule, enSequencer, enMux, pstSampleConfig->enComparator);
        if(ADC_enSTATE_ENA == pstSampleConfig->enInterrupt)
        {
            ADC_Sample__enEnableInterruptSourceByNumber(enModule, enSequencer, enMux);
        }
        else
        {
            ADC_Sample__enDisableInterruptSourceByNumber(enModule, enSequencer, enMux);
        }
        enReturn = ADC_enERROR_OK;
    }
    return (enReturn);
}
ADC_nERROR ADC_Sample__enSetConfigGpio(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                       ADC_nSAMPLE enMux,
                                       const ADC_SAMPLE_CONFIG_t* pstSampleConfig)
{
    ADC_nINPUT_GPIO enAdcGpioInput [ADC_enINPUT_MAX ] =
    {
        ADC_enINPUT_GPIO_0, ADC_enINPUT_GPIO_1,
        ADC_enINPUT_GPIO_2, ADC_enINPUT_GPIO_3,
        ADC_enINPUT_GPIO_4, ADC_enINPUT_GPIO_5,
        ADC_enINPUT_GPIO_6, ADC_enINPUT_GPIO_7,
        ADC_enINPUT_GPIO_8, ADC_enINPUT_GPIO_9,
        ADC_enINPUT_GPIO_10, ADC_enINPUT_GPIO_11,
        ADC_enINPUT_GPIO_12, ADC_enINPUT_GPIO_13,
        ADC_enINPUT_GPIO_14, ADC_enINPUT_GPIO_15,
        ADC_enINPUT_GPIO_16, ADC_enINPUT_GPIO_17,
        ADC_enINPUT_GPIO_18, ADC_enINPUT_GPIO_19
    };
    ADC_nERROR enReturn = ADC_enERROR_UNDEF;

    if(0UL != (uint32_t) pstSampleConfig)
    {
        GPIO__vSetAnalogFunction((GPIO_nANALOG_FUNCTION) enAdcGpioInput[(uint32_t) pstSampleConfig->enInput]);
        enReturn = ADC_Sample__enSetConfig(enModule, enSequencer, enMux, pstSampleConfig);
    }
    return (enReturn);
}


ADC_nERROR ADC_Sample__enGetConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                   ADC_nSAMPLE enMux, ADC_SAMPLE_CONFIG_t* pstSampleConfig)
{
    ADC_nERROR enReturn = ADC_enERROR_UNDEF;
    if(0UL != (uint32_t) pstSampleConfig)
    {
        ADC_Sample__enGetInputByNumber(enModule, enSequencer, enMux, &pstSampleConfig->enInput);
        ADC_Sample__enGetSampleHoldByNumber(enModule, enSequencer, enMux, &pstSampleConfig->enSampleHold);
        ADC_Sample__enGetTempSelectionByNumber(enModule, enSequencer, enMux, &pstSampleConfig->enTempSensor);
        ADC_Sample__enGetEndOfSequenceByNumber(enModule, enSequencer, enMux, &pstSampleConfig->enEnded);
        ADC_Sample__enGetDifferentialByNumber(enModule, enSequencer, enMux, &pstSampleConfig->enDifferential);
        ADC_Sample__enGetOperationModeByNumber(enModule, enSequencer, enMux, &pstSampleConfig->enOperation);
        ADC_Sample__enGetComparatorByNumber(enModule, enSequencer, enMux, &pstSampleConfig->enComparator);
        ADC_Sample__enGetInterruptSourceStateByNumber(enModule, enSequencer, enMux, &pstSampleConfig->enInterrupt);
        enReturn = ADC_enERROR_OK;
    }
    return (enReturn);
}



