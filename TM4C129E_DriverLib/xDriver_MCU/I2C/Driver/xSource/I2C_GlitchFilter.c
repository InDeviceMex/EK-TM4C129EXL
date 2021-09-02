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

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C__vSetGlitchFilter(I2C_nMODULE enModule, I2C_nMASTER_GLITCH_CLOCK enGlitchClockArg)
{
    I2C__vWriteRegister(enModule, I2C_MTPR_OFFSET, (uint32_t) enGlitchClockArg,
                        I2C_MTPR_PULSEL_MASK, I2C_MTPR_R_PULSEL_BIT);
}

I2C_nMASTER_GLITCH_CLOCK I2C__enGetGlitchFilter(I2C_nMODULE enModule)
{
    I2C_nMASTER_GLITCH_CLOCK enGlitchClockReg = I2C_enMASTER_GLITCH_CLOCK_BYPASS;
    enGlitchClockReg = (I2C_nMASTER_GLITCH_CLOCK) I2C__u32ReadRegister(enModule,
                           I2C_MTPR_OFFSET, I2C_MTPR_PULSEL_MASK, I2C_MTPR_R_PULSEL_BIT);
    return (enGlitchClockReg);
}

