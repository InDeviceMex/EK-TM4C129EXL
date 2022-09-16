/**
 *
 * @file EEPROM_Erase.h
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
 * @verbatim 16 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_ERASE_H_
#define XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_ERASE_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enMassErase(EEPROM_nMODULE enModuleArg);
EEPROM_nERROR EEPROM__enIsEraseInProgress(EEPROM_nMODULE enModuleArg, EEPROM_nSTATUS* penErasingArg);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_ERASE_H_ */
