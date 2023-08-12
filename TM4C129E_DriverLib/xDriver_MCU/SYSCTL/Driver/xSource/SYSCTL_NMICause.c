/*
 * SYSCTL_NMICause.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_NMICause.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enGetNMICause(SYSCTL_nMODULE enModuleArg, SYSCTL_nNMI* penCauseArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penCauseArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = (UBase_t) SYSCTL_enNMI_ALL;
        stRegister.uptrAddress = SYSCTL_NMIC_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penCauseArg = (SYSCTL_nNMI) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enClearNMICause(SYSCTL_nMODULE enModuleArg, SYSCTL_nNMI enCauseArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = 0UL;
    stRegister.uxMask = (UBase_t) enCauseArg;
    stRegister.uptrAddress = SYSCTL_NMIC_OFFSET;
    stRegister.uxValue = 0UL;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}
