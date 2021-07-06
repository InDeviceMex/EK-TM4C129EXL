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

void SYSCTL__vSetReady(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vClearReady(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vReset(SYSCTL_nPERIPHERAL enPeripheral);
SYSCTL_nPERIPHERAL_READY SYSCTL__enIsReady(SYSCTL_nPERIPHERAL enPeripheral);

#endif /* XDRIVER_MCU_SYSCTL_APP_XHEADER_SYSCTL_READY_H_ */
