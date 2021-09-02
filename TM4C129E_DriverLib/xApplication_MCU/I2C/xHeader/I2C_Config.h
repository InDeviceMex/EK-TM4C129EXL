/**
 *
 * @file I2C_Config.h
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
 * @verbatim 31 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_I2C_XHEADER_I2C_CONFIG_H_
#define XAPPLICATION_MCU_I2C_XHEADER_I2C_CONFIG_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>

void I2C__vSetConfig(I2C_nMODULE enModule, I2C_nMODE enModeArg, uint32_t u32FreqArg);

#endif /* XAPPLICATION_MCU_I2C_XHEADER_I2C_CONFIG_H_ */
