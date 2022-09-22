/**
 *
 * @file Microphone_Init.c
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
 * @verbatim 18 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/EDUMKII/Microphone/xHeader/Microphone_Init.h>
#include <xApplication/EDUMKII/Microphone/xHeader/Microphone_Enum.h>
#include <xApplication/EDUMKII/Microphone/xHeader/Microphone_Sample.h>
#include <xApplication/EDUMKII/Common/xHeader/Common_Adc.h>
#include <xApplication/EDUMKII/Common/xHeader/Common_Timer.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xApplication_MCU/ADC/ADC.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/DMA/DMA.h>


void EDUMKII_Microphone_vInit(void)
{
    uint32_t* pu32MicrophoneArray = (uint32_t*) 0UL;
    ADC_SAMPLE_CONFIG_t stADC0SampleConfig = {
        EDUMKII_MICROPHONE_INPUT,
        ADC_enSTATE_DIS,
        ADC_enSTATE_ENA,
        ADC_enSTATE_ENA,
        ADC_enSTATE_DIS,
        ADC_enSAMPLE_MODE_SAMPLE,
        ADC_enSH_8,
        ADC_enCOMPARATOR_0
    };

    DMA_CONFIG_t stDMAChConfig= {
        DMA_enSTATE_DIS,
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CONTROL_PRIMARY ,
        DMA_enCH_PRIORITY_HIGH ,
        DMA_enCH_ENCODER_0
    };

    DMA_CH_CTL_t stDMAChControl = {
         DMA_enCH_MODE_BASIC,
         DMA_enSTATE_DIS,
         1UL-1U,
         DMA_enCH_ARBITRATION_SIZE_1,
         DMA_enCH_ACCESS_NON_PRIVILEGED,
         0,
         DMA_enCH_ACCESS_NON_PRIVILEGED,
         0,
         DMA_enCH_DATA_SIZE_WORD,
         DMA_enCH_INCREMENT_NO,
         DMA_enCH_DATA_SIZE_WORD,
         DMA_enCH_INCREMENT_WORD,
    };

    ADC_Sequencer__enRegisterIRQSourceHandler(&EDUMKII_Microphone_vIRQSourceHandler,
                                        ADC_enMODULE_0, ADC_enSEQ_3, ADC_enINT_TYPE_DMA);

    pu32MicrophoneArray = EDUMKII_Microphone_vSampleArray();
    DMA_CH_Primary__enSetDestinationEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_17, (uint32_t) pu32MicrophoneArray);
    DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_17, (uint32_t) (ADC0_BASE + ADC_SS3_FIFO_OFFSET));
    DMA_CH_Primary__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_17, &stDMAChControl);

    DMA_CH_Alternate__enSetDestinationEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_17, (uint32_t) pu32MicrophoneArray);
    DMA_CH_Alternate__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_17, (uint32_t) (ADC0_BASE + ADC_SS3_FIFO_OFFSET));
    DMA_CH_Alternate__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_17, &stDMAChControl);

    DMA_CH__enSetConfigParameters(DMA_enMODULE_0, DMA_enCH_17, &stDMAChConfig);
    DMA_CH__enSetStateByNumber(DMA_enMODULE_0, DMA_enCH_17, DMA_enSTATE_ENA);

    EDUMKII_Common_vAdcInit();

    GPIO__enSetAnalogFunction(EDUMKII_MICROPHONE);

    ADC_Sequencer__enSetStateByMask(ADC_enMODULE_0, ADC_enSEQMASK_3, ADC_enSTATE_DIS);
    ADC_Sequencer__enSetTriggerByNumber(ADC_enMODULE_0, ADC_enSEQ_3, ADC_enTRIGGER_SOFTWARE);
    ADC_Sample__enSetConfigGpio(ADC_enMODULE_0, ADC_enSEQ_3, ADC_enSAMPLE_0, &stADC0SampleConfig);

    ADC_Sequencer__enEnableInterruptSourceByMask(ADC_enMODULE_0, ADC_enSEQMASK_3, ADC_enINT_TYPE_DMA);
    ADC__enEnableInterruptVectorWithPriority(ADC_enMODULE_0, ADC_enSEQ_3, (ADC_nPRIORITY) NVIC_enVECTOR_PRI_ADC0SEQ3);
    ADC_Sequencer__enSetDMAStateByMask(ADC_enMODULE_0, ADC_enSEQMASK_3, ADC_enSTATE_ENA);
    ADC_Sequencer__enSetStateByMask(ADC_enMODULE_0, ADC_enSEQMASK_3, ADC_enSTATE_ENA);
}





