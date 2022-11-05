/*
 * SYSCTL_LDOVoltage.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_LDOVoltage.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enSetLDOCustomVoltageOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE enVoltageArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = LDO_SPCTL_R_VLDO_BIT;
    stRegister.uxMask = LDO_SPCTL_VLDO_MASK;
    stRegister.uptrAddress = LDO_SPCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enVoltageArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetLDOCustomVoltageOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penVoltageArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = LDO_SPCTL_R_VLDO_BIT;
        stRegister.uxMask = LDO_SPCTL_VLDO_MASK;
        stRegister.uptrAddress = LDO_SPCTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penVoltageArg = (SYSCTL_nLDO_VOTAGE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetLDODefaultVoltageWithPLLOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penVoltageArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = LDO_SPCAL_R_WITHPLL_BIT;
        stRegister.uxMask = LDO_SPCAL_WITHPLL_MASK;
        stRegister.uptrAddress = LDO_SPCAL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penVoltageArg = (SYSCTL_nLDO_VOTAGE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetLDODefaultVoltageNoPLLOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penVoltageArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = LDO_SPCAL_R_NOPLL_BIT;
        stRegister.uxMask = LDO_SPCAL_NOPLL_MASK;
        stRegister.uptrAddress = LDO_SPCAL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penVoltageArg = (SYSCTL_nLDO_VOTAGE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enUseLDOCustomVoltageOnSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = LDO_SPCTL_R_VADJEN_BIT;
    stRegister.uxMask = LDO_SPCTL_VADJEN_MASK;
    stRegister.uptrAddress = LDO_SPCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enIsLDOCustomVoltageOnSleepModeUsed(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg)
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
        stRegister.uxShift = LDO_SPCTL_R_VADJEN_BIT;
        stRegister.uxMask = LDO_SPCTL_VADJEN_MASK;
        stRegister.uptrAddress = LDO_SPCTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SYSCTL_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}






SYSCTL_nERROR SYSCTL__enSetLDOCustomVoltageOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE enVoltageArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = LDO_DPCTL_R_VLDO_BIT;
    stRegister.uxMask = LDO_DPCTL_VLDO_MASK;
    stRegister.uptrAddress = LDO_DPCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enVoltageArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetLDOCustomVoltageOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penVoltageArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = LDO_DPCTL_R_VLDO_BIT;
        stRegister.uxMask = LDO_DPCTL_VLDO_MASK;
        stRegister.uptrAddress = LDO_DPCTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penVoltageArg = (SYSCTL_nLDO_VOTAGE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetLDODefaultVoltage30KHzOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penVoltageArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = LDO_DPCAL_R_KHZ30_BIT;
        stRegister.uxMask = LDO_DPCAL_KHZ30_MASK;
        stRegister.uptrAddress = LDO_DPCAL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penVoltageArg = (SYSCTL_nLDO_VOTAGE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetLDODefaultVoltageNoPLLOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nLDO_VOTAGE* penVoltageArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penVoltageArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = LDO_DPCAL_R_NOPLL_BIT;
        stRegister.uxMask = LDO_DPCAL_NOPLL_MASK;
        stRegister.uptrAddress = LDO_DPCAL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penVoltageArg = (SYSCTL_nLDO_VOTAGE) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enUseLDOCustomVoltageOnDeepSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = LDO_DPCTL_R_VADJEN_BIT;
    stRegister.uxMask = LDO_DPCTL_VADJEN_MASK;
    stRegister.uptrAddress = LDO_DPCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enIsLDOCustomVoltageOnDeepSleepModeUsed(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg)
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
        stRegister.uxShift = LDO_DPCTL_R_VADJEN_BIT;
        stRegister.uxMask = LDO_DPCTL_VADJEN_MASK;
        stRegister.uptrAddress = LDO_DPCTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SYSCTL_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}
