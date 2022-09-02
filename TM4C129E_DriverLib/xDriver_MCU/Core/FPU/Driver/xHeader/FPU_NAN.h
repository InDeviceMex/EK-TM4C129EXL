/*
 * FPU_NAN.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_NAN_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_NAN_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

void FPU__vSetNAN(FPU_nMODULE enModuleArg, FPU_nNAN enNANArg);
FPU_nNAN FPU__enGetNAN(FPU_nMODULE enModuleArg);
FPU_nERROR FPU__enGetNANDefault(FPU_nMODULE enModuleArg, FPU_nNAN* penNANArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_NAN_H_ */
