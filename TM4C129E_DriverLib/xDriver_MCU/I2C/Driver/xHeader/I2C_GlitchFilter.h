/**
 *
 * @file I2C_GlitchFilter.h
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

#ifndef XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_GLITCHFILTER_H_
#define XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_GLITCHFILTER_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C__vSetEnableGlitchFilter(I2C_nMODULE enModule, I2C_nGLITCH enGlitchEnableArg);
I2C_nGLITCH I2C__enGetEnableGlitchFilter(I2C_nMODULE enModule);

void I2C__vSetGlitchFilter(I2C_nMODULE enModule, I2C_nGLITCH_CLOCK enGlitchClockArg);
I2C_nGLITCH_CLOCK I2C__enGetGlitchFilter(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_GLITCHFILTER_H_ */
