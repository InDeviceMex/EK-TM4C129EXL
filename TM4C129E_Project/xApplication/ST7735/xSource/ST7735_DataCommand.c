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

error_t ST7735__enInitDataCommand(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDigitalConfig(GPIO_enGPIOL3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    return (enErrorReg);

}

error_t ST7735__enSetCommand(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDataByNumber(GPIO_enPORT_L, GPIO_enPIN_3, GPIO_enLEVEL_LOW);
    return (enErrorReg);
}

error_t ST7735__enSetData(void)
{
    error_t enErrorReg;
    enErrorReg = (error_t) GPIO__enSetDataByNumber(GPIO_enPORT_L, GPIO_enPIN_3, GPIO_enLEVEL_HIGH);
    return (enErrorReg);
}
