/**
 *
 * @file I2C_LineState.c
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
#include <xDriver_MCU/I2C/Driver/xHeader/I2C_LineState.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/xHeader/I2C_ReadRegister.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nLINE_STATE I2C__enGetLineState(I2C_nMODULE enModule, I2C_nLINE enLineArg)
{
    I2C_nLINE_STATE enLineStatereg = I2C_enLINE_STATE_UNDEF;
    I2C__enReadRegister(enModule, I2C_MBMON_OFFSET, (uint32_t*) &enLineStatereg, 0x1UL, (uint32_t) enLineArg);
    return enLineStatereg;
}

I2C_nLINE_STATE I2C__enGetSCLState(I2C_nMODULE enModule)
{
    return I2C__enGetLineState(enModule, I2C_enLINE_SCL);
}

I2C_nLINE_STATE I2C__enGetSDAState(I2C_nMODULE enModule)
{
    return I2C__enGetLineState(enModule, I2C_enLINE_SDA);
}
