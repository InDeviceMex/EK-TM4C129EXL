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
    DMACHANNEL_t* pstDmaChannel = (DMACHANNEL_t*) 0UL;
    volatile uint32_t* u32TempReg = (uint32_t*) 0UL;
    static DMACHCTL_t enChControl = {
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

    pstDmaChannel = &(DMACH->DMACh[(uint32_t) DMA_enCH_MODULE_17]);
    u32TempReg = (volatile uint32_t*) &enChControl;
    pstDmaChannel->CHCTL = *u32TempReg;
    DMA->ENASET = (uint32_t)  DMA_enCH_ENA_ENA << (uint32_t) DMA_enCH_MODULE_17;
    u32MicrophoneFlag = 1UL;
}




