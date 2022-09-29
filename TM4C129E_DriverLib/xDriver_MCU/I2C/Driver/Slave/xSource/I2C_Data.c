/**
 *
 * @file I2C_Data.c
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
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_Data.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Slave__enSetData(I2C_nMODULE enModuleArg, uint32_t u32DataArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.u32Shift = I2C_SLAVE_DATA_R_DATA_BIT;
    stRegister.u32Mask = MCU_MASK_32;
    stRegister.uptrAddress = I2C_SLAVE_DATA_OFFSET;
    stRegister.u32Value = (uint32_t) u32DataArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetData(I2C_nMODULE enModuleArg, uint32_t* pu32DataArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) pu32DataArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = I2C_SLAVE_DATA_R_DATA_BIT;
        stRegister.u32Mask = I2C_SLAVE_DATA_DATA_MASK;
        stRegister.uptrAddress = I2C_SLAVE_DATA_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *pu32DataArg = (uint32_t) stRegister.u32Value;
    }

    return (enErrorReg);
}
