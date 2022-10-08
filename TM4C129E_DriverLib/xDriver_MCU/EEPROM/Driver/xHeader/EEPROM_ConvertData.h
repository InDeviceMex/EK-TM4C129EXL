/**
 *
 * @file EEPROM_ConvertData.h
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

#ifndef XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_CONVERTDATA_H_
#define XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_CONVERTDATA_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enExtractData(void* pvDataExtractedArg, UBase_t* puxInitialDataArg,UBase_t uxAddressArg, EEPROM_nVARIABLE enVariableTypeArg);
EEPROM_nERROR EEPROM__enReplaceData(void* pvDataOutArg, UBase_t uxDataToReplaceArg,UBase_t uxAddressArg, EEPROM_nVARIABLE enVariableTypeArg);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_CONVERTDATA_H_ */
