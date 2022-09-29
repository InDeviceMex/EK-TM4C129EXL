/**
 *
 * @file I2C_ACK.h
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

#ifndef XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ACK_H_
#define XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ACK_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C_Slave__enSetACKOverrideState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg);
I2C_nERROR I2C_Slave__enGetACKOverrideState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg);

I2C_nERROR I2C_Slave__enSetACKOverrideValue(I2C_nMODULE enModuleArg, I2C_nACK enValueArg);
I2C_nERROR I2C_Slave__enGetACKOverrideValue(I2C_nMODULE enModuleArg, I2C_nACK* penValueArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ACK_H_ */
