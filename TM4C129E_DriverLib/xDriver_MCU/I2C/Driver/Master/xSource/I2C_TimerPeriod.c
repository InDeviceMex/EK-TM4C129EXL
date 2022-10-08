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

I2C_nERROR I2C_Master__enSetTimerPeriod(I2C_nMODULE enModuleArg, UBase_t uxTimerPeriodArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) uxTimerPeriodArg)
    {
        enErrorReg = I2C_enERROR_VALUE;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_MASTER_TPR_R_TPR_BIT;
        stRegister.uxMask = I2C_MASTER_TPR_TPR_MASK;
        stRegister.uptrAddress = I2C_MASTER_TPR_OFFSET;
        stRegister.uxValue = (UBase_t) uxTimerPeriodArg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetTimerPeriod(I2C_nMODULE enModuleArg, UBase_t* puxTimerPeriodArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) puxTimerPeriodArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_MASTER_TPR_R_TPR_BIT;
        stRegister.uxMask = I2C_MASTER_TPR_TPR_MASK;
        stRegister.uptrAddress = I2C_MASTER_TPR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *puxTimerPeriodArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


I2C_nERROR I2C_Master__enSetHighSpeedState(I2C_nMODULE enModuleArg, I2C_nSTATE enHighSpeedArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = I2C_MASTER_TPR_R_HS_BIT;
    stRegister.uxMask = I2C_MASTER_TPR_HS_MASK;
    stRegister.uptrAddress = I2C_MASTER_TPR_OFFSET;
    stRegister.uxValue = (UBase_t) enHighSpeedArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}
