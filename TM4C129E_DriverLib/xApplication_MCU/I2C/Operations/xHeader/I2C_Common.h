/**
 *
 * @file I2C_Common.h
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

#ifndef XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_COMMON_H_
#define XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_COMMON_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>

#define I2C_TIMEOUT (0xFFFFUL)

I2C_nERROR I2C_Master__enWaitMultiMaster(I2C_nMODULE enModuleArg, UBase_t uxTimeoutArg);
I2C_nERROR I2C_Master__enGenerateStopCondition(I2C_nMODULE enModule, UBase_t uxTimeoutArg, I2C_pvfIRQSourceHandler_t pvfErrorHandleArg);

#endif /* XAPPLICATION_MCU_I2C_OPERATIONS_XHEADER_I2C_COMMON_H_ */
