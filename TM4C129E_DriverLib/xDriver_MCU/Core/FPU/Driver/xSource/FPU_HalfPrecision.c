/*
 * FPU_HalfPrecision.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_HalfPrecision.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>

FPU_nHALF_PRECISION FPU__enGetHalfPrecision(void)
{
    FPU_nHALF_PRECISION enReturn = FPU_enHALF_PRECISION_IEEE;
    enReturn = (FPU_nHALF_PRECISION) MCU__u32ReadRegister(FPU_BASE, FPU_FPDSCR_OFFSET,
                                                          FPU_FPDSCR_AHP_MASK, FPU_FPDSCR_R_AHP_BIT);
    return (enReturn);
}

/*ToDo use the correct register. FPSCR instead FPDSCR*/
void FPU__vSetHalfPrecision(FPU_nHALF_PRECISION enHalfPrecision)
{
    MCU__vWriteRegister(FPU_BASE, FPU_FPDSCR_OFFSET, (uint32_t) enHalfPrecision,
                        FPU_FPDSCR_AHP_MASK, FPU_FPDSCR_R_AHP_BIT);
}
