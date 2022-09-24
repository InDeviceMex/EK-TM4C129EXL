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

uint32_t u32AccelerometerFifoArray[8U] = {0UL};
volatile uint32_t u32AccelerometerFlag = 0UL;

uint32_t* EDUMKII_Accelerometer_vSampleArray(void)
{
    return ((uint32_t*) u32AccelerometerFifoArray);
}

void EDUMKII_Accelerometer_vSample(int32_t *s32X, int32_t *s32Y, int32_t *s32Z )
{
    u32AccelerometerFlag = 0UL;
    ADC_Sequencer__enInitConversionByNumber(ADC_enMODULE_0, ADC_enSEQ_1);
    while(0UL == u32AccelerometerFlag){}
    *s32X = (int32_t) u32AccelerometerFifoArray[0] - 2048;
    *s32Y = (int32_t) u32AccelerometerFifoArray[1] - 2048;
    *s32Z = (int32_t) u32AccelerometerFifoArray[2] - 2048;
}

void EDUMKII_Accelerometer_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    DMA_CHANNEL_t* pstDmaChannel;
    const volatile uint32_t* u32TempReg;
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

    pstDmaChannel = &(DMA_CH_PRIMARY->CH[(uint32_t) DMA_enCH_15]);
    u32TempReg = (const volatile uint32_t*) &enChControl;
    pstDmaChannel->CTL = *u32TempReg;
    DMA->CH_ENASET = (uint32_t)DMA_enSTATE_ENA << (uint32_t) DMA_enCH_15;
    u32AccelerometerFlag = 1UL;
}

