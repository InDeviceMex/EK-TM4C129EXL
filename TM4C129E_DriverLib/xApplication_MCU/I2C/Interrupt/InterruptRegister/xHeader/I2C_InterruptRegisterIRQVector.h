/**
 *
 * @file I2C_InterruptRegisterIRQVector.h
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

#ifndef XAPPLICATION_MCU_I2C_INTERRUPT_INTERRUPTREGISTER_XHEADER_I2C_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_I2C_INTERRUPT_INTERRUPTREGISTER_XHEADER_I2C_INTERRUPTREGISTERIRQVECTOR_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>

I2C_nERROR I2C__enRegisterIRQVectorHandler(I2C_nMODULE enModuleArg, I2C_pvfIRQVectorHandler_t pfIrqVectorHandlerArg);

#endif /* XAPPLICATION_MCU_I2C_INTERRUPT_INTERRUPTREGISTER_XHEADER_I2C_INTERRUPTREGISTERIRQVECTOR_H_ */
