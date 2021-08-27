/**
 *
 * @file I2C_AltOwnAddress.c
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_AltOwnAddress.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Slave__vSetEnableAltOwnAddress(I2C_nMODULE enModule, I2C_nALT_ADDRESS enAlternateAddressArg)
{
    I2C__vWriteRegister(enModule, I2C_SOAR2_OFFSET, (uint32_t) enAlternateAddressArg, I2C_SOAR2_OAR2EN_MASK, I2C_SOAR2_R_OAR2EN_BIT);
}

I2C_nALT_ADDRESS I2C_Slave__enGetEnableAltOwnAddress(I2C_nMODULE enModule)
{
    I2C_nALT_ADDRESS enEnableAltAddressReg = I2C_enALT_ADDRESS_UNDEF;
    I2C__enReadRegister(enModule, I2C_SOAR2_OFFSET, (uint32_t*) &enEnableAltAddressReg, I2C_SOAR2_OAR2EN_MASK, I2C_SOAR2_R_OAR2EN_BIT);
    return enEnableAltAddressReg;
}

void I2C_Slave__vSetAltOwnAddress(I2C_nMODULE enModule, I2C_nALT_ADDRESS enAlternateAddressArg, uint32_t u32OwnAddressArg)
{
    I2C_Slave__vSetEnableAltOwnAddress(enModule, enAlternateAddressArg);
    I2C__vWriteRegister(enModule, I2C_SOAR2_OFFSET, u32OwnAddressArg, I2C_SOAR2_OAR2_MASK, I2C_SOAR2_R_OAR2_BIT);
}

uint32_t I2C_Slave__u32GetAltOwnAddress(I2C_nMODULE enModule)
{
    uint32_t u32AltAddressReg = 0xFFFFFFFFUL;
    I2C__enReadRegister(enModule, I2C_SOAR2_OFFSET, &u32AltAddressReg, I2C_SOAR2_OAR2_MASK, I2C_SOAR2_R_OAR2_BIT);
    return u32AltAddressReg;
}
