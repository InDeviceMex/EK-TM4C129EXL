/**
 *
 * @file I2C_InterruptRoutine.h
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
#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_I2C_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_I2C_INTERRUPTROUTINE_H_

#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module0.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module1.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module2.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module3.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Master_InterruptRoutine_Source.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Slave_InterruptRoutine_Source.h>

extern void (*I2C__pvIRQVectorHandler[(uint32_t) I2C_enMODULE_MAX]) (void);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_I2C_INTERRUPTROUTINE_H_ */
