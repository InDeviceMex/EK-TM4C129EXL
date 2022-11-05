/*
 * SYSCTL_LDOVoltage.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_LDOVOLTAGE_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_LDOVOLTAGE_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enSetLDOCustomVoltageOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE enVoltageArg);
SYSCTL_nERROR SYSCTL__enGetLDOCustomVoltageOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg);

SYSCTL_nERROR SYSCTL__enGetLDODefaultVoltageWithPLLOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg);
SYSCTL_nERROR SYSCTL__enGetLDODefaultVoltageNoPLLOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg);

SYSCTL_nERROR SYSCTL__enUseLDOCustomVoltageOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg);
SYSCTL_nERROR SYSCTL__enIsLDOCustomVoltageOnSleepModeUsed(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg);


SYSCTL_nERROR SYSCTL__enSetLDOCustomVoltageOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE enVoltageArg);
SYSCTL_nERROR SYSCTL__enGetLDOCustomVoltageOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg);

SYSCTL_nERROR SYSCTL__enGetLDODefaultVoltage30KHzOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg);
SYSCTL_nERROR SYSCTL__enGetLDODefaultVoltageNoPLLOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg);

SYSCTL_nERROR SYSCTL__enUseLDOCustomVoltageOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg);
SYSCTL_nERROR SYSCTL__enIsLDOCustomVoltageOnDeepSleepModeUsed(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_LDOVOLTAGE_H_ */
