/*
 * FPU_Rounding.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ROUNDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ROUNDING_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

void FPU__vSetRoundingMode(FPU_nMODULE enModuleArg, FPU_nROUNDING enRoundingArg);
FPU_nROUNDING FPU__enGetRoundingMode(FPU_nMODULE enModuleArg);

FPU_nERROR FPU__enGetRoundingModeDefault(FPU_nMODULE enModuleArg,
                                   FPU_nROUNDING* penRoundingArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ROUNDING_H_ */
