/*
 * SYSCTL_ResetBehavior.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_ResetBehavior.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetResetBehavior_External(SYSCTL_nRESET_BEHAVIOR enBehavior)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RESBEHAVCTL_OFFSET, (uint32_t) enBehavior,
                        SYSCTL_RESBEHAVCTL_EXTRES_MASK, SYSCTL_RESBEHAVCTL_R_EXTRES_BIT);
}

SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_External(void)
{
    SYSCTL_nRESET_BEHAVIOR enReturn = SYSCTL_enRESET_BEHAVIOR_SYSRESET;
    enReturn = (SYSCTL_nRESET_BEHAVIOR) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RESBEHAVCTL_OFFSET,
                                         SYSCTL_RESBEHAVCTL_EXTRES_MASK, SYSCTL_RESBEHAVCTL_R_EXTRES_BIT);
    return (enReturn);
}

void SYSCTL__vSetResetBehavior_BOR(SYSCTL_nRESET_BEHAVIOR enBehavior)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RESBEHAVCTL_OFFSET, (uint32_t) enBehavior,
                        SYSCTL_RESBEHAVCTL_BOR_MASK, SYSCTL_RESBEHAVCTL_R_BOR_BIT);
}

SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_BOR(void)
{
    SYSCTL_nRESET_BEHAVIOR enReturn = SYSCTL_enRESET_BEHAVIOR_SYSRESET;
    enReturn = (SYSCTL_nRESET_BEHAVIOR) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RESBEHAVCTL_OFFSET,
                                  SYSCTL_RESBEHAVCTL_BOR_MASK, SYSCTL_RESBEHAVCTL_R_BOR_BIT);
    return (enReturn);
}

void SYSCTL__vSetResetBehavior_Watchdog0(SYSCTL_nRESET_BEHAVIOR enBehavior)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RESBEHAVCTL_OFFSET, (uint32_t) enBehavior,
                        SYSCTL_RESBEHAVCTL_WDOG0_MASK, SYSCTL_RESBEHAVCTL_R_WDOG0_BIT);
}

SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_Watchdog0(void)
{
    SYSCTL_nRESET_BEHAVIOR enReturn = SYSCTL_enRESET_BEHAVIOR_SYSRESET;
    enReturn = (SYSCTL_nRESET_BEHAVIOR) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RESBEHAVCTL_OFFSET,
                                     SYSCTL_RESBEHAVCTL_WDOG0_MASK, SYSCTL_RESBEHAVCTL_R_WDOG0_BIT);
    return (enReturn);
}


void SYSCTL__vSetResetBehavior_Watchdog1(SYSCTL_nRESET_BEHAVIOR enBehavior)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RESBEHAVCTL_OFFSET, (uint32_t) enBehavior,
                    SYSCTL_RESBEHAVCTL_WDOG1_MASK, SYSCTL_RESBEHAVCTL_R_WDOG1_BIT);
}

SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_Watchdog1(void)
{
    SYSCTL_nRESET_BEHAVIOR enReturn = SYSCTL_enRESET_BEHAVIOR_SYSRESET;
    enReturn = (SYSCTL_nRESET_BEHAVIOR) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RESBEHAVCTL_OFFSET,
                                         SYSCTL_RESBEHAVCTL_WDOG1_MASK, SYSCTL_RESBEHAVCTL_R_WDOG1_BIT);
    return (enReturn);
}

