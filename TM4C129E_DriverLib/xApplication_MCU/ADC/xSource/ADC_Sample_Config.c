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

ADC_nSTATUS ADC__enSetSampleConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                   ADC_nMUX enMux,
                                   const ADC_SAMPLE_CONFIG_Typedef* pstSampleConfig)
{
    ADC_nSTATUS enReturn = ADC_enSTATUS_ERROR;
    if(0UL != (uint32_t) pstSampleConfig)
    {
        ADC__vSetSampleInputSelection(enModule, enSequencer, enMux, pstSampleConfig->enInput);
        ADC__vSetSampleSampleHold(enModule, enSequencer, enMux, pstSampleConfig->enSampleHold);
        ADC__vSetSampleTempSelection(enModule, enSequencer, enMux, pstSampleConfig->enTempSensor);
        ADC__vSetSampleEndSequence(enModule, enSequencer, enMux, pstSampleConfig->enEnded);
        ADC__vSetSampleDifferential(enModule, enSequencer, enMux, pstSampleConfig->enDifferential);
        ADC__vSetSampleOperation(enModule, enSequencer, enMux, pstSampleConfig->enOperation);
        ADC__vSetSampleCompSelection(enModule, enSequencer, enMux, pstSampleConfig->enComparator);
        if(ADC_enSEQ_INPUT_INT_ENA == pstSampleConfig->enInterrupt)
        {
            ADC__vEnSeqInterruptSample(enModule, enSequencer, enMux);
        }
        else
        {
            ADC__vDisSeqInterruptSample(enModule, enSequencer, enMux);
        }
        enReturn = ADC_enSTATUS_OK;
    }
    return (enReturn);
}
ADC_nSTATUS ADC__enSetSampleConfigGpio(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                       ADC_nMUX enMux,
                                       const ADC_SAMPLE_CONFIG_Typedef* pstSampleConfig)
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
    ADC_nSTATUS enReturn = ADC_enSTATUS_ERROR;

    if(0UL != (uint32_t) pstSampleConfig)
    {
        GPIO__vSetAnalogFunction((GPIO_nANALOG_FUNCTION) enAdcGpioInput[(uint32_t) pstSampleConfig->enInput]);
        enReturn = ADC__enSetSampleConfig(enModule, enSequencer, enMux, pstSampleConfig);
    }
    return (enReturn);
}


ADC_nSTATUS ADC__enGetSampleConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                                   ADC_nMUX enMux, ADC_SAMPLE_CONFIG_Typedef* pstSampleConfig)
{
    ADC_nSTATUS enReturn = ADC_enSTATUS_ERROR;
    if(0UL != (uint32_t) pstSampleConfig)
    {
        pstSampleConfig->enInput = ADC__enGetSampleInputSelection(enModule, enSequencer, enMux);
        pstSampleConfig->enSampleHold = ADC__enGetSampleSampleHold(enModule, enSequencer, enMux);
        pstSampleConfig->enTempSensor = ADC__enGetSampleTempSelection(enModule, enSequencer, enMux);
        pstSampleConfig->enEnded = ADC__enGetSampleEndSequence(enModule, enSequencer, enMux);
        pstSampleConfig->enDifferential = ADC__enGetSampleDifferential(enModule, enSequencer, enMux);
        pstSampleConfig->enOperation = ADC__enGetSampleOperation(enModule, enSequencer, enMux);
        pstSampleConfig->enComparator = ADC__enGetSampleCompSelection(enModule, enSequencer, enMux);
        pstSampleConfig->enInterrupt = ADC__enGetSeqInterruptSample(enModule, enSequencer, enMux);
        enReturn = ADC_enSTATUS_OK;
    }
    return (enReturn);
}



