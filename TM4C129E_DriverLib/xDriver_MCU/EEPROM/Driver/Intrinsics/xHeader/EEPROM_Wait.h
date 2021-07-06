/**
 *
 * @file EEPROM_Wait.h
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

#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_XHEADER_EEPROM_WAIT_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_XHEADER_EEPROM_WAIT_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>
#include <xUtils/Standard/Standard.h>

/**
 * @brief EEPROM Get Status Function
 * @details This function Get the current status of the EEPROM peripheral.
 * @return Return Function Status
 * @retval EEPROM_enOK Operations is finish
 * @retval EEPROM_enBUSY An Operation is Ongoing
 *
 * @remark This function must be call when the status needs to be knew.
 */
EEPROM_nSTATUS EEPROM__enGetStatus(void);

/**
 * @brief EEPROM Wait Function (Blocking)
 * @details This function waits until the EEPROM peripheral is ready to accept other actions or until the timeout is over.
 * @return Return Function Status
 * @retval EEPROM_enOK All operations are OK
 * @retval EEPROM_enERROR An operations inside the function had an error
 *
 * @par Dependencies
 * Please see @ref EEPROM__enGetStatus
 *
 * @remark This function must be call after any action requested to EEPROM peripheral in order to wait until the action in process is done
 * @todo To Create same functionality  with non-blocking fashion (interrupts)
 */
EEPROM_nSTATUS EEPROM__enWait(void);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_XHEADER_EEPROM_WAIT_H_ */
