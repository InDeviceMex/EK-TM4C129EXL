/**
 *
 * @file EEPROM_InterruptRegisterIRQSource.h
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

void EEPROM__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void));

#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTREGISTERIRQSOURCE_H_ */
