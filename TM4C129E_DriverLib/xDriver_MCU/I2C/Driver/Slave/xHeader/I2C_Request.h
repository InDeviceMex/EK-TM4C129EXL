/**
 *
 * @file I2C_Request.h
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
 * @verbatim 17 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_REQUEST_H_
#define XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_REQUEST_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C_Slave__enGetDMATxStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg);
I2C_nERROR I2C_Slave__enGetDMARxStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg);

I2C_nERROR I2C_Slave__enGetReceiveRequestStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg);
I2C_nERROR I2C_Slave__enGetFirstByteReceivedStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg);

I2C_nERROR I2C_Slave__enGetTransmitRequestStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg);

I2C_nERROR I2C_Slave__enGetOwnAddressAlternateMatchStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg);

I2C_nERROR I2C_Slave__enGetQuickCommandStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* enStatusArg);
I2C_nERROR I2C_Slave__enGetQuickCommandType(I2C_nMODULE enModuleArg, I2C_nOPERATION* enTypeArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_REQUEST_H_ */
