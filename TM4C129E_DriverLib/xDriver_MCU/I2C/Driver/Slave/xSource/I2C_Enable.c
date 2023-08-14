/**
 *
 * @file I2C_Enable.c
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
 * @verbatim 10 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_Enable.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Slave__enSetState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    stRegister.uxShift = I2C_SLAVE_CTL_R_DA_BIT;
    stRegister.uxMask = I2C_SLAVE_CTL_DA_MASK;
    stRegister.uptrAddress = I2C_SLAVE_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    I2C_nERROR enErrorReg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;
    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_SLAVE_CTL_R_DA_BIT;
        stRegister.uxMask = I2C_SLAVE_CTL_DA_MASK;
        stRegister.uptrAddress = I2C_SLAVE_CTL_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *penStateArg = (I2C_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


I2C_nERROR I2C_Slave__enSetFIFOTxState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    stRegister.uxShift = I2C_SLAVE_CTL_R_TXFIFO_BIT;
    stRegister.uxMask = I2C_SLAVE_CTL_TXFIFO_MASK;
    stRegister.uptrAddress = I2C_SLAVE_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    I2C_nERROR enErrorReg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetFIFOTxState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;
    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_SLAVE_CTL_R_TXFIFO_BIT;
        stRegister.uxMask = I2C_SLAVE_CTL_TXFIFO_MASK;
        stRegister.uptrAddress = I2C_SLAVE_CTL_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *penStateArg = (I2C_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enSetFIFORxState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg)
{
    I2C_Register_t stRegister;
    stRegister.uxShift = I2C_SLAVE_CTL_R_RXFIFO_BIT;
    stRegister.uxMask = I2C_SLAVE_CTL_RXFIFO_MASK;
    stRegister.uptrAddress = I2C_SLAVE_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    I2C_nERROR enErrorReg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetFIFORxState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;

    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_SLAVE_CTL_R_RXFIFO_BIT;
        stRegister.uxMask = I2C_SLAVE_CTL_RXFIFO_MASK;
        stRegister.uptrAddress = I2C_SLAVE_CTL_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *penStateArg = (I2C_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
