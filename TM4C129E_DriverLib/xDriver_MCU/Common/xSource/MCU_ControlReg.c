/**
 *
 * @file MCU_ControlReg.c
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
 * @verbatim 17 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_ControlReg.h>

void MCU__vSetStackValue(MCU_nSTACK enStack, UBase_t uxStackValue)
{
    if(MCU_enSTACK_MSP == enStack)
    {
        MCU__vSetMSPValue(uxStackValue);
    }
    else
    {
        MCU__vSetPSPValue(uxStackValue);
    }
}

UBase_t MCU__uxGetStackValue(MCU_nSTACK enStack)
{
    UBase_t uxStackValueReg;
    if(MCU_enSTACK_MSP == enStack)
    {
        uxStackValueReg = MCU__uxGetMSPValue();
    }
    else
    {
        uxStackValueReg = MCU__uxGetPSPValue();
    }
    return (uxStackValueReg);
}

