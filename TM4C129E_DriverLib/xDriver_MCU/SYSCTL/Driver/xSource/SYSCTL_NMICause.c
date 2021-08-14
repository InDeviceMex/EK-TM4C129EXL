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
    uint32_t u32Reg = (uint32_t) SYSCTL_enNMI_ALL;

    u32Reg &= ~(uint32_t) enNMICause;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_NMIC_OFFSET, u32Reg, 0xFFFFFFFFUL, 0UL);
}

SYSCTL_nNMI SYSCTL__enGetNMICause(void)
{
    uint32_t u32Reg = 0UL;
    u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_NMIC_OFFSET, 0xFFFFFFFFUL, 0UL);
    u32Reg &= (uint32_t) SYSCTL_enNMI_ALL;
    return ((SYSCTL_nNMI) u32Reg);
}
