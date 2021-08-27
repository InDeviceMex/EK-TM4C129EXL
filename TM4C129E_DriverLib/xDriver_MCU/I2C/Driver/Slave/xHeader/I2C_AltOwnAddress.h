/**
 *
 * @file I2C_AltOwnAddress.h
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ALTOWNADDRESS_H_
#define XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ALTOWNADDRESS_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C_Slave__vSetEnableAltOwnAddress(I2C_nMODULE enModule, I2C_nALT_ADDRESS enAlternateAddressArg);
I2C_nALT_ADDRESS I2C_Slave__enGetEnableAltOwnAddress(I2C_nMODULE enModule);
void I2C_Slave__vSetAltOwnAddress(I2C_nMODULE enModule, I2C_nALT_ADDRESS enAlternateAddressArg, uint32_t u32OwnAddressArg);
uint32_t I2C_Slave__u32GetAltOwnAddress(I2C_nMODULE enModule);


#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ALTOWNADDRESS_H_ */
