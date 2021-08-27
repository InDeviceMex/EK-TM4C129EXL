/**
 *
 * @file I2C_ACK.c
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
 * @verbatim 17 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_ACK.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Slave__vSetACKEnable(I2C_nMODULE enModule, I2C_nACK_ENABLE enACKEnableArg)
{
    I2C__vWriteRegister(enModule, I2C_SACKCTL_OFFSET, (uint32_t) enACKEnableArg, I2C_SACKCTL_ACKOEN_MASK, I2C_SACKCTL_R_ACKOEN_BIT);
}

I2C_nACK_ENABLE I2C_Slave__enGetACKEnable(I2C_nMODULE enModule)
{
    I2C_nACK_ENABLE enACKEnableReg = I2C_enACK_ENABLE_UNDEF;
    I2C__enReadRegister(enModule, I2C_SACKCTL_OFFSET, (uint32_t*) &enACKEnableReg, I2C_SACKCTL_ACKOEN_MASK, I2C_SACKCTL_R_ACKOEN_BIT);
    return enACKEnableReg;
}

void I2C_Slave__vSetACKValue(I2C_nMODULE enModule, I2C_nACK enACKArg)
{
    I2C__vWriteRegister(enModule, I2C_SACKCTL_OFFSET, (uint32_t) enACKArg, I2C_SACKCTL_ACKOVAL_MASK, I2C_SACKCTL_R_ACKOVAL_BIT);
}

I2C_nACK I2C_Slave__enGetACKValue(I2C_nMODULE enModule)
{
    I2C_nACK enACKValueReg = I2C_enACK_UNDEF;
    I2C__enReadRegister(enModule, I2C_SACKCTL_OFFSET, (uint32_t*) &enACKValueReg, I2C_SACKCTL_ACKOVAL_MASK, I2C_SACKCTL_R_ACKOVAL_BIT);
    return enACKValueReg;
}

void I2C_Slave__vSetACK(I2C_nMODULE enModule, I2C_nACK_ENABLE enACKEnableArg, I2C_nACK enACKValueArg)
{
    I2C_Slave__vSetACKValue(enModule, enACKValueArg);
    I2C_Slave__vSetACKEnable(enModule, enACKEnableArg);
}
