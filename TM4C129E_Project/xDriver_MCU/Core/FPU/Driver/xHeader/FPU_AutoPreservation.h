/*
 * FPU_AutoPreservation.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_AUTOPRESERVATION_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_AUTOPRESERVATION_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

FPU_nAUTO_PRESERVATION FPU__enGetAutoPreservation(void);
void FPU__vSetAutoPreservation(FPU_nAUTO_PRESERVATION enAuto);

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_AUTOPRESERVATION_H_ */
