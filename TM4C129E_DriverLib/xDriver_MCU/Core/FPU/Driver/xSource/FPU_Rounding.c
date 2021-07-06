/*
 * FPU_Rounding.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_Rounding.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>

FPU_nROUNDING FPU__enGetRounding(void)
{
    FPU_nROUNDING enReturn = FPU_enROUNDING_NEAREST;
    enReturn = (FPU_nROUNDING) MCU__u32ReadRegister(FPU_BASE, FPU_FPDSCR_OFFSET,
                                                    FPU_FPDSCR_RMODE_MASK, FPU_FPDSCR_R_RMODE_BIT);
    return (enReturn);
}

void FPU__vSetRounding(FPU_nROUNDING enRounding)
{
    MCU__vWriteRegister(FPU_BASE, FPU_FPDSCR_OFFSET, (uint32_t) enRounding,
                        FPU_FPDSCR_RMODE_MASK, FPU_FPDSCR_R_RMODE_BIT);
}
