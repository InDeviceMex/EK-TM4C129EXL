/**
 *
 * @file EEPROM_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_EEPROM_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_EEPROM_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

void EEPROM__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),EEPROM_nINTERRUPT enInterruptParam);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_EEPROM_INTERRUPTREGISTERIRQSOURCE_H_ */
