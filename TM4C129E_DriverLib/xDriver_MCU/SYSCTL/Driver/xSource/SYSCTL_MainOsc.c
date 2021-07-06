/*
 * SYSCTL_MainOsc.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_MainOsc.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetMainOscValidation(SYSCTL_nMOSC_VALIDATION enValidation)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET, (uint32_t) enValidation,
                        SYSCTL_MOSCCTL_CVAL_MASK, SYSCTL_MOSCCTL_R_CVAL_BIT);
}

SYSCTL_nMOSC_VALIDATION SYSCTL__enGetMainOscValidation(void)
{
    SYSCTL_nMOSC_VALIDATION enReturn = SYSCTL_enMOSC_VALIDATION_DIS;
    enReturn = (SYSCTL_nMOSC_VALIDATION)  MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET,
                                           SYSCTL_MOSCCTL_CVAL_MASK, SYSCTL_MOSCCTL_R_CVAL_BIT);
    return (enReturn);
}

void SYSCTL__vSetMainOscFailureType(SYSCTL_nMOSC_FAILURE enFailureType)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET, (uint32_t) enFailureType,
                        SYSCTL_MOSCCTL_MOSCIM_MASK, SYSCTL_MOSCCTL_R_MOSCIM_BIT);
}

SYSCTL_nMOSC_FAILURE SYSCTL__enGetMainOscFailureType(void)
{
    SYSCTL_nMOSC_FAILURE enReturn = SYSCTL_enMOSC_FAILURE_RESET;
    enReturn = (SYSCTL_nMOSC_FAILURE) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET,
                                           SYSCTL_MOSCCTL_MOSCIM_MASK, SYSCTL_MOSCCTL_R_MOSCIM_BIT);
    return (enReturn);
}

void SYSCTL__vSetMainOscConnected(SYSCTL_nMOSC_CONNECTED enConnected)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET, (uint32_t) enConnected,
                        SYSCTL_MOSCCTL_NOXTAL_MASK, SYSCTL_MOSCCTL_R_NOXTAL_BIT);
}

SYSCTL_nMOSC_CONNECTED SYSCTL__enIsMainOscConnected(void)
{
    SYSCTL_nMOSC_CONNECTED enReturn = SYSCTL_enMOSC_CONNECTED_NO;
    enReturn = (SYSCTL_nMOSC_CONNECTED) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET,
                                             SYSCTL_MOSCCTL_NOXTAL_MASK, SYSCTL_MOSCCTL_R_NOXTAL_BIT);
    return (enReturn);
}

void SYSCTL__vSetMainOscRange(SYSCTL_nMOSC_FREQ enRange)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET, (uint32_t) enRange,
                        SYSCTL_MOSCCTL_OSCRNG_MASK, SYSCTL_MOSCCTL_R_OSCRNG_BIT);
}

SYSCTL_nMOSC_FREQ SYSCTL__enGetMainOscRange(void)
{
    SYSCTL_nMOSC_FREQ enReturn = SYSCTL_enMOSC_FREQ_LOW;
    enReturn = (SYSCTL_nMOSC_FREQ) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET,
                                            SYSCTL_MOSCCTL_OSCRNG_MASK, SYSCTL_MOSCCTL_R_OSCRNG_BIT);
    return (enReturn);
}

void SYSCTL__vSetMainOscPower(SYSCTL_nMOSC_POWER enPower)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET,  (uint32_t) enPower,
                        SYSCTL_MOSCCTL_PWRDN_MASK, SYSCTL_MOSCCTL_R_PWRDN_BIT);
}

SYSCTL_nMOSC_POWER SYSCTL__enGetMainOscPower(void)
{
    SYSCTL_nMOSC_POWER enReturn = SYSCTL_enMOSC_POWER_UP;
    enReturn = (SYSCTL_nMOSC_POWER) MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET,
                                         SYSCTL_MOSCCTL_PWRDN_MASK, SYSCTL_MOSCCTL_R_PWRDN_BIT);
    return (enReturn);
}

void SYSCTL__vSetMainOscConfig(uint32_t u32Config)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET, u32Config,
                        SYSCTL_MOSCCTL_CVAL_MASK | SYSCTL_MOSCCTL_MOSCIM_MASK | SYSCTL_MOSCCTL_PWRDN_MASK |
                        SYSCTL_MOSCCTL_OSCRNG_MASK | SYSCTL_MOSCCTL_PWRDN_MASK, 0UL);
}

uint32_t SYSCTL__enGetMainOscConfig(void)
{
    uint32_t u32Reg = 0UL;
    u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_MOSCCTL_OFFSET,
                                  SYSCTL_MOSCCTL_CVAL_MASK | SYSCTL_MOSCCTL_MOSCIM_MASK |
                                  SYSCTL_MOSCCTL_PWRDN_MASK | SYSCTL_MOSCCTL_OSCRNG_MASK |
                                  SYSCTL_MOSCCTL_PWRDN_MASK, 0UL);
    return u32Reg;
}

