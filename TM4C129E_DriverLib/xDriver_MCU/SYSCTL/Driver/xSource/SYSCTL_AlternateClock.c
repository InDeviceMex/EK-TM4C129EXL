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
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_ALTCLKCFG_OFFSET, (UBase_t) enAlternateClock,
                        SYSCTL_ALTCLKCFG_ALTCLK_MASK, SYSCTL_ALTCLKCFG_R_ALTCLK_BIT);
}

SYSCTL_nALTCLK SYSCTL__enGetAlternateClock(void)
{
    SYSCTL_nALTCLK enAltClkReg = SYSCTL_enALTCLK_PIOSC;
    enAltClkReg = (SYSCTL_nALTCLK) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_ALTCLKCFG_OFFSET,
                          SYSCTL_ALTCLKCFG_ALTCLK_MASK, SYSCTL_ALTCLKCFG_R_ALTCLK_BIT);
    return (enAltClkReg);
}

UBase_t SYSCTL__uxGetAlternateClock(void)
{
    UBase_t uxAltClock = 0UL;
    SYSCTL_nALTCLK enAltClock = SYSCTL_enALTCLK_PIOSC;
    enAltClock = (SYSCTL_nALTCLK) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_ALTCLKCFG_OFFSET,
                              SYSCTL_ALTCLKCFG_ALTCLK_MASK, SYSCTL_ALTCLKCFG_R_ALTCLK_BIT);
    switch(enAltClock)
    {
    case SYSCTL_enALTCLK_PIOSC:
        uxAltClock = 16000000UL;
        break;
    case SYSCTL_enALTCLK_LFIOSC:
        uxAltClock = 33000UL;
        break;
    case SYSCTL_enALTCLK_RTCOSC:
        uxAltClock = 32768UL;
        break;

    default:
        break;
    }
    return (uxAltClock);
}
