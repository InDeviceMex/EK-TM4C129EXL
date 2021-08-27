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

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Master__vSetTimeoutCount(I2C_nMODULE enModule, uint32_t u32TimeoutArg)
{
    I2C__vWriteRegister(enModule, I2C_MCLKOCNT_OFFSET, u32TimeoutArg, I2C_MCLKOCNT_CNTL_MASK, I2C_MCLKOCNT_R_CNTL_BIT);
}

uint32_t I2C_Master__u32GetTimeoutCount(I2C_nMODULE enModule)
{
    uint32_t u32TimeoutReg = 0xFFFFFFFFUL;
    I2C__enReadRegister(enModule, I2C_MCLKOCNT_OFFSET, &u32TimeoutReg, I2C_MCLKOCNT_CNTL_MASK, I2C_MCLKOCNT_R_CNTL_BIT);
    return u32TimeoutReg;
}

