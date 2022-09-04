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
                                   ADC_nMUX enMux,
                                   const ADC_SAMPLE_CONFIG_t* pstSampleConfig)
{
    ADC_nERROR enReturn = ADC_enERROR_UNDEF;
    if(0UL != (uint32_t) pstSampleConfig)
    {
        ADC_Sample__vSetInputSelection(enModule, enSequencer, enMux, pstSampleConfig->enInput);
        ADC_Sample__vSetSampleHold(enModule, enSequencer, enMux, pstSampleConfig->enSampleHold);
        ADC_Sample__vSetTempSelection(enModule, enSequencer, enMux, pstSampleConfig->enTempSensor);
        ADC_Sample__vSetEndSequence(enModule, enSequencer, enMux, pstSampleConfig->enEnded);
        ADC_Sample__vSetDifferential(enModule, enSequencer, enMux, pstSampleConfig->enDifferential);
        ADC_Sample__vSetOperation(enModule, enSequencer, enMux, pstSampleConfig->enOperation);
        ADC_Sample__vSetCompSelection(enModule, enSequencer, enMux, pstSampleConfig->enComparator);
        if(ADC_enSTATE_ENA == pstSampleConfig->enInterrupt)
        {
            ADC_Sample__vEnSeqInterrupt(enModule, enSequencer, enMux);
        }
        else
        {
            ADC_Sample__vDisSeqInterrupt(enModule, enSequencer, enMux);
        }
        enReturn = ADC_enERROR_OK;
    }
    return (enReturn);
}
ADC_nERROR ADC_Sample__enSetConfigGpio(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                       ADC_nMUX enMux,
                                       const ADC_SAMPLE_CONFIG_t* pstSampleConfig)
{
    ADC_nSEQ_INPUT_GPIO enAdcGpioInput [ADC_enSEQ_INPUT_MAX ] =
    {
        ADC_enSEQ_INPUT_GPIO_0, ADC_enSEQ_INPUT_GPIO_1,
        ADC_enSEQ_INPUT_GPIO_2, ADC_enSEQ_INPUT_GPIO_3,
        ADC_enSEQ_INPUT_GPIO_4, ADC_enSEQ_INPUT_GPIO_5,
        ADC_enSEQ_INPUT_GPIO_6, ADC_enSEQ_INPUT_GPIO_7,
        ADC_enSEQ_INPUT_GPIO_8, ADC_enSEQ_INPUT_GPIO_9,
        ADC_enSEQ_INPUT_GPIO_10, ADC_enSEQ_INPUT_GPIO_11,
        ADC_enSEQ_INPUT_GPIO_12, ADC_enSEQ_INPUT_GPIO_13,
        ADC_enSEQ_INPUT_GPIO_14, ADC_enSEQ_INPUT_GPIO_15,
        ADC_enSEQ_INPUT_GPIO_16, ADC_enSEQ_INPUT_GPIO_17,
        ADC_enSEQ_INPUT_GPIO_18, ADC_enSEQ_INPUT_GPIO_19
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
                                   ADC_nMUX enMux, ADC_SAMPLE_CONFIG_t* pstSampleConfig)
{
    ADC_nERROR enReturn = ADC_enERROR_UNDEF;
    if(0UL != (uint32_t) pstSampleConfig)
    {
        pstSampleConfig->enInput = ADC_Sample__enGetInputSelection(enModule, enSequencer, enMux);
        pstSampleConfig->enSampleHold = ADC_Sample__enGetSampleHold(enModule, enSequencer, enMux);
        pstSampleConfig->enTempSensor = ADC_Sample__enGetTempSelection(enModule, enSequencer, enMux);
        pstSampleConfig->enEnded = ADC_Sample__enGetEndSequence(enModule, enSequencer, enMux);
        pstSampleConfig->enDifferential = ADC_Sample__enGetDifferential(enModule, enSequencer, enMux);
        pstSampleConfig->enOperation = ADC_Sample__enGetOperation(enModule, enSequencer, enMux);
        pstSampleConfig->enComparator = ADC_Sample__enGetCompSelection(enModule, enSequencer, enMux);
        pstSampleConfig->enInterrupt = ADC_Sample__enGetSeqInterrupt(enModule, enSequencer, enMux);
        enReturn = ADC_enERROR_OK;
    }
    return (enReturn);
}



