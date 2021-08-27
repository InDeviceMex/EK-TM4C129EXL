/**
 *
 * @file I2C_MasterReceive.h
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

#ifndef XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_MASTERRECEIVE_H_
#define XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_MASTERRECEIVE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>
I2C_nSTATUS I2C_Master_enReceiveGeneric(I2C_nMODULE enModule, I2C_nMULTIMASTER enMultiMasterArg, I2C_nSTOPCONDITION enStopConditionArg,
                                 uint32_t u32SlaveAddressArg, uint8_t *pu8Data, uint32_t u32DataSize);

I2C_nSTATUS I2C_Master_enReceiveMultiByte(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg, uint8_t *pu8Data, uint32_t u32DataSize);
I2C_nSTATUS I2C_Master_enReceiveByte(I2C_nMODULE enModule, uint32_t u32SlaveAddressArg, uint8_t u8Data);

#endif /* XDRIVER_MCU_I2C_APP_OPERATIONS_XHEADER_I2C_MASTERRECEIVE_H_ */
