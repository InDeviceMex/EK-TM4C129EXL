/**
 *
 * @file I2C_LineState.h
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
 * @verbatim 27 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_LINESTATE_H_
#define XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_LINESTATE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C_Master__enGetLineLevel(I2C_nMODULE enModuleArg, I2C_nLINE enLineArg, I2C_nLEVEL* enLevelArg);
I2C_nERROR I2C_Master__enGetSCLLevel(I2C_nMODULE enModule, I2C_nLEVEL* enLevelArg);
I2C_nERROR I2C_Master__enGetSDALevel(I2C_nMODULE enModule, I2C_nLEVEL* enLevelArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_LINESTATE_H_ */
