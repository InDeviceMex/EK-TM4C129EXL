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
    MCU__vWriteRegister(SYSCTL_BASE, RESET_BEHAVCTL_OFFSET, (UBase_t) enBehavior,
                        RESET_BEHAVCTL_EXTERNAL_MASK, RESET_BEHAVCTL_R_EXTERNAL_BIT);
}

SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_External(void)
{
    SYSCTL_nRESET_BEHAVIOR enResetReg = SYSCTL_enRESET_BEHAVIOR_SYSRESET;
    enResetReg = (SYSCTL_nRESET_BEHAVIOR) MCU__uxReadRegister(SYSCTL_BASE,
             RESET_BEHAVCTL_OFFSET, RESET_BEHAVCTL_EXTERNAL_MASK,
             RESET_BEHAVCTL_R_EXTERNAL_BIT);
    return (enResetReg);
}

void SYSCTL__vSetResetBehavior_BOR(SYSCTL_nRESET_BEHAVIOR enBehavior)
{
    MCU__vWriteRegister(SYSCTL_BASE, RESET_BEHAVCTL_OFFSET, (UBase_t) enBehavior,
                        RESET_BEHAVCTL_BOR_MASK, RESET_BEHAVCTL_R_BOR_BIT);
}

SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_BOR(void)
{
    SYSCTL_nRESET_BEHAVIOR enResetReg = SYSCTL_enRESET_BEHAVIOR_SYSRESET;
    enResetReg = (SYSCTL_nRESET_BEHAVIOR) MCU__uxReadRegister(SYSCTL_BASE,
                   RESET_BEHAVCTL_OFFSET, RESET_BEHAVCTL_BOR_MASK,
                   RESET_BEHAVCTL_R_BOR_BIT);
    return (enResetReg);
}

void SYSCTL__vSetResetBehavior_Watchdog0(SYSCTL_nRESET_BEHAVIOR enBehavior)
{
    MCU__vWriteRegister(SYSCTL_BASE, RESET_BEHAVCTL_OFFSET, (UBase_t) enBehavior,
                        RESET_BEHAVCTL_WDG0_MASK, RESET_BEHAVCTL_R_WDG0_BIT);
}

SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_Watchdog0(void)
{
    SYSCTL_nRESET_BEHAVIOR enResetReg = SYSCTL_enRESET_BEHAVIOR_SYSRESET;
    enResetReg = (SYSCTL_nRESET_BEHAVIOR) MCU__uxReadRegister(SYSCTL_BASE,
               RESET_BEHAVCTL_OFFSET, RESET_BEHAVCTL_WDG0_MASK,
               RESET_BEHAVCTL_R_WDG0_BIT);
    return (enResetReg);
}


void SYSCTL__vSetResetBehavior_Watchdog1(SYSCTL_nRESET_BEHAVIOR enBehavior)
{
    MCU__vWriteRegister(SYSCTL_BASE, RESET_BEHAVCTL_OFFSET, (UBase_t) enBehavior,
                    RESET_BEHAVCTL_WDG1_MASK, RESET_BEHAVCTL_R_WDG1_BIT);
}

SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_Watchdog1(void)
{
    SYSCTL_nRESET_BEHAVIOR enResetReg = SYSCTL_enRESET_BEHAVIOR_SYSRESET;
    enResetReg = (SYSCTL_nRESET_BEHAVIOR) MCU__uxReadRegister(SYSCTL_BASE,
                   RESET_BEHAVCTL_OFFSET, RESET_BEHAVCTL_WDG1_MASK,
                   RESET_BEHAVCTL_R_WDG1_BIT);
    return (enResetReg);
}
