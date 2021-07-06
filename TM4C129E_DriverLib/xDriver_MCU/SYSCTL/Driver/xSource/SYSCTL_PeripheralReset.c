/**
 *
 * @file SYSCTL_PeripheralReset.c
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralReset.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vResetPeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = 0UL;
    uint32_t u32NoPeripheral = 0UL;
    uint32_t u32Offset = 0UL;

    uint32_t u32RegisterSROffset = SYSCTL_SR_OFFSET;

    u32NoRegister = (uint32_t) enPeripheral;
    u32NoRegister >>= 8UL;
    u32NoRegister &= 0xFFUL;

    u32NoPeripheral = (uint32_t) enPeripheral;
    u32NoPeripheral &= 0xFFUL;

    u32Offset = u32NoRegister;
    u32Offset *= 4UL;
    u32RegisterSROffset += u32Offset;

    MCU__vWriteRegister(SYSCTL_BASE, u32RegisterSROffset, 1UL, 1UL, u32NoPeripheral);

    MCU__vNoOperation();
    MCU__vNoOperation();
    MCU__vNoOperation();
    MCU__vNoOperation();

    MCU__vWriteRegister(SYSCTL_BASE, u32RegisterSROffset, 0UL, 1UL, u32NoPeripheral);

    MCU__vNoOperation();
    MCU__vNoOperation();
    MCU__vNoOperation();
    MCU__vNoOperation();
}
