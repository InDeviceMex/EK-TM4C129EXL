/*
 * FPU_HalfPrecision.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_HALFPRECISION_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_HALFPRECISION_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

FPU_nHALF_PRECISION FPU__enGetHalfPrecision(void);
void FPU__vSetHalfPrecision(FPU_nHALF_PRECISION enHalfPrecision);

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_HALFPRECISION_H_ */
