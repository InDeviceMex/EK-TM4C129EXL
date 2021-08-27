/**
 *
 * @file I2C_MasterTransmitReceive.h
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
 * @verbatim Mar 30, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 30, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_MASTERTRANSMITRECEIVE_H_
#define XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_MASTERTRANSMITRECEIVE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nSTATUS I2C_Master_enTransmitReceive(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg,
                                         const uint8_t *pu8DataTransmit, uint32_t u32DataTransmitSize,
                                         uint8_t *pu8DataReceive, uint32_t u32DataReceiveSize);

I2C_nSTATUS I2C_Master_enReceiveTransmit(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg,
                                         const uint8_t *pu8DataTransmit, uint32_t u32DataTransmitSize,
                                         uint8_t *pu8DataReceive, uint32_t u32DataReceiveSize);

#endif /* XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_MASTERTRANSMITRECEIVE_H_ */
