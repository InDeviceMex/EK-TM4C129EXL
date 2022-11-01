/**
 *
 * @file SYSCTL_InternalOsc.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 28 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_INTERNALOSC_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_INTERNALOSC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enGetPIOSCCalibrationResult(SYSCTL_nMODULE enModuleArg, SYSCTL_nPIOSC_RESULT* puxResultArg);

SYSCTL_nERROR SYSCTL__enGetPIOSCCalibrationValue(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg);
SYSCTL_nERROR SYSCTL__enGetPIOSCDefaultCalibrationValue(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg);

SYSCTL_nERROR SYSCTL__enSetPIOSCUserCalibrationValue(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg);
SYSCTL_nERROR SYSCTL__enGetPIOSCUserCalibrationValue(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg);

SYSCTL_nERROR SYSCTL__enUsePIOSCUserCalibrationValue(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN enStatusArg);
SYSCTL_nERROR SYSCTL__enIsPIOSCUserCalibrationValueUsed(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStatusArg);

SYSCTL_nERROR SYSCTL__enUpdatePIOSCCalibrationValue(SYSCTL_nMODULE enModuleArg);
SYSCTL_nERROR SYSCTL__enIsPIOCCalibrationValueUpdateOngoing(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStatusArg);

SYSCTL_nERROR SYSCTL__enStartPIOSCCalibration(SYSCTL_nMODULE enModuleArg);
SYSCTL_nERROR SYSCTL__enIsPIOCCalibrationOngoing(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStatusArg);



#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_INTERNALOSC_H_ */
