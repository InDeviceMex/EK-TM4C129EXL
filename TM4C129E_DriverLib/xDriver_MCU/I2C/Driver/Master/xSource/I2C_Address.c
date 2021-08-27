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

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Master__vSetSlaveAddress(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg)
{
    I2C__vWriteRegister(enModule, I2C_MSA_OFFSET, u32SlaveAddressArg, I2C_MSA_SA_MASK, I2C_MSA_R_SA_BIT);
}

uint32_t I2C_Master__u32GetSlaveAddress(I2C_nMODULE enModule)
{
    uint32_t u32SlaveAddressReg = 0xFFFFFFFFUL;
    I2C__enReadRegister(enModule, I2C_MSA_OFFSET, &u32SlaveAddressReg, I2C_MSA_SA_MASK, I2C_MSA_R_SA_BIT);
    return u32SlaveAddressReg;
}

void I2C_Master__vSetOperation(I2C_nMODULE enModule, I2C_nOPERATION enOperationArg)
{
    I2C__vWriteRegister(enModule, I2C_MSA_OFFSET, enOperationArg, I2C_MSA_RS_MASK, I2C_MSA_R_RS_BIT);
}

uint32_t I2C_Master__u32GetOperation(I2C_nMODULE enModule)
{
    I2C_nOPERATION enOperationReg = I2C_enOPERATION_UNDEF;
    I2C__enReadRegister(enModule, I2C_MSA_OFFSET, (uint32_t*) &enOperationReg, I2C_MSA_RS_MASK, I2C_MSA_R_RS_BIT);
    return enOperationReg;
}

void I2C_Master__vSetSlaveAddressOperation(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg, I2C_nOPERATION enOperationArg)
{
    I2C_Master__vSetSlaveAddress(enModule, u32SlaveAddressArg);
    I2C_Master__vSetOperation(enModule, enOperationArg);
}
