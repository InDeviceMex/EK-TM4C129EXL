/*
 * SYSCTL_ResetBehavior.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_ResetBehavior.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enSetResetBehavior_External(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET_BEHAVIOR enBehaviorArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = RESET_BEHAVCTL_R_EXTERNAL_BIT;
    stRegister.uxMask = RESET_BEHAVCTL_EXTERNAL_MASK;
    stRegister.uptrAddress = RESET_BEHAVCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enBehaviorArg;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetResetBehavior_External(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET_BEHAVIOR* penBehaviorArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penBehaviorArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = RESET_BEHAVCTL_R_EXTERNAL_BIT;
        stRegister.uxMask = RESET_BEHAVCTL_EXTERNAL_MASK;
        stRegister.uptrAddress = RESET_BEHAVCTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penBehaviorArg = (SYSCTL_nRESET_BEHAVIOR) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetResetBehavior_BOR(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET_BEHAVIOR enBehaviorArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = RESET_BEHAVCTL_R_BOR_BIT;
    stRegister.uxMask = RESET_BEHAVCTL_BOR_MASK;
    stRegister.uptrAddress = RESET_BEHAVCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enBehaviorArg;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetResetBehavior_BOR(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET_BEHAVIOR* penBehaviorArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penBehaviorArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = RESET_BEHAVCTL_R_BOR_BIT;
        stRegister.uxMask = RESET_BEHAVCTL_BOR_MASK;
        stRegister.uptrAddress = RESET_BEHAVCTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penBehaviorArg = (SYSCTL_nRESET_BEHAVIOR) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetResetBehavior_WDG0(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET_BEHAVIOR enBehaviorArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = RESET_BEHAVCTL_R_WDG0_BIT;
    stRegister.uxMask = RESET_BEHAVCTL_WDG0_MASK;
    stRegister.uptrAddress = RESET_BEHAVCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enBehaviorArg;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetResetBehavior_WDG0(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET_BEHAVIOR* penBehaviorArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penBehaviorArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = RESET_BEHAVCTL_R_WDG0_BIT;
        stRegister.uxMask = RESET_BEHAVCTL_WDG0_MASK;
        stRegister.uptrAddress = RESET_BEHAVCTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penBehaviorArg = (SYSCTL_nRESET_BEHAVIOR) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enSetResetBehavior_WDG1(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET_BEHAVIOR enBehaviorArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = RESET_BEHAVCTL_R_WDG1_BIT;
    stRegister.uxMask = RESET_BEHAVCTL_WDG1_MASK;
    stRegister.uptrAddress = RESET_BEHAVCTL_OFFSET;
    stRegister.uxValue = (UBase_t) enBehaviorArg;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetResetBehavior_WDG1(SYSCTL_nMODULE enModuleArg, SYSCTL_nRESET_BEHAVIOR* penBehaviorArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penBehaviorArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = RESET_BEHAVCTL_R_WDG1_BIT;
        stRegister.uxMask = RESET_BEHAVCTL_WDG1_MASK;
        stRegister.uptrAddress = RESET_BEHAVCTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penBehaviorArg = (SYSCTL_nRESET_BEHAVIOR) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
