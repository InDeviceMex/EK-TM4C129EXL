/**
 *
 * @file EEPROM_WorldCount.h
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

#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_XHEADER_EEPROM_WORLDCOUNT_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_XHEADER_EEPROM_WORLDCOUNT_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>
#include <xUtils/Standard/Standard.h>

/**
 * @brief EEPROM Init World Count Max Function
 * @details This function Initialize the static global Max number of World variable with the Data of the register.
 *
 * @see  EEPROM__u32GetWorldCount
 *
 * @remark This function must be call before any call to @ref  EEPROM__u32GetWorldCount.
 */
void EEPROM__vInitWorldCount(void);

/**
 * @brief EEPROM Get World Count Max Function
 * @details This function get the Max number of World storage inthe EEPROM peripheral.
 * @return Max Number of Worlds
 *
 * @see  EEPROM__vInitWorldCount
 *
 * @remark This function must be call after the call of @ref  EEPROM__vInitWorldCount to proper initialize the value.
 */
uint32_t EEPROM__u32GetWorldCount(void);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_XHEADER_EEPROM_WORLDCOUNT_H_ */
