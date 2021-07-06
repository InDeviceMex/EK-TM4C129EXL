/**
 *
 * @file EEPROM_Ready.h
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

#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_EEPROM_READY_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_EEPROM_READY_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

void EEPROM__vSetReady(void);
void EEPROM__vClearReady(void);
EEPROM_nREADY EEPROM__enIsReady(void);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_EEPROM_READY_H_ */
