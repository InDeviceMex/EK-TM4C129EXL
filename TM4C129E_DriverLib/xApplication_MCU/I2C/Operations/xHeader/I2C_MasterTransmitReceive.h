/**
 *
 * @file I2C_MasterTransmitReceive.h
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

#ifndef XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_MASTERTRANSMITRECEIVE_H_
#define XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_MASTERTRANSMITRECEIVE_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>

I2C_nERROR I2C_Master_enTransmitReceive(I2C_nMODULE enModule,
                                         uint32_t u32SlaveAddressArg,
                                         const uint8_t *pu8DataTransmit,
                                         uint32_t u32DataTransmitSize,
                                         uint8_t *pu8DataReceive,
                                         uint32_t u32DataReceiveSize);

I2C_nERROR I2C_Master_enReceiveTransmit(I2C_nMODULE enModule,
                                         uint32_t u32SlaveAddressArg,
                                         const uint8_t *pu8DataTransmit,
                                         uint32_t u32DataTransmitSize,
                                         uint8_t *pu8DataReceive,
                                         uint32_t u32DataReceiveSize);

#endif /* XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_MASTERTRANSMITRECEIVE_H_ */
