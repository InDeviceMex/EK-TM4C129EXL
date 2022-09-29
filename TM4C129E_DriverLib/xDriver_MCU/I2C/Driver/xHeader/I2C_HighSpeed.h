/**
 *
 * @file I2C_HighSpeed.h
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

#ifndef XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_HIGHSPEED_H_
#define XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_HIGHSPEED_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C__enIsHighSpeedAvailable(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg);

I2C_nERROR I2C__enSetHighSpeedState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg);
I2C_nERROR I2C__enGetHighSpeedState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_HIGHSPEED_H_ */
