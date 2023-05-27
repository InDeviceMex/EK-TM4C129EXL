/**
 *
 * @file Joystick_Sample.c
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
#include <xApplication/EDUMKII/Joystick/xHeader/Joystick_Sample.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/DMA/DMA.h>

static EDUMKII_nJOYSTICK enSelectStatus = EDUMKII_enJOYSTICK_NOPRESS;
static UBase_t uxJostickFifoArray[4] = {0UL};
static volatile UBase_t uxJostickFlag = 0UL;

UBase_t* EDUMKII_Joystick_vSampleArray(void)
{
    return ((UBase_t*) uxJostickFifoArray);
}

void EDUMKII_Joystick_vSampleXY(UBase_t *uxX, UBase_t *uxY)
{
    uxJostickFlag = 0UL;
    ADC_Sequencer__enInitConversionByNumber(ADC_enMODULE_0, ADC_enSEQ_2);
    while(0UL == uxJostickFlag){}
    *uxX = (UBase_t) uxJostickFifoArray[0];
    *uxY = (UBase_t) uxJostickFifoArray[1];

}
void EDUMKII_Joystick_vSampleSelect(EDUMKII_nJOYSTICK *enSelect)
{
    *enSelect = (EDUMKII_nJOYSTICK)enSelectStatus;

}
void EDUMKII_Joystick_vSample(UBase_t *uxX, UBase_t *uxY, EDUMKII_nJOYSTICK *enSelect)
{
    uxJostickFlag = 0UL;
    ADC_Sequencer__enInitConversionByNumber(ADC_enMODULE_0, ADC_enSEQ_2);
    while(0UL == uxJostickFlag){}
    *uxX = (UBase_t) uxJostickFifoArray[0];
    *uxY = (UBase_t) uxJostickFifoArray[1];

    *enSelect = (EDUMKII_nJOYSTICK)enSelectStatus;

}

void EDUMKII_Joystick_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    DMA_CHANNEL_t* pstDmaChannel = (DMA_CHANNEL_t*) 0UL;
    volatile UBase_t* uxTempReg = (UBase_t*) 0UL;
    static DMA_CH_CTL_t enChControl = {
         DMA_enCH_MODE_BASIC,
         DMA_enSTATE_DIS,
         4UL-1U,
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

    pstDmaChannel = &(DMA_CH_PRIMARY->CH[(UBase_t) DMA_enCH_16]);
    uxTempReg = (volatile UBase_t*) &enChControl;
    pstDmaChannel->CTL = *uxTempReg;
    DMA->CH_ENASET = (UBase_t)  DMA_enSTATE_ENA << (UBase_t) DMA_enCH_16;
    uxJostickFlag = 1UL;
}


void EDUMKII_Select_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    UBase_t uxValueButton1 = 0UL;
    GPIO__enGetDataByMask(EDUMKII_SELECT_PORT, EDUMKII_SELECT_PIN, (GPIO_nPINMASK*) &uxValueButton1);
    if(0UL == uxValueButton1)
    {
        enSelectStatus = EDUMKII_enJOYSTICK_PRESS;
    }
    else
    {
        enSelectStatus = EDUMKII_enJOYSTICK_NOPRESS;
    }
}


