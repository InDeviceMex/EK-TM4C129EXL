/*
 * SYSCTL_OutputClock.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_OutputClock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetOutputClockEnable(SYSCTL_nOUTCLK enOutputEnable)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET, (uint32_t) enOutputEnable,
                        SYSCTL_DIVSCLK_EN_MASK, SYSCTL_DIVSCLK_R_EN_BIT);

}

void SYSCTL__vSetOutputClockDivisor(uint32_t u32Divisor)
{
    if(0UL != u32Divisor)
    {
        u32Divisor -= 1UL;
        MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET, u32Divisor,
                            SYSCTL_DIVSCLK_DIV_MASK, SYSCTL_DIVSCLK_R_DIV_BIT);
    }
}

void SYSCTL__vSetOutputClockSource(SYSCTL_nOUTCLK_SRC enOutputSource)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET, (uint32_t) enOutputSource,
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

void SYSCTL__vSetOutputClock(SYSCTL_nOUTCLK enOutputEnable, SYSCTL_nOUTCLK_SRC enOutputSource, uint32_t u32Divisor)
{
    SYSCTL__vSetOutputClockDivisor(u32Divisor);
    SYSCTL__vSetOutputClockSource(enOutputSource);
    SYSCTL__vSetOutputClockEnable(enOutputEnable);
}

SYSCTL_nOUTCLK SYSCTL__enGetOutputClockEnable(void)
{
    SYSCTL_nOUTCLK enReturn = SYSCTL_enOUTCLK_DIS;
    enReturn = (SYSCTL_nOUTCLK) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET,
                                             SYSCTL_DIVSCLK_EN_MASK, SYSCTL_DIVSCLK_R_EN_BIT);
    return (enReturn);
}

uint32_t SYSCTL__u32GetOutputClockDivisor(void)
{
    uint32_t u32Reg = 0UL;
    u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET,
                                  SYSCTL_DIVSCLK_DIV_MASK, SYSCTL_DIVSCLK_R_DIV_BIT);
    u32Reg += 1UL;
    return u32Reg;
}

SYSCTL_nOUTCLK_SRC SYSCTL__enGetOutputClockSource(void)
{
    SYSCTL_nOUTCLK_SRC enReturn = SYSCTL_enOUTCLK_SRC_SYSCLK;
    enReturn = (SYSCTL_nOUTCLK_SRC) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_DIVSCLK_OFFSET,
                                  SYSCTL_DIVSCLK_SRC_MASK, SYSCTL_DIVSCLK_R_SRC_BIT);
    return (enReturn);
}

void SYSCTL__vGetOutputClock(SYSCTL_nOUTCLK* penOutputEnable, SYSCTL_nOUTCLK_SRC* penOutputSource, uint32_t* pu32Divisor)
{
    if(0UL != (uint32_t) penOutputEnable)
    {
        *penOutputEnable = SYSCTL__enGetOutputClockEnable();
    }
    if(0UL != (uint32_t) penOutputSource)
    {
        *penOutputSource = SYSCTL__enGetOutputClockSource();
    }
    if(0UL != (uint32_t) pu32Divisor)
    {
        *pu32Divisor = SYSCTL__u32GetOutputClockDivisor();
    }
}

