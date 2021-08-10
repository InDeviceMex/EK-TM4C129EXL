/**
 *
 * @file Button_Init.c
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
#include <xApplication/EDUMKII/Button/xHeader/Button_Init.h>
#include <xApplication/EDUMKII/Button/xHeader/Button_Read.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>


void EDUMKII_Button_vInit(EDUMKII_nBUTTON enButtonSelect)
{
    if((uint32_t) EDUMKII_enBUTTON_1 == ((uint32_t) enButtonSelect & (uint32_t) EDUMKII_enBUTTON_1))
    {
        GPIO__vRegisterIRQSourceHandler( &EDUMKII_Button1_vIRQSourceHandler, EDUMKII_BUTTON_1_PORT, EDUMKII_BUTTON_1_PIN);
        GPIO__enSetDigitalConfig(EDUMKII_BUTTON_1, GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);

        GPIO__vEnInterruptVector(EDUMKII_BUTTON_1_PORT, GPIO_enPRI6);
        GPIO__vClearInterruptSource(EDUMKII_BUTTON_1_PORT, EDUMKII_BUTTON_1_PIN);
        GPIO__vSetInterruptSourceConfig(EDUMKII_BUTTON_1_PORT, EDUMKII_BUTTON_1_PIN, GPIO_enINT_CONFIG_EDGE_BOTH);
        GPIO__vEnInterruptSource(EDUMKII_BUTTON_1_PORT, EDUMKII_BUTTON_1_PIN);
    }

    if((uint32_t) EDUMKII_enBUTTON_2 == ((uint32_t) enButtonSelect & (uint32_t) EDUMKII_enBUTTON_2))
    {
        GPIO__vRegisterIRQSourceHandler( &EDUMKII_Button2_vIRQSourceHandler, EDUMKII_BUTTON_2_PORT, EDUMKII_BUTTON_2_PIN);
        GPIO__enSetDigitalConfig(EDUMKII_BUTTON_2, GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);

        GPIO__vEnInterruptVector(EDUMKII_BUTTON_2_PORT, GPIO_enPRI6);
        GPIO__vClearInterruptSource(EDUMKII_BUTTON_2_PORT, EDUMKII_BUTTON_2_PIN);
        GPIO__vSetInterruptSourceConfig(EDUMKII_BUTTON_2_PORT, EDUMKII_BUTTON_2_PIN, GPIO_enINT_CONFIG_EDGE_BOTH);
        GPIO__vEnInterruptSource(EDUMKII_BUTTON_2_PORT, EDUMKII_BUTTON_2_PIN);
    }
}


