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
    UBase_t uxNoRegister = 0UL;
    UBase_t uxNoPeripheral = 0UL;
    UBase_t uxOffset = 0UL;

    UBase_t uxRegisterSROffset = SYSCTL_SR_OFFSET;

    uxNoRegister = (UBase_t) enPeripheral;
    uxNoRegister >>= 8UL;
    uxNoRegister &= 0xFFUL;

    uxNoPeripheral = (UBase_t) enPeripheral;
    uxNoPeripheral &= 0xFFUL;

    uxOffset = uxNoRegister;
    uxOffset *= 4UL;
    uxRegisterSROffset += uxOffset;

    MCU__vWriteRegister(SYSCTL_BASE, uxRegisterSROffset, 1UL, 1UL, uxNoPeripheral);

    MCU__vNoOperation();
    MCU__vNoOperation();
    MCU__vNoOperation();
    MCU__vNoOperation();

    MCU__vWriteRegister(SYSCTL_BASE, uxRegisterSROffset, 0UL, 1UL, uxNoPeripheral);

    MCU__vNoOperation();
    MCU__vNoOperation();
    MCU__vNoOperation();
    MCU__vNoOperation();
}
