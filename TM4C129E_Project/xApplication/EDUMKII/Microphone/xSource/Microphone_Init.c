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

    DMA_CONFIG_t enDMAChConfig= {
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CTL_PRIMARY ,
        DMA_enCH_PRIO_HIGH ,
        DMA_enCH_ENCODER_0
    };

    DMACHCTL_t enDMAChControl = {
         DMA_enCH_MODE_BASIC,
         DMA_enCH_BURST_OFF,
         1UL-1U,
         DMA_enCH_BURST_SIZE_1,
         0,
         0,
         0,
         0,
         DMA_enCH_SRC_SIZE_WORD,
         DMA_enCH_SRC_INC_NO,
         DMA_enCH_DST_SIZE_WORD,
         DMA_enCH_DST_INC_WORD,
    };

    ADC_Sequencer__enRegisterIRQSourceHandler(&EDUMKII_Microphone_vIRQSourceHandler,
                                        ADC_enMODULE_0, ADC_enSEQ_0, ADC_enINT_TYPE_DMA);

    pu32MicrophoneArray = EDUMKII_Microphone_vSampleArray();
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_14, (uint32_t) pu32MicrophoneArray);
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_14, (uint32_t) (ADC0_BASE + ADC_SS0_FIFO_OFFSET));
    DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_14, enDMAChControl);

    DMA_CH__vSetAlternateDestEndAddress(DMA_enCH_MODULE_14, (uint32_t) pu32MicrophoneArray);
    DMA_CH__vSetAlternateSourceEndAddress(DMA_enCH_MODULE_14, (uint32_t) (ADC0_BASE + ADC_SS0_FIFO_OFFSET));
    DMA_CH__vSetAlternateControlWorld(DMA_enCH_MODULE_14, enDMAChControl);

    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_14, enDMAChConfig);
    DMA_CH__vSetEnable(DMA_enCH_MODULE_14, DMA_enCH_ENA_ENA);

    EDUMKII_Common_vAdcInit();

    GPIO__vSetAnalogFunction(EDUMKII_MICROPHONE);

    ADC_Sequencer__enSetStateByMask(ADC_enMODULE_0, ADC_enSEQMASK_0, ADC_enSTATE_DIS);
    ADC_Sequencer__enSetTriggerByNumber(ADC_enMODULE_0, ADC_enSEQ_0, ADC_enTRIGGER_SOFTWARE);
    ADC_Sample__enSetConfigGpio(ADC_enMODULE_0, ADC_enSEQ_0, ADC_enSAMPLE_0, &stADC0SampleConfig);

    ADC_Sequencer__enEnableInterruptSourceByMask(ADC_enMODULE_0, ADC_enSEQMASK_0, ADC_enINT_TYPE_DMA);
    ADC__vEnInterruptVector(ADC_enMODULE_0, ADC_enSEQ_0,
                            (ADC_nPRIORITY) NVIC_enVECTOR_PRI_ADC0SEQ0);
    ADC_Sequencer__enSetDMAStateByMask(ADC_enMODULE_0, ADC_enSEQMASK_0, ADC_enSTATE_ENA);
    ADC_Sequencer__enSetStateByMask(ADC_enMODULE_0, ADC_enSEQMASK_0, ADC_enSTATE_ENA);
}





