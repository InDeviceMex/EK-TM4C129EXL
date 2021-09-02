/**
 *
 * @file I2C_InterruptVector.h
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_I2C_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_I2C_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>

void I2C__vEnInterruptVector(I2C_nMODULE enModule, I2C_nPRIORITY enI2CPriority);
void I2C__vDisInterruptVector(I2C_nMODULE enModule);

#endif /* XAPPLICATION_MCU_I2C_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_ */
