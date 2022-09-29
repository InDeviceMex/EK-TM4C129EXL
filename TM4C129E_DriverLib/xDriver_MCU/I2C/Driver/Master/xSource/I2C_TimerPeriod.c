/**
 *
 * @file I2C_TimerPeriod.c
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
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_TimerPeriod.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enSetTimerPeriod(I2C_nMODULE enModuleArg, uint32_t u32TimerPeriodArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) u32TimerPeriodArg)
    {
        enErrorReg = I2C_enERROR_VALUE;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_MASTER_TPR_R_TPR_BIT;
        stRegister.u32Mask = I2C_MASTER_TPR_TPR_MASK;
        stRegister.uptrAddress = I2C_MASTER_TPR_OFFSET;
        stRegister.u32Value = (uint32_t) u32TimerPeriodArg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetTimerPeriod(I2C_nMODULE enModuleArg, uint32_t* pu32TimerPeriodArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) pu32TimerPeriodArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_MASTER_TPR_R_TPR_BIT;
        stRegister.u32Mask = I2C_MASTER_TPR_TPR_MASK;
        stRegister.uptrAddress = I2C_MASTER_TPR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *pu32TimerPeriodArg = (uint32_t) stRegister.u32Value;
    }

    return (enErrorReg);
}


I2C_nERROR I2C_Master__enSetHighSpeedState(I2C_nMODULE enModuleArg, I2C_nSTATE enHighSpeedArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.u32Shift = I2C_MASTER_TPR_R_HS_BIT;
    stRegister.u32Mask = I2C_MASTER_TPR_HS_MASK;
    stRegister.uptrAddress = I2C_MASTER_TPR_OFFSET;
    stRegister.u32Value = (uint32_t) enHighSpeedArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}
