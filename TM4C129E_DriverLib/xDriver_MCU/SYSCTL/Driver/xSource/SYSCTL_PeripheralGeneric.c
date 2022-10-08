/**
 *
 * @file SYSCTL_PeripheralGeneric.c
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
 * @verbatim 26 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralGeneric.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vWritePeripheral(SYSCTL_nPERIPHERAL enPeripheral,
                              UBase_t uxPeripheralArg, UBase_t uxValueArg)
{
    UBase_t uxRegisterValue = 0UL;
    UBase_t uxNoRegister = 0UL;
    UBase_t uxNoPeripheral = 0UL;
    UBase_t uxOffset = 0UL;

    UBase_t uxRegisterPROffset = SYSCTL_PR_OFFSET;

    uxNoRegister = (UBase_t) enPeripheral;
    uxNoRegister >>= 8UL;
    uxNoRegister &= 0xFFUL;

    uxNoPeripheral = (UBase_t) enPeripheral;
    uxNoPeripheral &= 0xFFUL;

    uxOffset = uxNoRegister;
    uxOffset *= 4UL;
    uxPeripheralArg += uxOffset;
    uxRegisterPROffset += uxOffset;
    uxRegisterValue = MCU__uxReadRegister(SYSCTL_BASE, uxPeripheralArg, 1UL, uxNoPeripheral);
    if(0UL == uxRegisterValue)
    {
        MCU__vWriteRegister(SYSCTL_BASE, uxPeripheralArg, uxValueArg, 1UL, uxNoPeripheral);
        MCU__vNoOperation();
        MCU__vNoOperation();
        MCU__vNoOperation();
        MCU__vNoOperation();
        if(0UL != uxValueArg)
        {
            do
            {
                uxRegisterValue = MCU__uxReadRegister(SYSCTL_BASE, uxRegisterPROffset,
                                                        1UL, uxNoPeripheral);
            }while(0UL == uxRegisterValue);
        }
    }
}

UBase_t SYSCTL__uxReadPeripheral(SYSCTL_nPERIPHERAL enPeripheral, UBase_t uxPeripheralArg)
{
    UBase_t uxRegisterValue = 0UL;
    UBase_t uxNoRegister = 0UL;
    UBase_t uxNoPeripheral = 0UL;
    UBase_t uxOffset = 0UL;

    uxNoRegister = (UBase_t) enPeripheral;
    uxNoRegister >>= 8UL;
    uxNoRegister &= 0xFFUL;

    uxNoPeripheral = (UBase_t) enPeripheral;
    uxNoPeripheral &= 0xFFUL;


    uxOffset = uxNoRegister;
    uxOffset *= 4UL;
    uxPeripheralArg += uxOffset;

    uxRegisterValue = MCU__uxReadRegister(SYSCTL_BASE, uxPeripheralArg, 1UL, uxNoPeripheral);

    return (uxRegisterValue);
}
