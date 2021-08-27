/**
 *
 * @file I2C_Mode.h
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

#ifndef XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_MODE_H_
#define XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_MODE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C__vSetMode(I2C_nMODULE enModule, I2C_nMODE enModeArg);
I2C_nMODE I2C__enGetMode(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_MODE_H_ */
