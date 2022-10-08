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
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_LDOSPCTL_OFFSET, (UBase_t) enLDOPowerVoltage,
                        SYSCTL_LDOSPCTL_VLDO_MASK, SYSCTL_LDOSPCTL_R_VLDO_BIT);
}

SYSCTL_nLDO_VOTAGE SYSCTL__enGetLDOSleepVoltage(void)
{
    SYSCTL_nLDO_VOTAGE enLdoReg = SYSCTL_enLDO_VOTAGE_0_90V;
    enLdoReg = (SYSCTL_nLDO_VOTAGE) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_LDOSPCTL_OFFSET,
                                  SYSCTL_LDOSPCTL_VLDO_MASK, SYSCTL_LDOSPCTL_R_VLDO_BIT);
    return (enLdoReg);
}

void SYSCTL__vSetLDODeepSleepVoltage(SYSCTL_nLDO_VOTAGE enLDOPowerVoltage)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_LDODPCTL_OFFSET, (UBase_t) enLDOPowerVoltage,
                        SYSCTL_LDODPCTL_VLDO_MASK, SYSCTL_LDODPCTL_R_VLDO_BIT);
}

SYSCTL_nLDO_VOTAGE SYSCTL__enGetLDODeepSleepVoltage(void)
{
    SYSCTL_nLDO_VOTAGE enLdoReg = SYSCTL_enLDO_VOTAGE_0_90V;
    enLdoReg = (SYSCTL_nLDO_VOTAGE) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_LDODPCTL_OFFSET,
                                     SYSCTL_LDODPCTL_VLDO_MASK, SYSCTL_LDODPCTL_R_VLDO_BIT);
    return (enLdoReg);
}
