/**
 *
 * @file I2C_GlitchFilter.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 27 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_GLITCHFILTER_H_
#define XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_GLITCHFILTER_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C_Master__enSetGlitchFilter(I2C_nMODULE enModuleArg, I2C_nGLITCH_CLOCK enGlitchFilterArg);
I2C_nERROR I2C_Master__enGetGlitchFilter(I2C_nMODULE enModuleArg, I2C_nGLITCH_CLOCK* penGlitchFilterArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_GLITCHFILTER_H_ */
