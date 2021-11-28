/**
 *
 * @file Accelerometer_Init.c
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
 * @verbatim 17 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Init.h>
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Enum.h>
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Sample.h>
#include <xApplication/EDUMKII/Common/xHeader/Common_Adc.h>
#include <xApplication/EDUMKII/Common/xHeader/Common_Timer.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>

#include <xApplication_MCU/ADC/ADC.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

#include <xDriver_MCU/DMA/DMA.h>


void EDUMKII_Accelerometer_vInit(void)
{
    uint32_t* pu32AccelerometerArray = (uint32_t*) 0UL;
    ADC_SAMPLE_CONFIG_t stADC0SampleConfig = {
     ADC_enSEQ_INPUT_0,
     ADC_enSEQ_INPUT_DIFF_DIS,
     ADC_enSEQ_INPUT_ENDED_DIS,
     ADC_enSEQ_INPUT_INT_DIS,
     ADC_enSEQ_INPUT_TEMP_DIS,
     ADC_enSEQ_INPUT_OPERATION_SAMPLE,
     ADC_enSEQ_SAMPLE_HOLD_8,
     ADC_enCOMPARATOR_0
    };

    DMA_CONFIG_t enDMAChConfig = {
        DMA_enCH_REQTYPE_BOTH, DMA_enCH_PERIPHERAL_ENA, DMA_enCH_CTL_PRIMARY, DMA_enCH_PRIO_HIGH, DMA_enCH_ENCODER_0
    };

    DMACHCTL_t enDMAChControl =
    {
         DMA_enCH_MODE_BASIC,
         DMA_enCH_BURST_OFF,
         4UL-1U,
         DMA_enCH_BURST_SIZE_4,
         0,
         0,
         0,
         0,
         DMA_enCH_SRC_SIZE_WORD,
         DMA_enCH_SRC_INC_NO,
         DMA_enCH_DST_SIZE_WORD,
         DMA_enCH_DST_INC_WORD,
    };
    ADC_Sample__vRegisterIRQSourceHandler(&EDUMKII_Accelerometer_vIRQSourceHandler,
                                        ADC_enMODULE_0, ADC_enSEQ_2, ADC_enINT_SOURCE_DMA);

    pu32AccelerometerArray = EDUMKII_Accelerometer_vSampleArray();
    pu32AccelerometerArray += 3UL;

    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_16, (uint32_t) pu32AccelerometerArray);
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_16, (uint32_t) (ADC0_BASE + ADC_SSFIFO2_OFFSET));
    DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_16, enDMAChControl);

    DMA_CH__vSetAlternateDestEndAddress(DMA_enCH_MODULE_16, (uint32_t) pu32AccelerometerArray);
    DMA_CH__vSetAlternateSourceEndAddress(DMA_enCH_MODULE_16, (uint32_t) (ADC0_BASE + ADC_SSFIFO2_OFFSET));
    DMA_CH__vSetAlternateControlWorld(DMA_enCH_MODULE_16, enDMAChControl);

    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_16, enDMAChConfig);
    DMA_CH__vSetEnable(DMA_enCH_MODULE_16, DMA_enCH_ENA_ENA);

    EDUMKII_Common_vAdcInit();

    GPIO__vSetAnalogFunction(EDUMKII_ACCEL_AXIS_X);
    GPIO__vSetAnalogFunction(EDUMKII_ACCEL_AXIS_Y);
    GPIO__vSetAnalogFunction(EDUMKII_ACCEL_AXIS_Z);

    ADC__vSetSequencerEnable(ADC_enMODULE_0, ADC_enSEQMASK_2, ADC_enSEQ_ENABLE_DIS);
    ADC__vSetSequencerTrigger(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enSEQ_TRIGGER_SOFTWARE);

    stADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_X_INPUT;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enMUX_0, &stADC0SampleConfig);

    stADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Y_INPUT;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enMUX_1, &stADC0SampleConfig);

    stADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Z_INPUT;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enMUX_2, &stADC0SampleConfig);

    stADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Z_INPUT;
    stADC0SampleConfig.enInterrupt = ADC_enSEQ_INPUT_INT_ENA;
    stADC0SampleConfig.enEnded = ADC_enSEQ_INPUT_ENDED_ENA;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enMUX_3, &stADC0SampleConfig);

    ADC__vEnSeqInterruptSource(ADC_enMODULE_0, ADC_enSEQMASK_2, ADC_enINT_SOURCE_DMA);
    ADC__vEnInterruptVector(ADC_enMODULE_0, ADC_enSEQ_2, (ADC_nPRIORITY) NVIC_enPriority_ADC0SEQ2);
    ADC__vSetDMAEnable(ADC_enMODULE_0, ADC_enSEQMASK_2, ADC_enDMA_ENABLE_ENA);
    ADC__vSetSequencerEnable(ADC_enMODULE_0, ADC_enSEQMASK_2, ADC_enSEQ_ENABLE_ENA);
}


