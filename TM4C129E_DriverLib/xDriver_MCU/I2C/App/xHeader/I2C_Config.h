/**
 *
 * @file I2C_Config.h
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
 * @verbatim Mar 29, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 29, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_APP_XHEADER_I2C_CONFIG_H_
#define XDRIVER_MCU_I2C_APP_XHEADER_I2C_CONFIG_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>
#include <xUtils/Standard/Standard.h>

void I2C__vSetConfig(I2C_nMODULE enModule, I2C_nMODE enModeArg, uint32_t u32FreqArg);

#endif /* XDRIVER_MCU_I2C_APP_XHEADER_I2C_CONFIG_H_ */
