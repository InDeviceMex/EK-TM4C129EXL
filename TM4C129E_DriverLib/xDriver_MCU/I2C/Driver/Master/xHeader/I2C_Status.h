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

I2C_nERROR I2C_Master__enGetDMATxStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg);
I2C_nERROR I2C_Master__enGetDMARxStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg);
I2C_nERROR I2C_Master__enGetSCLTimeoutStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg);

I2C_nERROR I2C_Master__enGetBusStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg);
I2C_nERROR I2C_Master__enGetControllerStatus(I2C_nMODULE enModuleArg, I2C_nSTATUS* penStatusArg);

I2C_nERROR I2C_Master__enGetArbitrationStatus(I2C_nMODULE enModuleArg, I2C_nARBITRATION* penStatusArg);

I2C_nERROR I2C_Master__enGetLastOperationErrorStatus(I2C_nMODULE enModuleArg, I2C_nOPERATION_ERROR* penStatusArg);
I2C_nERROR I2C_Master__enGetAcknowledgeDataStatus(I2C_nMODULE enModuleArg, I2C_nACK* penStatusArg);
I2C_nERROR I2C_Master__enGetAcknowledgeAddressStatus(I2C_nMODULE enModuleArg, I2C_nACK* penStatusArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_STATUS_H_ */
