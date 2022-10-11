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

error_t ST7735__enInitChipSelect(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDigitalConfig(GPIO_enGPION2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    return (enErrorReg);
}

error_t ST7735__enEnableChipSelect(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDataByNumber(GPIO_enPORT_N, GPIO_enPIN_2, GPIO_enLEVEL_LOW);
    return (enErrorReg);
}

error_t ST7735__enDisableChipSelect(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDataByNumber(GPIO_enPORT_N, GPIO_enPIN_2, GPIO_enLEVEL_HIGH);
    return (enErrorReg);
}
