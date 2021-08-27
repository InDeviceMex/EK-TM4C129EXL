/**
 *
 * @file I2C_InterruptVector.h
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
 * @verbatim 8 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C__vEnInterruptVector(I2C_nMODULE enModule, I2C_nPRIORITY enI2CPriority);
void I2C__vDisInterruptVector(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_ */
