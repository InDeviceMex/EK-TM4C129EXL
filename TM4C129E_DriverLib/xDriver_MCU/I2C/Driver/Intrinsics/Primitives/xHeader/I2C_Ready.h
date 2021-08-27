/**
 *
 * @file I2C_Ready.h
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_I2C_READY_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_I2C_READY_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C__vSetReady(I2C_nMODULE enModule);
void I2C__vClearReady(I2C_nMODULE enModule);
I2C_nREADY I2C__enIsReady(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_I2C_READY_H_ */
