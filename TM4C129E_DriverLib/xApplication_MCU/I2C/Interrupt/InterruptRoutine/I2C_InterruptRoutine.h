/**
 *
 * @file I2C_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_I2C_INTERRUPT_INTERRUPTROUTINE_I2C_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_I2C_INTERRUPT_INTERRUPTROUTINE_I2C_INTERRUPTROUTINE_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module0.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module1.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module2.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module3.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module4.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module5.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module6.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module7.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module8.h>
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module9.h>

I2C_pvfIRQVectorHandler_t I2C__pvfGetIRQVectorHandler(I2C_nMODULE enModuleArg);
I2C_pvfIRQVectorHandler_t* I2C__pvfGetIRQVectorHandlerPointer(I2C_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_I2C_INTERRUPT_INTERRUPTROUTINE_I2C_INTERRUPTROUTINE_H_ */
