/**
 *
 * @file EEPROM_InterruptSource.h
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTSOURCE_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enSetInterruptSourceState(EEPROM_nMODULE enModuleArg, EEPROM_nSTATE enStateArg);
EEPROM_nERROR EEPROM__enGetInterruptSourceState(EEPROM_nMODULE enModuleArg, EEPROM_nSTATE* penStateArg);
EEPROM_nERROR EEPROM__enEnableInterruptSource(EEPROM_nMODULE enModuleArg);
EEPROM_nERROR EEPROM__enDisableInterruptSource(EEPROM_nMODULE enModuleArg);


#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTSOURCE_H_ */
