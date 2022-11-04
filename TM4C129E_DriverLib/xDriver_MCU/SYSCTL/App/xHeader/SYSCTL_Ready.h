/**
 *
 * @file SYSCTL_Ready.h
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
 * @verbatim 8 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSCTL_APP_XHEADER_SYSCTL_READY_H_
#define XDRIVER_MCU_SYSCTL_APP_XHEADER_SYSCTL_READY_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enSetReadyOnRunMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg);
SYSCTL_nERROR SYSCTL__enClearReadyOnRunMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg);
SYSCTL_nERROR SYSCTL__enReset(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg);
SYSCTL_nERROR SYSCTL__enIsReady(SYSCTL_nMODULE enModuleArg, SYSCTL_nPERIPHERAL enPeripheralArg, SYSCTL_nBOOLEAN* penReadyArg);

#endif /* XDRIVER_MCU_SYSCTL_APP_XHEADER_SYSCTL_READY_H_ */
