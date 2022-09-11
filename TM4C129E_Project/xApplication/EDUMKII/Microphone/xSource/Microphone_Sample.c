/**
 *
 * @file Microphone_Sample.c
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
#include <xApplication/EDUMKII/Microphone/xHeader/Microphone_Sample.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/DMA/DMA.h>

uint32_t u32MicrophoneFifoArray[1UL] = {0UL};
volatile uint32_t u32MicrophoneFlag = 0UL;


uint32_t* EDUMKII_Microphone_vSampleArray(void)
{
    return((uint32_t*) u32MicrophoneFifoArray);
}

void EDUMKII_Microphone_vSample(uint32_t *u32Input)
{
    u32MicrophoneFlag = 0UL;
    ADC_Sequencer__enInitConversionByMask(ADC_enMODULE_0, ADC_enSEQMASK_3);
    while(0UL == u32MicrophoneFlag){}
    *u32Input = u32MicrophoneFifoArray[0];
}

void EDUMKII_Microphone_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    DMA_CHANNEL_t* pstDmaChannel = (DMA_CHANNEL_t*) 0UL;
    volatile uint32_t* u32TempReg = (uint32_t*) 0UL;
    static DMA_CH_CTL_t enChControl = {
         DMA_enCH_MODE_BASIC,
         DMA_enSTATE_DIS,
         1UL-1U,
         DMA_enCH_ARBITRATION_SIZE_1,
         DMA_enCH_ACCESS_NON_PRIVILEGED,
         0UL,
         DMA_enCH_ACCESS_NON_PRIVILEGED,
         0UL,
         DMA_enCH_DATA_SIZE_WORD,
         DMA_enCH_INCREMENT_NO,
         DMA_enCH_DATA_SIZE_WORD,
         DMA_enCH_INCREMENT_WORD,
    };

    pstDmaChannel = &(DMA_CH_PRIMARY->CH[(uint32_t) DMA_enCH_17]);
    u32TempReg = (volatile uint32_t*) &enChControl;
    pstDmaChannel->CTL = *u32TempReg;
    DMA->CH_ENASET = (uint32_t)  DMA_enSTATE_ENA << (uint32_t) DMA_enCH_17;
    u32MicrophoneFlag = 1UL;
}




