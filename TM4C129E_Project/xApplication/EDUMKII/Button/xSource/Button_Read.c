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

static volatile UBase_t uxButtonState = 0UL;

EDUMKII_nBUTTON EDUMKII_Button_enRead(EDUMKII_nBUTTON enButtonSelect)
{
    return ( (EDUMKII_nBUTTON) uxButtonState);
}


void EDUMKII_Button1_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    UBase_t uxValueButton1 = 0UL;
    GPIO__enGetDataByMask(EDUMKII_BUTTON_1_PORT, EDUMKII_BUTTON_1_PIN, (GPIO_nPINMASK*) &uxValueButton1);
    if(0UL == uxValueButton1)
    {
        uxButtonState |= (UBase_t) EDUMKII_enBUTTON_1;
    }
    else
    {
        uxButtonState &= ~(UBase_t) EDUMKII_enBUTTON_1;
    }
}

void EDUMKII_Button2_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    UBase_t uxValueButton2 = 0UL;
    GPIO__enGetDataByMask(EDUMKII_BUTTON_2_PORT, EDUMKII_BUTTON_2_PIN, (GPIO_nPINMASK*) &uxValueButton2);
    if(0UL == uxValueButton2)
    {
        uxButtonState |= (UBase_t) EDUMKII_enBUTTON_2;
    }
    else
    {
        uxButtonState &= ~(UBase_t) EDUMKII_enBUTTON_2;
    }
}
