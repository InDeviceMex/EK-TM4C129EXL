/**
 *
 * @file Accelerometer_Sample.c
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
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Sample.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/DMA/DMA.h>

UBase_t uxAccelerometerFifoArray[8U] = {0UL};
volatile UBase_t uxAccelerometerFlag = 0UL;

UBase_t* EDUMKII_Accelerometer_vSampleArray(void)
{
    return ((UBase_t*) uxAccelerometerFifoArray);
}

void EDUMKII_Accelerometer_vSample(Base_t *sxX, Base_t *sxY, Base_t *sxZ )
{
    uxAccelerometerFlag = 0UL;
    ADC_Sequencer__enInitConversionByNumber(ADC_enMODULE_0, ADC_enSEQ_1);
    while(0UL == uxAccelerometerFlag){}
    *sxX = (Base_t) uxAccelerometerFifoArray[0] - 2048;
    *sxY = (Base_t) uxAccelerometerFifoArray[1] - 2048;
    *sxZ = (Base_t) uxAccelerometerFifoArray[2] - 2048;
}

void EDUMKII_Accelerometer_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    DMA_CHANNEL_t* pstDmaChannel;
    const volatile UBase_t* uxTempReg;
    static const DMA_CH_CTL_t enChControl = {
         DMA_enCH_MODE_BASIC,
         DMA_enSTATE_DIS,
         4UL-1UL,
         DMA_enCH_ARBITRATION_SIZE_4,
         DMA_enCH_ACCESS_NON_PRIVILEGED,
         0UL,
         DMA_enCH_ACCESS_NON_PRIVILEGED,
         0UL,
         DMA_enCH_DATA_SIZE_WORD,
         DMA_enCH_INCREMENT_NO,
         DMA_enCH_DATA_SIZE_WORD,
         DMA_enCH_INCREMENT_WORD,
    };

    pstDmaChannel = &(DMA_CH_PRIMARY->CH[(UBase_t) DMA_enCH_15]);
    uxTempReg = (const volatile UBase_t*) &enChControl;
    pstDmaChannel->CTL = *uxTempReg;
    DMA->CH_ENASET = (UBase_t)DMA_enSTATE_ENA << (UBase_t) DMA_enCH_15;
    uxAccelerometerFlag = 1UL;
}

