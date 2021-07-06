/*
 * SYSCTL_AlternateClock.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_AlternateClock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetAlternateClock(SYSCTL_nALTCLK enAlternateClock)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_ALTCLKCFG_OFFSET, (uint32_t) enAlternateClock,
                        SYSCTL_ALTCLKCFG_ALTCLK_MASK, SYSCTL_ALTCLKCFG_R_ALTCLK_BIT);
}

SYSCTL_nALTCLK SYSCTL__enGetAlternateClock(void)
{
    SYSCTL_nALTCLK enReturn = SYSCTL_enALTCLK_PIOSC;
    enReturn = (SYSCTL_nALTCLK) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_ALTCLKCFG_OFFSET,
                                  SYSCTL_ALTCLKCFG_ALTCLK_MASK, SYSCTL_ALTCLKCFG_R_ALTCLK_BIT);
    return (enReturn);
}
