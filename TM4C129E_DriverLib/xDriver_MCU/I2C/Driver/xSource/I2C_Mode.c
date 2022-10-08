/**
 *
 * @file I2C_Mode.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim Mar 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/xHeader/I2C_Mode.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C__enSetMasterState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = I2C_MASTER_CR_R_MFE_BIT;
    stRegister.uxMask = I2C_MASTER_CR_MFE_MASK;
    stRegister.uptrAddress = I2C_MASTER_CR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C__enGetMasterState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_MASTER_CR_R_MFE_BIT;
        stRegister.uxMask = I2C_MASTER_CR_MFE_MASK;
        stRegister.uptrAddress = I2C_MASTER_CR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penStateArg = (I2C_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

I2C_nERROR I2C__enSetSlaveState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = I2C_MASTER_CR_R_SFE_BIT;
    stRegister.uxMask = I2C_MASTER_CR_SFE_MASK;
    stRegister.uptrAddress = I2C_MASTER_CR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C__enGetSlaveState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_MASTER_CR_R_SFE_BIT;
        stRegister.uxMask = I2C_MASTER_CR_SFE_MASK;
        stRegister.uptrAddress = I2C_MASTER_CR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penStateArg = (I2C_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

I2C_nERROR I2C__enSetLoopbackState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = I2C_MASTER_CR_R_LPBK_BIT;
    stRegister.uxMask = I2C_MASTER_CR_LPBK_MASK;
    stRegister.uptrAddress = I2C_MASTER_CR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C__enGetLoopbackState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_MASTER_CR_R_LPBK_BIT;
        stRegister.uxMask = I2C_MASTER_CR_LPBK_MASK;
        stRegister.uptrAddress = I2C_MASTER_CR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penStateArg = (I2C_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

I2C_nERROR I2C__enSetMode(I2C_nMODULE enModuleArg, I2C_nMODE enModeArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = 0UL;
    stRegister.uxMask = I2C_MASTER_CR_R_LPBK_MASK | I2C_MASTER_CR_R_MFE_MASK | I2C_MASTER_CR_R_SFE_MASK;
    stRegister.uptrAddress = I2C_MASTER_CR_OFFSET;
    stRegister.uxValue = (UBase_t) enModeArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C__enGetMode(I2C_nMODULE enModuleArg, I2C_nMODE* penModeArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = I2C_MASTER_CR_R_LPBK_MASK | I2C_MASTER_CR_R_MFE_MASK | I2C_MASTER_CR_R_SFE_MASK;
        stRegister.uptrAddress = I2C_MASTER_CR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penModeArg = (I2C_nMODE) stRegister.uxValue;
    }

    return (enErrorReg);
}
