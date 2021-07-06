/*
 * SYSCTL_PeripheralPower.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralPower.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

static void SYSCTL__vPowerPeripheral(SYSCTL_nPERIPHERAL enPeripheral, uint32_t value);

static void SYSCTL__vPowerPeripheral(SYSCTL_nPERIPHERAL enPeripheral, uint32_t value)
{
    uint32_t u32NoRegister = 0UL;
    uint32_t u32NoPeripheral = 0UL;
    uint32_t u32Offset = 0UL;

    uint32_t u32RegisterPCOffset = SYSCTL_PC_OFFSET;

    u32NoRegister = (uint32_t) enPeripheral;
    u32NoRegister >>= 8UL;
    u32NoRegister &= 0xFFUL;

    u32NoPeripheral = (uint32_t) enPeripheral;
    u32NoPeripheral &= 0xFFUL;

    u32Offset = u32NoRegister;
    u32Offset *= 4UL;
    u32RegisterPCOffset += u32Offset;

    MCU__vWriteRegister(SYSCTL_BASE, u32RegisterPCOffset, value, 1UL, u32NoPeripheral);
}

void SYSCTL__vPowerOffPeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL__vPowerPeripheral(enPeripheral, 0UL);
}

void SYSCTL__vPowerOnPeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL__vPowerPeripheral(enPeripheral, 1UL);
}

