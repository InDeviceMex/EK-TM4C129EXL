/*
 * SYSCTL_MainOsc.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_MainOsc.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enSetMOSCMonitorState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = MOSC_CTL_R_CVAL_BIT;
    stRegister.uxMask = MOSC_CTL_CVAL_MASK;
    stRegister.uptrAddress = MOSC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetMOSCMonitorState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = MOSC_CTL_R_CVAL_BIT;
        stRegister.uxMask = MOSC_CTL_CVAL_MASK;
        stRegister.uptrAddress = MOSC_CTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SYSCTL_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetMOSCFailureAction(SYSCTL_nMODULE enModuleArg, SYSCTL_nMOSC_FAILURE enActionArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = MOSC_CTL_R_MOSCIM_BIT;
    stRegister.uxMask = MOSC_CTL_MOSCIM_MASK;
    stRegister.uptrAddress = MOSC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enActionArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetMOSCFailureAction(SYSCTL_nMODULE enModuleArg, SYSCTL_nMOSC_FAILURE* penActionArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penActionArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = MOSC_CTL_R_MOSCIM_BIT;
        stRegister.uxMask = MOSC_CTL_MOSCIM_MASK;
        stRegister.uptrAddress = MOSC_CTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penActionArg = (SYSCTL_nMOSC_FAILURE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetMOSCState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    UBase_t uxValueReg;
    SYSCTL_nERROR enErrorReg;

    if(SYSCTL_enSTATE_ENA == enStateArg)
    {
        uxValueReg = MOSC_CTL_NOXTAL_CONNECTED;
    }
    else
    {
        uxValueReg = MOSC_CTL_NOXTAL_NOCONNECTED;
    }

    stRegister.uxShift = MOSC_CTL_R_NOXTAL_BIT;
    stRegister.uxMask = MOSC_CTL_NOXTAL_MASK;
    stRegister.uptrAddress = MOSC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetMOSCState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nSTATE enStateReg;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = MOSC_CTL_R_NOXTAL_BIT;
        stRegister.uxMask = MOSC_CTL_NOXTAL_MASK;
        stRegister.uptrAddress = MOSC_CTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(MOSC_CTL_NOXTAL_CONNECTED == stRegister.uxValue)
        {
            enStateReg = SYSCTL_enSTATE_ENA;
        }
        else
        {
            enStateReg = SYSCTL_enSTATE_DIS;
        }
        *penStateArg = enStateReg;
    }

    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enSetMOSCPowerState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    UBase_t uxValueReg;
    SYSCTL_nERROR enErrorReg;

    if(SYSCTL_enSTATE_ENA == enStateArg)
    {
        uxValueReg = MOSC_CTL_PWRDN_POWERUP;
    }
    else
    {
        uxValueReg = MOSC_CTL_PWRDN_POWERDOWN;
    }

    stRegister.uxShift = MOSC_CTL_R_PWRDN_BIT;
    stRegister.uxMask = MOSC_CTL_PWRDN_MASK;
    stRegister.uptrAddress = MOSC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetMOSCPowerState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nSTATE enStateReg;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = MOSC_CTL_R_PWRDN_BIT;
        stRegister.uxMask = MOSC_CTL_PWRDN_MASK;
        stRegister.uptrAddress = MOSC_CTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(MOSC_CTL_PWRDN_POWERUP == stRegister.uxValue)
        {
            enStateReg = SYSCTL_enSTATE_ENA;
        }
        else
        {
            enStateReg = SYSCTL_enSTATE_DIS;
        }
        *penStateArg = enStateReg;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetMOSCFrequencyRange(SYSCTL_nMODULE enModuleArg, SYSCTL_nMOSC_RANGE enRangeArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = MOSC_CTL_R_OSCRNG_BIT;
    stRegister.uxMask = MOSC_CTL_OSCRNG_MASK;
    stRegister.uptrAddress = MOSC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enRangeArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetMOSCFrequencyRange(SYSCTL_nMODULE enModuleArg, SYSCTL_nMOSC_RANGE* penRangeArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penRangeArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = MOSC_CTL_R_OSCRNG_BIT;
        stRegister.uxMask = MOSC_CTL_OSCRNG_MASK;
        stRegister.uptrAddress = MOSC_CTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penRangeArg = (SYSCTL_nMOSC_RANGE) stRegister.uxValue;
    }

    return (enErrorReg);
}
