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

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Slave__vSetMainOwnAddress(I2C_nMODULE enModule, uint32_t u32OwnAddressArg)
{
    I2C__vWriteRegister(enModule, I2C_SOAR_OFFSET, u32OwnAddressArg, I2C_SOAR_OAR_MASK, I2C_SOAR_R_OAR_BIT);
}

uint32_t I2C_Slave__u32GetMainOwnAddress(I2C_nMODULE enModule)
{
    uint32_t u32MainAddressReg = 0xFFFFFFFFUL;
    I2C__enReadRegister(enModule, I2C_SOAR_OFFSET, &u32MainAddressReg, I2C_SOAR_OAR_MASK, I2C_SOAR_R_OAR_BIT);
    return u32MainAddressReg;
}


