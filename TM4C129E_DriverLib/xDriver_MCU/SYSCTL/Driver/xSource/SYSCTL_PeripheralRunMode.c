/**
 *
 * @file SYSCTL_PeripheralRunMode.c
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
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralRunMode.h>

#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralGeneric.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vEnRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL__vWritePeripheral(enPeripheral, SYSCTL_RCGC_OFFSET, 1UL);
}

void SYSCTL__vDisRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL__vWritePeripheral(enPeripheral, SYSCTL_RCGC_OFFSET, 0UL);
}
