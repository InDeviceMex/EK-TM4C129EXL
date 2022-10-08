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

I2C_nERROR I2C_Slave__enSetOwnAddressAlternateState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg);
I2C_nERROR I2C_Slave__enGetOwnAddressAlternateState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg);

I2C_nERROR I2C_Slave__enSetOwnAddressAlternate(I2C_nMODULE enModuleArg, UBase_t uxOwnAddressArg);
I2C_nERROR I2C_Slave__enGetOwnAddressAlternate(I2C_nMODULE enModuleArg, UBase_t* puxOwnAddressArg);

I2C_nERROR I2C_Slave__enSetOwnAddressAlternateWithState(I2C_nMODULE enModuleArg, UBase_t uxOwnAddressArg, I2C_nSTATE enStateArg);
I2C_nERROR I2C_Slave__enGetOwnAddressAlternateWithState(I2C_nMODULE enModuleArg, UBase_t* puxOwnAddressArg, I2C_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ALTOWNADDRESS_H_ */
