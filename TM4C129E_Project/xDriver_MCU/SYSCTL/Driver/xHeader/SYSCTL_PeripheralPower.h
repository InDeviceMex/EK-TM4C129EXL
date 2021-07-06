/*
 * SYSCTL_PeripheralPower.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERALPOWER_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERALPOWER_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vPowerOffPeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vPowerOnPeripheral(SYSCTL_nPERIPHERAL enPeripheral);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PERIPHERALPOWER_H_ */
