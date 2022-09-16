/**
 *
 * @file EEPROM_WorldCount.h
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

#ifndef XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_WORLDCOUNT_H_
#define XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_WORLDCOUNT_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

/**
 * @brief EEPROM Get World Count Max Function
 * @details This function get the Max number of World storage inthe EEPROM peripheral.
 * @return Max Number of Worlds
 *
 * @see  EEPROM__vInitWorldCount
 *
 * @remark This function must be call after the call of @ref  EEPROM__vInitWorldCount to proper initialize the value.
 */
EEPROM_nERROR EEPROM__enGetWordCount(EEPROM_nMODULE enModuleArg, uint32_t* pu32WorldCountArg);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_WORLDCOUNT_H_ */
