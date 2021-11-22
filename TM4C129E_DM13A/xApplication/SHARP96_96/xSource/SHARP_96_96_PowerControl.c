/**
 *
 * @file SHARP_96_96_PowerControl.c
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
#include <xApplication/SHARP96_96/xHeader/SHARP_96_96_PowerControl.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void SHARP_96_96__vInitPowerControl(void)
{
    GPIO__enSetDigitalConfig(GPIO_enGPIOD2, GPIO_enCONFIG_OUTPUT_6MA_PUSHPULL);
}

void SHARP_96_96__vPowerOn(void)
{
    GPIO__vSetData(GPIO_enPORT_D, GPIO_enPIN_2, GPIO_enPIN_2);
}

void SHARP_96_96__vPowerOff(void)
{
    GPIO__vSetData(GPIO_enPORT_D, GPIO_enPIN_2, 0UL);
}

