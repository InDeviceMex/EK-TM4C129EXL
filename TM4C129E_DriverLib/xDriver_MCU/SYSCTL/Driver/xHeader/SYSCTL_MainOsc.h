/*
 * SYSCTL_MainOsc.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_MAINOSC_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_MAINOSC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vSetMainOscValidation(SYSCTL_nMOSC_VALIDATION enValidation);
SYSCTL_nMOSC_VALIDATION SYSCTL__enGetMainOscValidation(void);

void SYSCTL__vSetMainOscFailureType(SYSCTL_nMOSC_FAILURE enFailureType);
SYSCTL_nMOSC_FAILURE SYSCTL__enGetMainOscFailureType(void);

void SYSCTL__vSetMainOscConnected(SYSCTL_nMOSC_CONNECTED enConnected);
SYSCTL_nMOSC_CONNECTED SYSCTL__enIsMainOscConnected(void);

void SYSCTL__vSetMainOscRange(SYSCTL_nMOSC_FREQ enRange);
SYSCTL_nMOSC_FREQ SYSCTL__enGetMainOscRange(void);

void SYSCTL__vSetMainOscPower(SYSCTL_nMOSC_POWER enPower);
SYSCTL_nMOSC_POWER SYSCTL__enGetMainOscPower(void);

void SYSCTL__vSetMainOscConfig(UBase_t uxConfig);
UBase_t SYSCTL__enGetMainOscConfig(void);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_MAINOSC_H_ */
