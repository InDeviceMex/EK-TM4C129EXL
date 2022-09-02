/*
 * FPU_AccessType.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ACCESSTYPE_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ACCESSTYPE_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

FPU_nERROR FPU__enSetAccessType(FPU_nMODULE enModuleArg,
                                FPU_nACCESS enAccessTypeArg);
FPU_nERROR FPU__enGetAccessType(FPU_nMODULE enModuleArg,
                                FPU_nACCESS* penAccessTypeArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ACCESSTYPE_H_ */
