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

I2C_nERROR I2C_Master__enSetSlaveAddress(I2C_nMODULE enModuleArg, uint32_t u32AddressArg);
I2C_nERROR I2C_Master__enGetSlaveAddress(I2C_nMODULE enModuleArg, uint32_t* pu32AddressArg);

I2C_nERROR I2C_Master__enSetOperation(I2C_nMODULE enModuleArg, I2C_nOPERATION enOperationArg);
I2C_nERROR I2C_Master__enGetOperation(I2C_nMODULE enModuleArg, I2C_nOPERATION* penOperationArg);

I2C_nERROR I2C_Master__enSetSlaveAddressOperation(I2C_nMODULE enModuleArg, uint32_t u32AddressArg, I2C_nOPERATION enOperationArg);
I2C_nERROR I2C_Master__enGetSlaveAddressOperation(I2C_nMODULE enModuleArg, uint32_t* pu32AddressArg, I2C_nOPERATION* penOperationArg);

I2C_nERROR I2C_Master__enSetSlaveAddressOperationByByte(I2C_nMODULE enModuleArg, uint32_t u32ValueArg);
I2C_nERROR I2C_Master__enGetSlaveAddressOperationByByte(I2C_nMODULE enModuleArg, uint32_t* pu32ValueArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_ADDRESS_H_ */
