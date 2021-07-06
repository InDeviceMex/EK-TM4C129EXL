/**
 *
 * @file SYSCTL_PeripheralGeneric.h
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

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERALGENERIC_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERALGENERIC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vWritePeripheral(SYSCTL_nPERIPHERAL enPeripheral, uint32_t u32PeripheralArg, uint32_t u32ValueArg);
uint32_t SYSCTL__u32ReadPeripheral(SYSCTL_nPERIPHERAL enPeripheral, uint32_t u32PeripheralArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERALGENERIC_H_ */
