/**
 *
 * @file I2C_Mode.c
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
 * @verbatim Mar 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/xHeader/I2C_Mode.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/xHeader/I2C_WriteRegister.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/xHeader/I2C_ReadRegister.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C__vSetMode(I2C_nMODULE enModule, I2C_nMODE enModeArg)
{
    I2C__vWriteRegister(enModule, I2C_MCR_OFFSET, (uint32_t) enModeArg, I2C_MCR_R_LPBK_MASK | I2C_MCR_R_MFE_MASK | I2C_MCR_R_SFE_MASK, 0UL);
}

I2C_nMODE I2C__enGetMode(I2C_nMODULE enModule)
{
    I2C_nMODE enModeReg = I2C_enMODE_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCR_OFFSET, (uint32_t*) &enModeReg, I2C_MCR_R_LPBK_MASK | I2C_MCR_R_MFE_MASK | I2C_MCR_R_SFE_MASK, 0UL);
    return enModeReg;
}



