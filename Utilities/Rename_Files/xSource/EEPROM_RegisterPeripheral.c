/**
 *
 * @file EEPROM_RegisterPeripheral.c
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Peripheral/Register/RegisterPeripheral/EEPROM_RegisterPeripheral.h>

uintptr_t EEPROM__uptrBlockBaseAddress(EEPROM_nMODULE enModuleArg)
{
    const uintptr_t EEPROM_BLOCK_BASE[(uint32_t) EEPROM_enMODULE_MAX] =
    {
     EEPROM0_BASE, EEPROM1_BASE
    };
    return (EEPROM_BLOCK_BASE[(uint32_t) enModuleArg]);
}
