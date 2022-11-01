/**
 *
 * @file SYSCTL_PLLCLock.h
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

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PLLCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PLLCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enSetPLLClockState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg);
SYSCTL_nERROR SYSCTL__enGetPLLClockState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg);

SYSCTL_nERROR SYSCTL__enSetPLLClockIntegerValue_M(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg);
SYSCTL_nERROR SYSCTL__enGetPLLClockIntegerValue_M(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg);

SYSCTL_nERROR SYSCTL__enSetPLLClockFractionalValue_M(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg);
SYSCTL_nERROR SYSCTL__enGetPLLClockFractionalValue_M(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg);

SYSCTL_nERROR SYSCTL__enSetPLLClockValue_Q(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg);
SYSCTL_nERROR SYSCTL__enGetPLLClockValue_Q(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg);

SYSCTL_nERROR SYSCTL__enSetPLLClockValue_N(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg);
SYSCTL_nERROR SYSCTL__enGetPLLClockValue_N(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg);

SYSCTL_nERROR SYSCTL__enIsPLLClockLocked(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg);


#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_PLLCLOCK_H_ */
