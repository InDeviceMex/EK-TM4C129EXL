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

I2C_nSLAVE_REQUEST I2C_Slave__enGetRequestStatus(I2C_nMODULE enModule);

I2C_nSLAVE_REQUEST_STATUS I2C_Slave__enIsAltAddressReceived(I2C_nMODULE enModule);
I2C_nSLAVE_REQUEST_STATUS I2C_Slave__enIsFirstByteReceived(I2C_nMODULE enModule);
I2C_nSLAVE_REQUEST_STATUS I2C_Slave__enIsTransmitRequestReceived(I2C_nMODULE enModule);
I2C_nSLAVE_REQUEST_STATUS I2C_Slave__enIsReceiveRequestReceived(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_REQUEST_H_ */
