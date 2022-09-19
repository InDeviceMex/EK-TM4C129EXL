/**
 *
 * @file ST7735_DataCommand.c
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
#include <xApplication/ST7735/xHeader/ST7735_DataCommand.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void ST7735__vInitDataCommand(void)
{
    GPIO__enSetDigitalConfig(GPIO_enGPIOL3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
}

void ST7735__vSetCommand(void)
{
    GPIO__enSetDataByNumber(GPIO_enPORT_L, GPIO_enPIN_3, GPIO_enLEVEL_LOW);
}

void ST7735__vSetData(void)
{
    GPIO__enSetDataByNumber(GPIO_enPORT_L, GPIO_enPIN_3, GPIO_enLEVEL_HIGH);
}
