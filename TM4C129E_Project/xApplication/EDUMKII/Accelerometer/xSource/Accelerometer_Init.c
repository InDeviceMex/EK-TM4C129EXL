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
    uint32_t u32Number = 0UL;
    ADC_SAMPLE_CONFIG_t stADC0SampleConfig = {
     ADC_enINPUT_0,
     ADC_enSTATE_DIS,
     ADC_enSTATE_DIS,
     ADC_enSTATE_DIS,
     ADC_enSTATE_DIS,
     ADC_enSAMPLE_MODE_SAMPLE,
     ADC_enSH_4,
     ADC_enCOMPARATOR_0
    };

    DMA_CONFIG_t stDMAChConfig = {
        DMA_enSTATE_DIS,
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CONTROL_PRIMARY,
        DMA_enCH_PRIORITY_HIGH,
        DMA_enCH_ENCODER_0
    };

    DMA_CH_CTL_t stDMAChControl =
    {
         DMA_enCH_MODE_BASIC,
         DMA_enSTATE_DIS,
         4UL-1U,
         DMA_enCH_ARBITRATION_SIZE_4,
         DMA_enCH_ACCESS_NON_PRIVILEGED,
         0,
         DMA_enCH_ACCESS_NON_PRIVILEGED,
         0,
         DMA_enCH_DATA_SIZE_WORD,
         DMA_enCH_INCREMENT_NO,
         DMA_enCH_DATA_SIZE_WORD,
         DMA_enCH_INCREMENT_WORD,
    };
    ADC_Sequencer__enRegisterIRQSourceHandler(&EDUMKII_Accelerometer_vIRQSourceHandler,
                                        ADC_enMODULE_0, ADC_enSEQ_1, ADC_enINT_TYPE_DMA);

    pu32AccelerometerArray = EDUMKII_Accelerometer_vSampleArray();
    pu32AccelerometerArray += 3UL;

    DMA_CH_Primary__enSetDestinationEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_15, (uint32_t) pu32AccelerometerArray);
    DMA_CH_Primary__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_15, (uint32_t) (ADC0_BASE + ADC_SS1_FIFO_OFFSET));
    DMA_CH_Primary__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_15, &stDMAChControl);

    DMA_CH_Alternate__enSetDestinationEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_15, (uint32_t) pu32AccelerometerArray);
    DMA_CH_Alternate__enSetSourceEndAddressByNumber(DMA_enMODULE_0, DMA_enCH_15, (uint32_t) (ADC0_BASE + ADC_SS1_FIFO_OFFSET));
    DMA_CH_Alternate__enSetControlRegisterByNumber(DMA_enMODULE_0, DMA_enCH_15, &stDMAChControl);

    DMA_CH__enSetConfigParameters(DMA_enMODULE_0, DMA_enCH_15, &stDMAChConfig);
    DMA_CH__enSetStateByNumber(DMA_enMODULE_0, DMA_enCH_15, DMA_enSTATE_ENA);

    EDUMKII_Common_vAdcInit();

    GPIO__enSetAnalogFunction(EDUMKII_ACCEL_AXIS_X);
    GPIO__enSetAnalogFunction(EDUMKII_ACCEL_AXIS_Y);
    GPIO__enSetAnalogFunction(EDUMKII_ACCEL_AXIS_Z);

    ADC_Sequencer__enSetStateByNumber(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enSTATE_DIS);
    ADC_Sequencer__enSetTriggerByNumber(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enTRIGGER_SOFTWARE);

    stADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_X_INPUT;
    ADC_Sample__enSetConfigGpio(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enSAMPLE_0, &stADC0SampleConfig);

    stADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Y_INPUT;
    ADC_Sample__enSetConfigGpio(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enSAMPLE_1, &stADC0SampleConfig);

    stADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Z_INPUT;
    ADC_Sample__enSetConfigGpio(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enSAMPLE_2, &stADC0SampleConfig);

    stADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Z_INPUT;
    stADC0SampleConfig.enInterrupt = ADC_enSTATE_ENA;
    stADC0SampleConfig.enEnded = ADC_enSTATE_ENA;
    ADC_Sample__enSetConfigGpio(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enSAMPLE_3, &stADC0SampleConfig);

    ADC_Sequencer__enEnableInterruptSourceByNumber(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enINT_TYPE_DMA);
    ADC__enEnableInterruptVectorWithPriority(ADC_enMODULE_0, ADC_enSEQ_1, (ADC_nPRIORITY) NVIC_enVECTOR_PRI_ADC0SEQ1);
    ADC_Sequencer__enSetDMAStateByNumber(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enSTATE_ENA);
    ADC_Sequencer__enSetStateByNumber(ADC_enMODULE_0, ADC_enSEQ_1, ADC_enSTATE_ENA);
    ADC_Sequencer__enGetAllFifoDataByNumber(ADC_enMODULE_0, ADC_enSEQ_1, pu32AccelerometerArray, &u32Number);
    ADC_Sequencer__enClearOverflowByNumber(ADC_enMODULE_0, ADC_enSEQ_1);
    ADC_Sequencer__enClearUnderflowByNumber(ADC_enMODULE_0, ADC_enSEQ_1);
}


