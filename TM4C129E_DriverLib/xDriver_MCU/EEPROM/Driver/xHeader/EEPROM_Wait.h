/**
 *
 * @file EEPROM_Wait.h
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

#ifndef XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_WAIT_H_
#define XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_WAIT_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enIsWorking(EEPROM_nMODULE enModuleArg, EEPROM_nSTATUS* penStatusArg);

/**
 * @brief EEPROM Wait Function (Blocking)
 * @details This function waits until the EEPROM peripheral is ready to accept other actions or until the timeout is over.
 * @return Return Function Status
 * @retval EEPROM_enERROR_OK All operations are OK
 * @retval EEPROM_enERROR An operations inside the function had an error
 *
 * @par Dependencies
 * Please see @ref EEPROM__enGetStatus
 *
 * @remark This function must be call after any action requested to EEPROM peripheral in order to wait until the action in process is done
 * @todo To Create same functionality  with non-blocking fashion (interrupts)
 */
EEPROM_nERROR EEPROM__enWait(EEPROM_nMODULE enModuleArg, UBase_t uxRetriesArg);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_WAIT_H_ */
