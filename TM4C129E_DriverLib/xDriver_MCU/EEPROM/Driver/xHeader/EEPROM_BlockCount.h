/**
 *
 * @file EEPROM_BlockCount.h
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

#ifndef XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_BLOCKCOUNT_H_
#define XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_BLOCKCOUNT_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

/**
 * @brief EEPROM Init Block Count Max Function
 * @details This function Initialize the static global Max number of Block Worlds variable with the Data of the register.
 *
 * @see  EEPROM__uxGetBlockCount
 *
 * @remark This function must be call before any call to @ref  EEPROM__uxGetBlockCount.
 */
EEPROM_nERROR EEPROM__enGetBlockCount(EEPROM_nMODULE enModuleArg, UBase_t* puxBlockCountArg);




#endif /* XDRIVER_MCU_EEPROM_DRIVER_XHEADER_EEPROM_BLOCKCOUNT_H_ */
