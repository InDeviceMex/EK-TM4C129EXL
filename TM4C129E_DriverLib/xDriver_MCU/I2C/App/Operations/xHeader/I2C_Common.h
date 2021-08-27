/**
 *
 * @file I2C_Common.h
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

#ifndef XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_COMMON_H_
#define XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_COMMON_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

#define I2C_TIMEOUT (0xFFFFUL)

I2C_nSTATUS I2C_Master__enWaitMultiMaster(I2C_nMODULE enModule);
I2C_nSTATUS I2C_Master__enGenerateStopCondition(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_COMMON_H_ */
