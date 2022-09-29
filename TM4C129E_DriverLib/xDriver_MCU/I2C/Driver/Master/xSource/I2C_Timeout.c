/**
 *
 * @file I2C_Timeout.c
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
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_Timeout.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enSetSCLTimeoutCount(I2C_nMODULE enModuleArg, uint32_t u32TimeoutArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    u32TimeoutArg >>= 4UL;
    if(2UL > u32TimeoutArg)
    {
        enErrorReg = I2C_enERROR_VALUE;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_MASTER_CLKOCNT_R_CNTL_BIT;
        stRegister.u32Mask = I2C_MASTER_CLKOCNT_CNTL_MASK;
        stRegister.uptrAddress = I2C_MASTER_CLKOCNT_OFFSET;
        stRegister.u32Value = (uint32_t) u32TimeoutArg;
        enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetSCLTimeoutCount(I2C_nMODULE enModuleArg, uint32_t* pu32TimeoutArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) pu32TimeoutArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_MASTER_CLKOCNT_R_CNTL_BIT;
        stRegister.u32Mask = I2C_MASTER_CLKOCNT_CNTL_MASK;
        stRegister.uptrAddress = I2C_MASTER_CLKOCNT_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Value <<= 4UL;
        *pu32TimeoutArg = (uint32_t) stRegister.u32Value;
    }

    return (enErrorReg);
}
