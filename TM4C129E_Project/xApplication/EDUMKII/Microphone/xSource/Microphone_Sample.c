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

UBase_t uxMicrophoneFifoArray[1UL] = {0UL};
volatile UBase_t uxMicrophoneFlag = 0UL;


UBase_t* EDUMKII_Microphone_vSampleArray(void)
{
    return((UBase_t*) uxMicrophoneFifoArray);
}

void EDUMKII_Microphone_vSample(UBase_t *uxInput)
{
    uxMicrophoneFlag = 0UL;
    ADC_Sequencer__enInitConversionByNumber(ADC_enMODULE_0, ADC_enSEQ_3);
    while(0UL == uxMicrophoneFlag){}
    *uxInput = uxMicrophoneFifoArray[0];
}

void EDUMKII_Microphone_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    DMA_CHANNEL_t* pstDmaChannel = (DMA_CHANNEL_t*) 0UL;
    volatile UBase_t* uxTempReg = (UBase_t*) 0UL;
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

    pstDmaChannel = &(DMA_CH_PRIMARY->CH[(UBase_t) DMA_enCH_17]);
    uxTempReg = (volatile UBase_t*) &enChControl;
    pstDmaChannel->CTL = *uxTempReg;
    DMA->CH_ENASET = (UBase_t)  DMA_enSTATE_ENA << (UBase_t) DMA_enCH_17;
    uxMicrophoneFlag = 1UL;
}




