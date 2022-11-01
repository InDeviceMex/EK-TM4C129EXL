/**
 *
 * @file SYSCTL_PLLCLock.c
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
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PLLCLock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enSetPLLClockState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = PLL_FREQ0_R_PLL_PWR_BIT;
    stRegister.uxMask = PLL_FREQ0_PLL_PWR_MASK;
    stRegister.uptrAddress = PLL_FREQ0_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetPLLClockState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg)
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
        stRegister.uxShift = PLL_FREQ0_R_PLL_PWR_BIT;
        stRegister.uxMask = PLL_FREQ0_PLL_PWR_MASK;
        stRegister.uptrAddress = PLL_FREQ0_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SYSCTL_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enSetPLLClockIntegerValue_M(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = PLL_FREQ0_R_PLL_M_INT_BIT;
    stRegister.uxMask = PLL_FREQ0_PLL_M_INT_MASK;
    stRegister.uptrAddress = PLL_FREQ0_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetPLLClockIntegerValue_M(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxValueArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PLL_FREQ0_R_PLL_M_INT_BIT;
        stRegister.uxMask = PLL_FREQ0_PLL_M_INT_MASK;
        stRegister.uptrAddress = PLL_FREQ0_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxValueArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enSetPLLClockFractionalValue_M(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = PLL_FREQ0_R_PLL_M_FRAC_BIT;
    stRegister.uxMask = PLL_FREQ0_PLL_M_FRAC_MASK;
    stRegister.uptrAddress = PLL_FREQ0_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetPLLClockFractionalValue_M(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxValueArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PLL_FREQ0_R_PLL_M_FRAC_BIT;
        stRegister.uxMask = PLL_FREQ0_PLL_M_FRAC_MASK;
        stRegister.uptrAddress = PLL_FREQ0_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxValueArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enSetPLLClockValue_Q(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = PLL_FREQ1_R_PLL_Q_VALUE_BIT;
    stRegister.uxMask = PLL_FREQ1_PLL_Q_VALUE_MASK;
    stRegister.uptrAddress = PLL_FREQ1_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetPLLClockValue_Q(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxValueArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PLL_FREQ1_R_PLL_Q_VALUE_BIT;
        stRegister.uxMask = PLL_FREQ1_PLL_Q_VALUE_MASK;
        stRegister.uptrAddress = PLL_FREQ1_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxValueArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetPLLClockValue_N(SYSCTL_nMODULE enModuleArg, UBase_t uxValueArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = PLL_FREQ1_R_PLL_N_VALUE_BIT;
    stRegister.uxMask = PLL_FREQ1_PLL_N_VALUE_MASK;
    stRegister.uptrAddress = PLL_FREQ1_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueArg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetPLLClockValue_N(SYSCTL_nMODULE enModuleArg, UBase_t* puxValueArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) puxValueArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PLL_FREQ1_R_PLL_N_VALUE_BIT;
        stRegister.uxMask = PLL_FREQ1_PLL_N_VALUE_MASK;
        stRegister.uptrAddress = PLL_FREQ1_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *puxValueArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enIsPLLClockLocked(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg)
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
        stRegister.uxShift = PLL_STAT_R_LOCK_BIT;
        stRegister.uxMask = PLL_STAT_LOCK_MASK;
        stRegister.uptrAddress = PLL_STAT_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SYSCTL_nBOOLEAN) stRegister.uxValue;
    }

    return (enErrorReg);
}

