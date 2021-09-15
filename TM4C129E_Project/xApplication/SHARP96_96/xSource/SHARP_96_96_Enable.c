/**
 *
 * @file SHARP_96_96_Enable.c
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
#include <xApplication/SHARP96_96/xHeader/SHARP_96_96_Enable.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void SHARP_96_96__vInitEnable(void)
{
    GPIO__enSetDigitalConfig(GPIO_enGPIOD4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
}

void SHARP_96_96__vEnable(void)
{
    GPIO__vSetData(GPIO_enPORT_D, GPIO_enPIN_4, GPIO_enPIN_4);
}

void SHARP_96_96__vDisable(void)
{
    GPIO__vSetData(GPIO_enPORT_D, GPIO_enPIN_4, 0UL);
}




