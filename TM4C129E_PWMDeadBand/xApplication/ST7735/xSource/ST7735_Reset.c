/**
 *
 * @file ST7735_Reset.c
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
#include <xApplication/ST7735/xHeader/ST7735_Reset.h>
#include <xDriver_MCU/GPIO/GPIO.h>

error_t ST7735__enInitReset(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDigitalConfig(GPIO_enGPIOH3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    return (enErrorReg);
}

error_t ST7735__enSetReset(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDataByNumber(GPIO_enPORT_H, GPIO_enPIN_3, GPIO_enLEVEL_LOW);
    return (enErrorReg);
}

error_t ST7735__enClearReset(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDataByNumber(GPIO_enPORT_H, GPIO_enPIN_3, GPIO_enLEVEL_HIGH);
    return (enErrorReg);
}
