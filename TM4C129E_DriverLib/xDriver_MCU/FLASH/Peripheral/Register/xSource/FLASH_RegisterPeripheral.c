/**
 *
 * @file FLASH_RegisterPeripheral.c
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
#include <xDriver_MCU/FLASH/Peripheral/Register/xHeader/FLASH_RegisterPeripheral.h>

uintptr_t FLASH__uptrBlockBaseAddress(FLASH_nMODULE enModuleArg)
{
    const uintptr_t FLASH_BLOCK_BASE[(UBase_t) FLASH_enMODULE_MAX] =
    {
     FLASH_BASE
    };
    return (FLASH_BLOCK_BASE[(UBase_t) enModuleArg]);
}
