/**
 *
 * @file I2C_Status.h
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
 * @verbatim Mar 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_STATUS_H_
#define XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_STATUS_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nSTATUS I2C_Master__enIsTimeoutError(I2C_nMODULE enModule);
I2C_nBUSY I2C_Master__enIsBusBusy(I2C_nMODULE enModule);
I2C_nIDLE I2C_Master__enIsControllerIdle(I2C_nMODULE enModule);
I2C_nARBITRATION I2C_Master__enIsArbitrationLost(I2C_nMODULE enModule);
I2C_nACK I2C_Master__enIsTransmittedDataNACK(I2C_nMODULE enModule);
I2C_nACK I2C_Master__enIsTransmittedAddressNACK(I2C_nMODULE enModule);
I2C_nSTATUS I2C_Master__enIsLastOperationError(I2C_nMODULE enModule);
I2C_nBUSY I2C_Master__enIsControllerBusy(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_STATUS_H_ */
