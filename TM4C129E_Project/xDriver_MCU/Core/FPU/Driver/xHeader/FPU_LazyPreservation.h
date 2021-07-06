/*
 * FPU_LazyPreservation.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_LAZYPRESERVATION_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_LAZYPRESERVATION_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

FPU_nPRESERVATION_STATUS FPU__enGetLazyPreservationStatus(void);
FPU_nLAZY_PRESERVATION FPU__enGetLazyPreservation(void);
void FPU__vSetLazyPreservation(FPU_nLAZY_PRESERVATION enAuto);

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_LAZYPRESERVATION_H_ */
