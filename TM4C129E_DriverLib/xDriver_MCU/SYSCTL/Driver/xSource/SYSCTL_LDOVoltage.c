/*
 * SYSCTL_LDOVoltage.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_LDOVoltage.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetLDOSleepVoltage(SYSCTL_nLDO_VOTAGE enLDOPowerVoltage)
{
    MCU__vWriteRegister(SYSCTL_BASE, LDO_SPCTL_OFFSET, (UBase_t) enLDOPowerVoltage,
                        LDO_SPCTL_VLDO_MASK, LDO_SPCTL_R_VLDO_BIT);
}

SYSCTL_nLDO_VOTAGE SYSCTL__enGetLDOSleepVoltage(void)
{
    SYSCTL_nLDO_VOTAGE enLdoReg = SYSCTL_enLDO_VOTAGE_0_90V;
    enLdoReg = (SYSCTL_nLDO_VOTAGE) MCU__uxReadRegister(SYSCTL_BASE, LDO_SPCTL_OFFSET,
                                  LDO_SPCTL_VLDO_MASK, LDO_SPCTL_R_VLDO_BIT);
    return (enLdoReg);
}

void SYSCTL__vSetLDODeepSleepVoltage(SYSCTL_nLDO_VOTAGE enLDOPowerVoltage)
{
    MCU__vWriteRegister(SYSCTL_BASE, LDO_DPCTL_OFFSET, (UBase_t) enLDOPowerVoltage,
                        LDO_DPCTL_VLDO_MASK, LDO_DPCTL_R_VLDO_BIT);
}

SYSCTL_nLDO_VOTAGE SYSCTL__enGetLDODeepSleepVoltage(void)
{
    SYSCTL_nLDO_VOTAGE enLdoReg = SYSCTL_enLDO_VOTAGE_0_90V;
    enLdoReg = (SYSCTL_nLDO_VOTAGE) MCU__uxReadRegister(SYSCTL_BASE, LDO_DPCTL_OFFSET,
                                     LDO_DPCTL_VLDO_MASK, LDO_DPCTL_R_VLDO_BIT);
    return (enLdoReg);
}
