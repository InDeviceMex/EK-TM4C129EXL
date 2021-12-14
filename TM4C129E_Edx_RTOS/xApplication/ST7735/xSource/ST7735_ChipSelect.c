/**
 *
 * @file ST7735_ChipSelect.c
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
 * @verbatim 18 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/xHeader/ST7735_ChipSelect.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void ST7735__vInitChipSelect(void)
{
    GPIO__enSetDigitalConfig(GPIO_enGPION2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
}

void ST7735__vEnableChipSelect(void)
{
    GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_2, 0UL);
}

void ST7735__vDisableChipSelect(void)
{
    GPIO__vSetData(GPIO_enPORT_N, GPIO_enPIN_2, GPIO_enPIN_2);
}
