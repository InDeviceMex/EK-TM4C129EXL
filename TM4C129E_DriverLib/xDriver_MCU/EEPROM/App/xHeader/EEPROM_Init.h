/**
 *
 * @file EEPROM_Init.h
 * @ingroup EEPROM Driver
 * @brief This files is part of EEPROM Driver.
 * This File contains the Initialization Function
 *
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
 * @verbatim 2020.06.17 @endverbatim
 *
 * @author
 * @verbatim Vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2020.06.17     Vyldram    1.0         initial Version@endverbatim
 *
 * @remarks File required to Initialize EEPROM Driver Correctly.
 * @remarks Any further functionality required to Initialize the Module needs to be implemented here
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_DRIVER_EEPROM_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_DRIVER_EEPROM_INIT_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>
#include <xUtils/Standard/Standard.h>

/**
 * @brief EEPROM Initialization Function
 * @section Initialization
 * @details This function reset, disable and then enable the EEPROM Peripheral.
 * Also it Obtains the max number of blocks and Worlds
 * @return Return Function Status
 * @retval EEPROM_enOK All operations are OK
 * @retval EEPROM_enERROR An operations inside the function had an error
 *
 * @code{.c}
 * main()
 * {
 *      EEPROM__enInit();
 * }
 * @endcode
 *
 * @remark This function must be call before any other EEPROM Driver function
 * @note This function can be call anytime the EEPROM peripheral needs to be re-initialize
 */
EEPROM_nSTATUS EEPROM__enInit(void);

/**
 * @brief EEPROM De-Initialization Function
 * @details This function reset and disable the EEPROM Peripheral.
 * @code{.c}
 * main()
 * {
 *      EEPROM__vDeInit();
 * }
 * @endcode
 * @remark This function could be call after EEPROM Initialization @ref EEPROM__enInit
 * @note This function can be call any time when the EEPROM peripheral requires to be de-Initialized
 */
void EEPROM__vDeInit(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_DRIVER_EEPROM_INIT_H_ */
