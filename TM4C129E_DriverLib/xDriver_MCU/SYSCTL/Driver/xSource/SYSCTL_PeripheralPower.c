/*
 * SYSCTL_PeripheralPower.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralPower.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

static void SYSCTL__vPowerPeripheral(SYSCTL_nPERIPHERAL enPeripheral, UBase_t value);

static void SYSCTL__vPowerPeripheral(SYSCTL_nPERIPHERAL enPeripheral, UBase_t value)
{
    UBase_t uxNoRegister = 0UL;
    UBase_t uxNoPeripheral = 0UL;
    UBase_t uxOffset = 0UL;

    UBase_t uxRegisterPCOffset = SYSCTL_PC_OFFSET;

    uxNoRegister = (UBase_t) enPeripheral;
    uxNoRegister >>= 8UL;
    uxNoRegister &= 0xFFUL;

    uxNoPeripheral = (UBase_t) enPeripheral;
    uxNoPeripheral &= 0xFFUL;

    uxOffset = uxNoRegister;
    uxOffset *= 4UL;
    uxRegisterPCOffset += uxOffset;

    MCU__vWriteRegister(SYSCTL_BASE, uxRegisterPCOffset, value, 1UL, uxNoPeripheral);
}

void SYSCTL__vPowerOffPeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL__vPowerPeripheral(enPeripheral, 0UL);
}

void SYSCTL__vPowerOnPeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL__vPowerPeripheral(enPeripheral, 1UL);
}
