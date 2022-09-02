/*
 * FPU_LazyPreservation.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_LAZYPRESERVATION_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_LAZYPRESERVATION_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

FPU_nERROR FPU__enSetLazyPreservationState(FPU_nMODULE enModuleArg,
                                           FPU_nSTATE enStateArg);
FPU_nERROR FPU__enGetLazyPreservationState(FPU_nMODULE enModuleArg,
                                           FPU_nSTATE* penStateArg);
FPU_nERROR FPU__enGetLazyPreservationStatus(FPU_nMODULE enModuleArg,
                                           FPU_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_LAZYPRESERVATION_H_ */
