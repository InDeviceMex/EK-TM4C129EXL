/**
 *
 * @file SHARP_96_96_ChipSelect.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication/SHARP96_96/xHeader/SHARP_96_96_ChipSelect.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void SHARP_96_96__vInitChipSelect(void)
{
    GPIO__enSetDigitalConfig(GPIO_enGPIOD5, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
}

void SHARP_96_96__vEnableChipSelect(void)
{
    GPIO__enSetDataByNumber(GPIO_enPORT_D, GPIO_enPIN_5, GPIO_enLEVEL_HIGH);
}

void SHARP_96_96__vDisableChipSelect(void)
{
    GPIO__enSetDataByNumber(GPIO_enPORT_D, GPIO_enPIN_5, GPIO_enLEVEL_LOW);
}




