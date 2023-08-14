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

I2C_nERROR I2C_Slave__enSetData(I2C_nMODULE enModuleArg, UBase_t uxDataArg)
{
    I2C_Register_t stRegister;
    stRegister.uxShift = I2C_SLAVE_DATA_R_DATA_BIT;
    stRegister.uxMask = MCU_MASK_BASE;
    stRegister.uptrAddress = I2C_SLAVE_DATA_OFFSET;
    stRegister.uxValue = (UBase_t) uxDataArg;

    I2C_nERROR enErrorReg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetData(I2C_nMODULE enModuleArg, UBase_t* puxDataArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxDataArg) ? I2C_enERROR_POINTER : I2C_enERROR_OK;
    if(I2C_enERROR_OK == enErrorReg)
    {
        I2C_Register_t stRegister;
        stRegister.uxShift = I2C_SLAVE_DATA_R_DATA_BIT;
        stRegister.uxMask = I2C_SLAVE_DATA_DATA_MASK;
        stRegister.uptrAddress = I2C_SLAVE_DATA_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
        if(I2C_enERROR_OK == enErrorReg)
        {
            *puxDataArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
