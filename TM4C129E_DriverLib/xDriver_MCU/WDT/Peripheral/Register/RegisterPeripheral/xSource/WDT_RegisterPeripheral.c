/**
 *
 * @file WDT_RegisterPeripheral.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Peripheral/Register/RegisterPeripheral/WDT_RegisterPeripheral.h>

uintptr_t WDT__uptrBlockBaseAddress(WDT_nMODULE enModuleArg)
{
    const uintptr_t WDT_BLOCK_BASE[(UBase_t) WDT_enMODULE_MAX] =
    {
     WDT0_BASE, WDT1_BASE
    };
    return (WDT_BLOCK_BASE[(UBase_t) enModuleArg]);
}
