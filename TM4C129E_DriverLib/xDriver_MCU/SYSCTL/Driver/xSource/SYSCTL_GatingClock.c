/*
 * SYSCTL_GatingClock.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_GatingClock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetGatingClock(SYSCTL_nGATING enGating)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET, (uint32_t) enGating,
                        SYSCTL_RSCLKCFG_ACG_MASK, SYSCTL_RSCLKCFG_R_ACG_BIT);
}

SYSCTL_nGATING SYSCTL__enGetGatingClock(void)
{
    SYSCTL_nGATING enGatingReg = SYSCTL_enGATING_RUN;
    enGatingReg = (SYSCTL_nGATING) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RSCLKCFG_OFFSET,
                                    SYSCTL_RSCLKCFG_ACG_MASK, SYSCTL_RSCLKCFG_R_ACG_BIT);
    return (enGatingReg);
}
