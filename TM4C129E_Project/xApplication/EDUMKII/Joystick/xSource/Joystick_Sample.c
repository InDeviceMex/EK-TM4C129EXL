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

static volatile EDUMKII_nJOYSTICK enSelectStatus = EDUMKII_enJOYSTICK_NOPRESS;
uint32_t u32JostickFifoArray[2] = {0UL};
volatile uint32_t u32JostickFlag = 0UL;

uint32_t* EDUMKII_Joystick_vSampleArray(void)
{
    return ((uint32_t*) u32JostickFifoArray);
}

void EDUMKII_Joystick_vSampleXY(uint32_t *u32X, uint32_t *u32Y)
{
    u32JostickFlag = 0UL;
    ADC_Sequencer__enInitConversionByMask(ADC_enMODULE_0, ADC_enSEQMASK_1);
    while(0UL == u32JostickFlag){}
    *u32X = (uint32_t) u32JostickFifoArray[0];
    *u32Y = (uint32_t) u32JostickFifoArray[1];

}
void EDUMKII_Joystick_vSampleSelect(EDUMKII_nJOYSTICK *enSelect)
{
    *enSelect = (EDUMKII_nJOYSTICK)enSelectStatus;

}
void EDUMKII_Joystick_vSample(uint32_t *u32X, uint32_t *u32Y, EDUMKII_nJOYSTICK *enSelect)
{
    u32JostickFlag = 0UL;
    ADC_Sequencer__enInitConversionByMask(ADC_enMODULE_0, ADC_enSEQMASK_1);
    while(0UL == u32JostickFlag){}
    *u32X = (uint32_t) u32JostickFifoArray[0];
    *u32Y = (uint32_t) u32JostickFifoArray[1];

    *enSelect = (EDUMKII_nJOYSTICK)enSelectStatus;

}

void EDUMKII_Joystick_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    DMA_CHANNEL_t* pstDmaChannel = (DMA_CHANNEL_t*) 0UL;
    volatile uint32_t* u32TempReg = (uint32_t*) 0UL;
    static DMA_CH_CTL_t enChControl = {
         DMA_enCH_MODE_BASIC,
         DMA_enSTATE_DIS,
         2UL-1U,
         DMA_enCH_ARBITRATION_SIZE_2,
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
    u32TempReg = (volatile uint32_t*) &enChControl;
    pstDmaChannel->CTL = *u32TempReg;
    DMA->CH_ENASET = (uint32_t)  DMA_enSTATE_ENA << (uint32_t) DMA_enCH_15;
    u32JostickFlag = 1UL;
}


void EDUMKII_Select_vIRQSourceHandler(void)
{
    uint32_t u32ValueButton1 = 0UL;
    u32ValueButton1= GPIO__u32GetData(EDUMKII_SELECT_PORT, EDUMKII_SELECT_PIN);
    if(0UL == u32ValueButton1)
    {
        enSelectStatus = EDUMKII_enJOYSTICK_PRESS;
    }
    else
    {
        enSelectStatus = EDUMKII_enJOYSTICK_NOPRESS;
    }
}


