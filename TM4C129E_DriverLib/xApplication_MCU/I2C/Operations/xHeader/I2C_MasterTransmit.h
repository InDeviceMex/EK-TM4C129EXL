/**
 *
 * @file I2C_MasterTransmit.h
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

#ifndef XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_MASTERTRANSMIT_H_
#define XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_MASTERTRANSMIT_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>

I2C_nERROR I2C_Master_enTransmitGeneric(I2C_nMODULE enModule,
                                         I2C_nSTATE enMultiMasterArg,
                                         I2C_nSTATE enStopConditionArg,
                                         UBase_t uxSlaveAddressArg,
                                         const uint8_t *pu8Data,
                                         UBase_t uxDataSize);

I2C_nERROR I2C_Master_enTransmit(I2C_nMODULE enModule,
                                  UBase_t uxSlaveAddressArg,
                                  const uint8_t *pu8Data,
                                  UBase_t uxDataSize);

I2C_nERROR I2C_Master_enTransmitByte(I2C_nMODULE enModule,
                                      UBase_t uxSlaveAddressArg,
                                      const uint8_t u8Data);

I2C_nERROR I2C_Master_enTransmitMultiByte(I2C_nMODULE enModule,
                                           UBase_t uxSlaveAddressArg,
                                           const uint8_t *pu8Data, UBase_t uxDataSize);

#endif /* XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_MASTERTRANSMIT_H_ */
