/**
 *
 * @file I2C_OwnAddress.h
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
 * @verbatim 8 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_OWNADDRESS_H_
#define XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_OWNADDRESS_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C_Slave__enSetOwnAddress(I2C_nMODULE enModuleArg, uint32_t u32OwnAddressArg);
I2C_nERROR I2C_Slave__enGetOwnAddress(I2C_nMODULE enModuleArg, uint32_t* pu32OwnAddressArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_OWNADDRESS_H_ */
