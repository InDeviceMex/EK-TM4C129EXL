/**
 *
 * @file SYSCTL_DeepSleepGatingClock.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 28 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_DeepSleepGatingClock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enSetPIOSCStateOnDeepSleep(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    UBase_t uxValueReg;
    SYSCTL_nERROR enErrorReg;

    if(SYSCTL_enSTATE_DIS == enStateArg)
    {
        uxValueReg = DSCLK_CFG_PIOSC_PD_DIS;
    }
    else
    {
        uxValueReg = DSCLK_CFG_PIOSC_PD_ENA;
    }

    stRegister.uxShift = DSCLK_CFG_R_PIOSC_PD_BIT;
    stRegister.uxMask = DSCLK_CFG_PIOSC_PD_MASK;
    stRegister.uptrAddress = DSCLK_CFG_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetPIOSCStateOnDeepSleep(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nSTATE enValueReg;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = DSCLK_CFG_R_PIOSC_PD_BIT;
        stRegister.uxMask = DSCLK_CFG_PIOSC_PD_MASK;
        stRegister.uptrAddress = DSCLK_CFG_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        if(DSCLK_CFG_PIOSC_PD_ENA == stRegister.uxValue)
        {
            enValueReg = SYSCTL_enSTATE_ENA;
        }
        else
        {

            enValueReg = SYSCTL_enSTATE_DIS;
        }

        *penStateArg = (SYSCTL_nSTATE) enValueReg;
    }

    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enAllowDisableMOSCOnFailure(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN enStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = DSCLK_CFG_R_MOSC_DPD_BIT;
    stRegister.uxMask = DSCLK_CFG_MOSC_DPD_MASK;
    stRegister.uptrAddress = DSCLK_CFG_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enIsAllowedDisableMOSCOnFailure(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg)
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
        stRegister.uxShift = DSCLK_CFG_R_MOSC_DPD_BIT;
        stRegister.uxMask = DSCLK_CFG_MOSC_DPD_MASK;
        stRegister.uptrAddress = DSCLK_CFG_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SYSCTL_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetDeepSleepOscillatorClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOSCCLK_SRC enSourceArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = DSCLK_CFG_R_DEEPSLEEP_OSC_SRC_BIT;
    stRegister.uxMask = DSCLK_CFG_DEEPSLEEP_OSC_SRC_MASK;
    stRegister.uptrAddress = DSCLK_CFG_OFFSET;
    stRegister.uxValue = (UBase_t) enSourceArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetDeepSleepOscillatorClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOSCCLK_SRC* penSourceArg)
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
        stRegister.uxShift = DSCLK_CFG_R_DEEPSLEEP_OSC_SRC_BIT;
        stRegister.uxMask = DSCLK_CFG_DEEPSLEEP_OSC_SRC_MASK;
        stRegister.uptrAddress = DSCLK_CFG_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penSourceArg = (SYSCTL_nOSCCLK_SRC) stRegister.uxValue;
    }

    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enSetDeepSleepOscillatorClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t uxDivisorArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = DSCLK_CFG_R_DEEPSLEEP_OSC_SYSDIV_BIT;
    stRegister.uxMask = DSCLK_CFG_DEEPSLEEP_OSC_SYSDIV_MASK;
    stRegister.uptrAddress = DSCLK_CFG_OFFSET;
    stRegister.uxValue = (UBase_t) uxDivisorArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetDeepSleepOscillatorClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t* puxDivisorArg)
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
        stRegister.uxShift = DSCLK_CFG_R_DEEPSLEEP_OSC_SYSDIV_BIT;
        stRegister.uxMask = DSCLK_CFG_DEEPSLEEP_OSC_SYSDIV_MASK;
        stRegister.uptrAddress = DSCLK_CFG_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxDivisorArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}



