/**
 *
 * @file EEPROM_InterruptRoutine.h
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
 * @verbatim 25 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_EEPROM_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_EEPROM_INTERRUPTROUTINE_H_

#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/EEPROM_InterruptRoutine_Vector.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/EEPROM_InterruptRoutine_Source.h>

void (*EEPROM__pvfGetIRQVectorHandler(void))(void);
void (**EEPROM__pvfGetIRQVectorHandlerPointer(void))(void);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_EEPROM_INTERRUPTROUTINE_H_ */
