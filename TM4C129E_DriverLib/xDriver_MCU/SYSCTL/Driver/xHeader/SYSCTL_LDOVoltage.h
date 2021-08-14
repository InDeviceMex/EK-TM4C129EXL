/*
 * SYSCTL_LDOVoltage.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_LDOVOLTAGE_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_LDOVOLTAGE_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vSetLDOSleepVoltage(SYSCTL_nLDO_VOTAGE enLDOPowerVoltage);
SYSCTL_nLDO_VOTAGE SYSCTL__enGetLDOSleepVoltage(void);
void SYSCTL__vSetLDODeepSleepVoltage(SYSCTL_nLDO_VOTAGE enLDOPowerVoltage);
SYSCTL_nLDO_VOTAGE SYSCTL__enGetLDODeepSleepVoltage(void);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_LDOVOLTAGE_H_ */
