/*
 * SYSCTL_Voltage.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_VOLTAGE_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_VOLTAGE_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enSetBrownOutEventAction_VDD(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT enEventArg);
SYSCTL_nERROR SYSCTL__enGetBrownOutEventAction_VDD(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT* penEventArg);

SYSCTL_nERROR SYSCTL__enSetBrownOutEventAction_VDDA(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT enEventArg);
SYSCTL_nERROR SYSCTL__enGetBrownOutEventAction_VDDA(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT* penEventArg);

SYSCTL_nERROR SYSCTL__enSetBrownOutEventAction(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT enVDDEventArg, SYSCTL_nBOR_EVENT enVDDAEventArg);
SYSCTL_nERROR SYSCTL__enGetBrownOutEventAction(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT* penVDDEventArg, SYSCTL_nBOR_EVENT* penVDDAEventArg);

SYSCTL_nERROR SYSCTL__enIsBrownOutTripped_VDD(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStatusArg);
SYSCTL_nERROR SYSCTL__enIsBrownOutTripped_VDDA(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStatusArg);

SYSCTL_nERROR SYSCTL__enClearBrownOutStatus_VDD(SYSCTL_nMODULE enModuleArg);
SYSCTL_nERROR SYSCTL__enClearBrownOutStatus_VDDA(SYSCTL_nMODULE enModuleArg);
SYSCTL_nERROR SYSCTL__enClearBrownOutStatus(SYSCTL_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_VOLTAGE_H_ */
