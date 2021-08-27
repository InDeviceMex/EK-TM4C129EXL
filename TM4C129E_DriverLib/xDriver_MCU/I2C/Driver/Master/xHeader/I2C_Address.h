/**
 *
 * @file I2C_Address.h
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

#ifndef XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_ADDRESS_H_
#define XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_ADDRESS_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C_Master__vSetSlaveAddress(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg);
uint32_t I2C_Master__u32GetSlaveAddress(I2C_nMODULE enModule);

void I2C_Master__vSetOperation(I2C_nMODULE enModule, I2C_nOPERATION enOperationArg);
uint32_t I2C_Master__u32GetOperation(I2C_nMODULE enModule);

void I2C_Master__vSetSlaveAddressOperation(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg, I2C_nOPERATION enOperationArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_ADDRESS_H_ */
