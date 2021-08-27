/**
 *
 * @file I2C_LineState.h
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
 * @verbatim Mar 27, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 27, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_LINESTATE_H_
#define XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_LINESTATE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nLINE_STATE I2C__enGetLineState(I2C_nMODULE enModule, I2C_nLINE enLineArg);
I2C_nLINE_STATE I2C__enGetSCLState(I2C_nMODULE enModule);
I2C_nLINE_STATE I2C__enGetSDAState(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_XHEADER_I2C_LINESTATE_H_ */
