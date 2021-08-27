/**
 *
 * @file I2C_GlitchFilter.c
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
#include <xDriver_MCU/I2C/Driver/xHeader/I2C_GlitchFilter.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/xHeader/I2C_WriteRegister.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/xHeader/I2C_ReadRegister.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>


void I2C__vSetEnableGlitchFilter(I2C_nMODULE enModule, I2C_nGLITCH enGlitchEnableArg)
{
    I2C__vWriteRegister(enModule, I2C_MCR_OFFSET, (uint32_t) enGlitchEnableArg, I2C_MCR_GFE_MASK, I2C_MCR_R_GFE_BIT);
}

I2C_nGLITCH I2C__enGetEnableGlitchFilter(I2C_nMODULE enModule)
{
    I2C_nGLITCH enGlitchClockReg = I2C_enGLITCH_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCR_OFFSET, (uint32_t*) &enGlitchClockReg, I2C_MCR_GFE_MASK, I2C_MCR_R_GFE_BIT);
    return enGlitchClockReg;
}

void I2C__vSetGlitchFilter(I2C_nMODULE enModule, I2C_nGLITCH_CLOCK enGlitchClockArg)
{
    I2C__vWriteRegister(enModule, I2C_MCR2_OFFSET, (uint32_t) enGlitchClockArg, I2C_MCR2_GFPW_MASK, I2C_MCR2_R_GFPW_BIT);
}

I2C_nGLITCH_CLOCK I2C__enGetGlitchFilter(I2C_nMODULE enModule)
{
    I2C_nGLITCH_CLOCK enGlitchClockReg = I2C_enGLITCH_CLOCK_UNDEF;
    I2C__enReadRegister(enModule, I2C_MCR2_OFFSET, (uint32_t*) &enGlitchClockReg, I2C_MCR2_GFPW_MASK, I2C_MCR2_R_GFPW_BIT);
    return enGlitchClockReg;
}

