/*
 * SYSCTL_OutputClock.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_OutputClock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>


SYSCTL_nERROR SYSCTL__enSetOutputClockState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = DIVSCLK_CFG_R_EN_BIT;
    stRegister.uxMask = DIVSCLK_CFG_EN_MASK;
    stRegister.uptrAddress = DIVSCLK_CFG_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetOutputClockState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg)
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
        stRegister.uxShift = DIVSCLK_CFG_R_EN_BIT;
        stRegister.uxMask = DIVSCLK_CFG_EN_MASK;
        stRegister.uptrAddress = DIVSCLK_CFG_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SYSCTL_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetOutputClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOUTCLK_SRC enSourceArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = DIVSCLK_CFG_R_SRC_BIT;
    stRegister.uxMask = DIVSCLK_CFG_SRC_MASK;
    stRegister.uptrAddress = DIVSCLK_CFG_OFFSET;
    stRegister.uxValue = (UBase_t) enSourceArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetOutputClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOUTCLK_SRC* penSourceArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penSourceArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = DIVSCLK_CFG_R_SRC_BIT;
        stRegister.uxMask = DIVSCLK_CFG_SRC_MASK;
        stRegister.uptrAddress = DIVSCLK_CFG_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penSourceArg = (SYSCTL_nOUTCLK_SRC) stRegister.uxValue;
    }

    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enSetOutputClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t uxDivisorArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = DIVSCLK_CFG_R_DIV_BIT;
    stRegister.uxMask = DIVSCLK_CFG_DIV_MASK;
    stRegister.uptrAddress = DIVSCLK_CFG_OFFSET;
    stRegister.uxValue = (UBase_t) uxDivisorArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetOutputClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t* puxDivisorArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxDivisorArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = DIVSCLK_CFG_R_DIV_BIT;
        stRegister.uxMask = DIVSCLK_CFG_DIV_MASK;
        stRegister.uptrAddress = DIVSCLK_CFG_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxDivisorArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}




SYSCTL_nERROR SYSCTL__enSetOutputClockConfig(SYSCTL_nMODULE enModuleArg,
                                   SYSCTL_nSTATE enStateArg,
                                   SYSCTL_nOUTCLK_SRC enSourceArg,
                                   UBase_t uxDivisorArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enSetOutputClockState(enModuleArg, SYSCTL_enSTATE_DIS);
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetOutputClockDivisor(enModuleArg, uxDivisorArg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetOutputClockSource(enModuleArg, enSourceArg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetOutputClockState(enModuleArg, enStateArg);
    }
    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enGetOutputClockConfig(SYSCTL_nMODULE enModuleArg,
                                   SYSCTL_nSTATE* penStateArg,
                                   SYSCTL_nOUTCLK_SRC* penSourceArg,
                                   UBase_t* puxDivisorArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enGetOutputClockDivisor(enModuleArg, puxDivisorArg);
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetOutputClockSource(enModuleArg, penSourceArg);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetOutputClockState(enModuleArg, penStateArg);
    }
    return (enErrorReg);
}
