/**
 *
 * @file Button_Read.c
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
#include <xApplication/EDUMKII/Button/xHeader/Button_Read.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>

static volatile uint32_t u32ButtonState = 0UL;

EDUMKII_nBUTTON EDUMKII_Button_enRead(EDUMKII_nBUTTON enButtonSelect)
{
    return (EDUMKII_nBUTTON) u32ButtonState;
}


void EDUMKII_Button1_vIRQSourceHandler(void)
{
    uint32_t u32ValueButton1 = 0UL;
     GPIO__enGetData(EDUMKII_BUTTON_1_PORT, EDUMKII_BUTTON_1_PIN, &u32ValueButton1);
    if(0UL == u32ValueButton1)
    {
        u32ButtonState |= (uint32_t) EDUMKII_enBUTTON_1;
    }
    else
    {
        u32ButtonState &= ~(uint32_t) EDUMKII_enBUTTON_1;
    }
}

void EDUMKII_Button2_vIRQSourceHandler(void)
{
    uint32_t u32ValueButton2 = 0UL;
     GPIO__enGetData(EDUMKII_BUTTON_2_PORT, EDUMKII_BUTTON_2_PIN, &u32ValueButton2);
    if(0UL == u32ValueButton2)
    {
        u32ButtonState |= (uint32_t) EDUMKII_enBUTTON_2;
    }
    else
    {
        u32ButtonState &= ~(uint32_t) EDUMKII_enBUTTON_2;
    }
}
