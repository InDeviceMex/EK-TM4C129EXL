/**
 *
 * @file I2C_Timeout.h
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

#ifndef XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMEOUT_H_
#define XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMEOUT_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C_Master__vSetTimeoutCount(I2C_nMODULE enModule, uint32_t u32TimeoutArg);
uint32_t I2C_Master__u32GetTimeoutCount(I2C_nMODULE enModule);



#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMEOUT_H_ */
