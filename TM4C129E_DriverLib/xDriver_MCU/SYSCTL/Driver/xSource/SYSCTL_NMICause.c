/*
 * SYSCTL_NMICause.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_NMICause.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vClearNMICause(SYSCTL_nNMI enNMICause)
{
    UBase_t uxReg = (UBase_t) SYSCTL_enNMI_ALL;

    uxReg &= ~(UBase_t) enNMICause;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_NMIC_OFFSET, uxReg, 0xFFFFFFFFUL, 0UL);
}

SYSCTL_nNMI SYSCTL__enGetNMICause(void)
{
    UBase_t uxReg = 0UL;
    uxReg = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_NMIC_OFFSET, 0xFFFFFFFFUL, 0UL);
    uxReg &= (UBase_t) SYSCTL_enNMI_ALL;
    return ((SYSCTL_nNMI) uxReg);
}
