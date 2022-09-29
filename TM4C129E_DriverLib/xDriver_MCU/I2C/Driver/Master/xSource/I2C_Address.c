/**
 *
 * @file I2C_Address.c
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
 * @verbatim Mar 27, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 27, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_Address.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enSetSlaveAddress(I2C_nMODULE enModuleArg, uint32_t u32AddressArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.u32Shift = I2C_MASTER_SA_R_SA_BIT;
    stRegister.u32Mask = I2C_MASTER_SA_SA_MASK;
    stRegister.uptrAddress = I2C_MASTER_SA_OFFSET;
    stRegister.u32Value = (uint32_t) u32AddressArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetSlaveAddress(I2C_nMODULE enModuleArg, uint32_t* pu32AddressArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) pu32AddressArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_MASTER_SA_R_SA_BIT;
        stRegister.u32Mask = I2C_MASTER_SA_SA_MASK;
        stRegister.uptrAddress = I2C_MASTER_SA_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *pu32AddressArg = (uint32_t) stRegister.u32Value;
    }

    return (enErrorReg);
}

I2C_nERROR I2C_Master__enSetOperation(I2C_nMODULE enModuleArg, I2C_nOPERATION enOperationArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.u32Shift = I2C_MASTER_SA_R_RS_BIT;
    stRegister.u32Mask = I2C_MASTER_SA_RS_MASK;
    stRegister.uptrAddress = I2C_MASTER_SA_OFFSET;
    stRegister.u32Value = (uint32_t) enOperationArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetOperation(I2C_nMODULE enModuleArg, I2C_nOPERATION* penOperationArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) penOperationArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_MASTER_SA_R_RS_BIT;
        stRegister.u32Mask = I2C_MASTER_SA_RS_MASK;
        stRegister.uptrAddress = I2C_MASTER_SA_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *penOperationArg = (I2C_nOPERATION) stRegister.u32Value;
    }

    return (enErrorReg);
}


I2C_nERROR I2C_Master__enSetSlaveAddressOperation(I2C_nMODULE enModuleArg, uint32_t u32AddressArg, I2C_nOPERATION enOperationArg)
{
    I2C_Register_t stRegister;
    uint32_t u32ValueReg;
    uint32_t u32OperationReg;
    I2C_nERROR enErrorReg;

    u32ValueReg = u32AddressArg;
    u32ValueReg &= I2C_MASTER_SA_SA_MASK;
    u32ValueReg <<= I2C_MASTER_SA_R_SA_BIT;
    u32OperationReg = (uint32_t) enOperationArg;
    u32OperationReg &= I2C_MASTER_SA_RS_MASK;
    u32ValueReg |= (uint32_t) u32OperationReg;

    stRegister.u32Shift = I2C_MASTER_SA_R_RS_BIT;
    stRegister.u32Mask = I2C_MASTER_SA_SA_MASK | I2C_MASTER_SA_RS_MASK;
    stRegister.uptrAddress = I2C_MASTER_SA_OFFSET;
    stRegister.u32Value = (uint32_t) u32ValueReg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetSlaveAddressOperation(I2C_nMODULE enModuleArg, uint32_t* pu32AddressArg, I2C_nOPERATION* penOperationArg)
{
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_Master__enGetSlaveAddress(enModuleArg, pu32AddressArg);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetOperation(enModuleArg, penOperationArg);
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enSetSlaveAddressOperationByByte(I2C_nMODULE enModuleArg, uint32_t u32ValueArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.u32Shift = I2C_MASTER_SA_R_RS_BIT;
    stRegister.u32Mask = I2C_MASTER_SA_SA_MASK | I2C_MASTER_SA_RS_MASK;
    stRegister.uptrAddress = I2C_MASTER_SA_OFFSET;
    stRegister.u32Value = (uint32_t) u32ValueArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetSlaveAddressOperationByByte(I2C_nMODULE enModuleArg, uint32_t* pu32ValueArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) pu32ValueArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_MASTER_SA_R_RS_BIT;
        stRegister.u32Mask = I2C_MASTER_SA_SA_MASK | I2C_MASTER_SA_RS_MASK;
        stRegister.uptrAddress = I2C_MASTER_SA_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *pu32ValueArg = (uint32_t) stRegister.u32Value;
    }

    return (enErrorReg);
}
