/*
 * SYSCTL_OutputClock.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_OutputClock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetOutputClockEnable(SYSCTL_nOUTCLK enOutputEnableArg)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET, (UBase_t) enOutputEnableArg,
                        SYSCTL_DIVSCLK_EN_MASK, SYSCTL_DIVSCLK_R_EN_BIT);
}

void SYSCTL__vSetOutputClockDivisor(UBase_t uxDivisor)
{
    if(0UL != uxDivisor)
    {
        uxDivisor -= 1UL;
        MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET, uxDivisor,
                            SYSCTL_DIVSCLK_DIV_MASK, SYSCTL_DIVSCLK_R_DIV_BIT);
    }
}

void SYSCTL__vSetOutputClockSource(SYSCTL_nOUTCLK_SRC enOutputSource)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET, (UBase_t) enOutputSource,
                        SYSCTL_DIVSCLK_SRC_MASK, SYSCTL_DIVSCLK_R_SRC_BIT);
}

void SYSCTL__vDisOutputClock(void)
{
    SYSCTL__vSetOutputClockEnable(SYSCTL_enOUTCLK_DIS);
}
void SYSCTL__vEnOutputClock(void)
{
    SYSCTL__vSetOutputClockEnable(SYSCTL_enOUTCLK_ENA);
}

void SYSCTL__vSetOutputClock(SYSCTL_nOUTCLK enOutputEnableArg,
                             SYSCTL_nOUTCLK_SRC enOutputSource,
                             UBase_t uxDivisor)
{
    SYSCTL__vSetOutputClockDivisor(uxDivisor);
    SYSCTL__vSetOutputClockSource(enOutputSource);
    SYSCTL__vSetOutputClockEnable(enOutputEnableArg);
}

SYSCTL_nOUTCLK SYSCTL__enGetOutputClockEnable(void)
{
    SYSCTL_nOUTCLK enOutclkReg = SYSCTL_enOUTCLK_DIS;
    enOutclkReg = (SYSCTL_nOUTCLK) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET,
                                             SYSCTL_DIVSCLK_EN_MASK, SYSCTL_DIVSCLK_R_EN_BIT);
    return (enOutclkReg);
}

UBase_t SYSCTL__uxGetOutputClockDivisor(void)
{
    UBase_t uxReg = 0UL;
    uxReg = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET,
                                  SYSCTL_DIVSCLK_DIV_MASK, SYSCTL_DIVSCLK_R_DIV_BIT);
    uxReg += 1UL;
    return (uxReg);
}

SYSCTL_nOUTCLK_SRC SYSCTL__enGetOutputClockSource(void)
{
    SYSCTL_nOUTCLK_SRC enClkSrcReg = SYSCTL_enOUTCLK_SRC_SYSCLK;
    enClkSrcReg = (SYSCTL_nOUTCLK_SRC) MCU__uxReadRegister(SYSCTL_BASE,
                SYSCTL_DIVSCLK_OFFSET, SYSCTL_DIVSCLK_SRC_MASK, SYSCTL_DIVSCLK_R_SRC_BIT);
    return (enClkSrcReg);
}

void SYSCTL__vGetOutputClock(SYSCTL_nOUTCLK* penOutputEnableArg,
                             SYSCTL_nOUTCLK_SRC* penOutputSource,
                             UBase_t* puxDivisor)
{
    if(0UL != (UBase_t) penOutputEnableArg)
    {
        *penOutputEnableArg = SYSCTL__enGetOutputClockEnable();
    }
    if(0UL != (UBase_t) penOutputSource)
    {
        *penOutputSource = SYSCTL__enGetOutputClockSource();
    }
    if(0UL != (UBase_t) puxDivisor)
    {
        *puxDivisor = SYSCTL__uxGetOutputClockDivisor();
    }
}
