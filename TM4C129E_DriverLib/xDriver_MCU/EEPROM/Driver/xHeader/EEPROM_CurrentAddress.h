/**
 *
 * @file EEPROM_CurrentAddress.h
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
 * @verbatim 15 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_CURRENTADDRESS_H_
#define XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_CURRENTADDRESS_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enSetCurrentAddress(EEPROM_nMODULE enModuleArg, UBase_t uxCurrentAddressArg);
EEPROM_nERROR EEPROM__enGetCurrentAddress(EEPROM_nMODULE enModuleArg, UBase_t* puxCurrentAddressArg);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_CURRENTADDRESS_H_ */
