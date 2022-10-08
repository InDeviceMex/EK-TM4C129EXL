/**
 *
 * @file I2C_OwnAddress.c
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
 * @verbatim 8 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_OwnAddress.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Slave__enSetOwnAddress(I2C_nMODULE enModuleArg, UBase_t uxOwnAddressArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    stRegister.uxShift = I2C_SLAVE_OAR_R_OAR_BIT;
    stRegister.uxMask = I2C_SLAVE_OAR_OAR_MASK;
    stRegister.uptrAddress = I2C_SLAVE_OAR_OFFSET;
    stRegister.uxValue = (UBase_t) uxOwnAddressArg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

I2C_nERROR I2C_Slave__enGetOwnAddress(I2C_nMODULE enModuleArg, UBase_t* puxOwnAddressArg)
{
    I2C_Register_t stRegister;
    I2C_nERROR enErrorReg;

    enErrorReg = I2C_enERROR_OK;
    if(0UL == (uintptr_t) puxOwnAddressArg)
    {
        enErrorReg = I2C_enERROR_POINTER;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = I2C_SLAVE_OAR_R_OAR_BIT;
        stRegister.uxMask = I2C_SLAVE_OAR_OAR_MASK;
        stRegister.uptrAddress = I2C_SLAVE_OAR_OFFSET;
        enErrorReg = I2C__enReadRegister(enModuleArg, &stRegister);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *puxOwnAddressArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}
